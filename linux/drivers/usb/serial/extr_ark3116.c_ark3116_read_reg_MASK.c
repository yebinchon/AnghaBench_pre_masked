
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__* interface; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (int ,int ,int,int,int ,unsigned int,unsigned char*,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial *VAR_2,
       unsigned VAR_3, unsigned char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->dev,
     FUNC_2(VAR_2->dev, 0),
     0xfe, 0xc0, 0, VAR_3,
     VAR_4, 1, VAR_0);
 if (VAR_5 < 1) {
  FUNC_0(&VAR_2->interface->dev,
    "failed to read register %u: %d\n",
    VAR_3, VAR_5);
  if (VAR_5 >= 0)
   VAR_5 = -VAR_1;

  return VAR_5;
 }

 return 0;
}
