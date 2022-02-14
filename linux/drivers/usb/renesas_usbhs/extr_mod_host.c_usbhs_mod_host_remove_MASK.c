
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_hcd {int dummy; } ;


 int FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (struct usbhsh_hpriv*) ;
 struct usbhsh_hpriv* FUNC_2 (struct usbhs_priv*) ;

int FUNC_3(struct usbhs_priv *VAR_0)
{
 struct usbhsh_hpriv *VAR_1 = FUNC_2(VAR_0);
 struct usb_hcd *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);

 return 0;
}
