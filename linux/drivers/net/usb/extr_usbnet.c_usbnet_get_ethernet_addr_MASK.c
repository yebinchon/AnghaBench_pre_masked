
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* udev; TYPE_1__* net; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (TYPE_2__*,int,unsigned char*,int) ;

int FUNC_3(struct usbnet *VAR_1, int VAR_2)
{
 int VAR_3 = -1, VAR_4;
 unsigned char VAR_5 [13];

 VAR_4 = FUNC_2(VAR_1->udev, VAR_2, VAR_5, sizeof VAR_5);
 if (VAR_4 == 12)
  VAR_3 = FUNC_1(VAR_1->net->dev_addr, VAR_5, 6);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->udev->dev,
   "bad MAC string %d fetch, %d\n", VAR_2, VAR_3);
  if (VAR_4 >= 0)
   VAR_4 = -VAR_0;
  return VAR_4;
 }
 return 0;
}
