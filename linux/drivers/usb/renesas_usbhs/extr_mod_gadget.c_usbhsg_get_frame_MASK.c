
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_gadget {int dummy; } ;


 int FUNC_0 (struct usbhs_priv*) ;
 struct usbhsg_gpriv* FUNC_1 (struct usb_gadget*) ;
 struct usbhs_priv* FUNC_2 (struct usbhsg_gpriv*) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_0)
{
 struct usbhsg_gpriv *VAR_1 = FUNC_1(VAR_0);
 struct usbhs_priv *VAR_2 = FUNC_2(VAR_1);

 return FUNC_0(VAR_2);
}
