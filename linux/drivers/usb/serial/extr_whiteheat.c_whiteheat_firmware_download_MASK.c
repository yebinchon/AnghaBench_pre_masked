
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dev; } ;
struct usb_device_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_1,
     const struct usb_device_id *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->dev, "whiteheat_loader.fw");
 if (VAR_3 >= 0) {
  VAR_3 = FUNC_0(VAR_1->dev, "whiteheat.fw");
  if (VAR_3 >= 0)
   return 0;
 }
 return -VAR_0;
}
