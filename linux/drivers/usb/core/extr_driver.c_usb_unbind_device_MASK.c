
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_driver {int supports_autosuspend; int (* disconnect ) (struct usb_device*) ;} ;
struct usb_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct usb_device*) ;
 struct usb_device* FUNC_1 (struct device*) ;
 struct usb_device_driver* FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_1(VAR_0);
 struct usb_device_driver *VAR_2 = FUNC_2(VAR_0->driver);

 VAR_2->disconnect(VAR_1);
 if (!VAR_2->supports_autosuspend)
  FUNC_3(VAR_1);
 return 0;
}
