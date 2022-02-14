
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {TYPE_2__* udev; TYPE_1__* net; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usbnet*,int ) ;
 int FUNC_2 (struct usbnet*) ;
 int FUNC_3 (struct usbnet*) ;
 int FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_1(VAR_0, VAR_0->net->dev_addr);
 if (VAR_1) {
  FUNC_0(&VAR_0->udev->dev, "Cannot set MAC address\n");
  goto out;
 }


 VAR_1 = FUNC_5(VAR_0, 0);
 if (VAR_1) {
  FUNC_0(&VAR_0->udev->dev, "Cannot set autoneg\n");
  goto out;
 }

 FUNC_3(VAR_0);
 FUNC_2(VAR_0);

 FUNC_4(VAR_0);
 VAR_1 = 0;
out:
 return VAR_1;
}
