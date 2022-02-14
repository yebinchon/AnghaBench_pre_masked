
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {int vbus_active; } ;
struct usbhs_priv {int dummy; } ;
struct usb_gadget {int dummy; } ;
struct platform_device {int dummy; } ;


 struct platform_device* FUNC_0 (struct usbhs_priv*) ;
 int FUNC_1 (struct platform_device*) ;
 struct usbhsg_gpriv* FUNC_2 (struct usb_gadget*) ;
 struct usbhs_priv* FUNC_3 (struct usbhsg_gpriv*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0, int VAR_1)
{
 struct usbhsg_gpriv *VAR_2 = FUNC_2(VAR_0);
 struct usbhs_priv *VAR_3 = FUNC_3(VAR_2);
 struct platform_device *VAR_4 = FUNC_0(VAR_3);

 VAR_2->vbus_active = !!VAR_1;

 FUNC_1(VAR_4);

 return 0;
}
