
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct usb_hcd {int dummy; } ;
struct usb_bus {int dummy; } ;
struct device {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct usb_bus*) ;
 struct usb_bus* FUNC_1 (struct device*) ;
 struct wusbhc* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static struct wusbhc *FUNC_3(struct device *VAR_0)
{
 struct usb_bus *VAR_1 = FUNC_1(VAR_0);
 struct usb_hcd *VAR_2 = FUNC_0(VAR_1);
 return FUNC_2(VAR_2);
}
