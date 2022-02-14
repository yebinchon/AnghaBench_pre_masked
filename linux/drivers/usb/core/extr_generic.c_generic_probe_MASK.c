
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ authorized; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_1)
{
 int VAR_2, VAR_3;




 if (VAR_1->authorized == 0)
  FUNC_0(&VAR_1->dev, "Device is not authorized for usage\n");
 else {
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 >= 0) {
   VAR_2 = FUNC_3(VAR_1, VAR_3);
   if (VAR_2 && VAR_2 != -VAR_0) {
    FUNC_0(&VAR_1->dev, "can't set config #%d, error %d\n",
     VAR_3, VAR_2);


   }
  }
 }

 FUNC_2(VAR_1);

 return 0;
}
