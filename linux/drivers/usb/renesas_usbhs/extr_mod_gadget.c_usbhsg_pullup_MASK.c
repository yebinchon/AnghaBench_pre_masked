
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {int dummy; } ;
struct usbhs_priv {int dummy; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_priv*,unsigned long) ;
 int FUNC_1 (struct usbhs_priv*,unsigned long) ;
 struct usbhsg_gpriv* FUNC_2 (struct usb_gadget*) ;
 struct usbhs_priv* FUNC_3 (struct usbhsg_gpriv*) ;
 int FUNC_4 (struct usbhsg_gpriv*,int ) ;
 int FUNC_5 (struct usbhsg_gpriv*,int ) ;
 int FUNC_6 (struct usbhs_priv*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget *VAR_1, int VAR_2)
{
 struct usbhsg_gpriv *VAR_3 = FUNC_2(VAR_1);
 struct usbhs_priv *VAR_4 = FUNC_3(VAR_3);
 unsigned long VAR_5;

 FUNC_0(VAR_4, VAR_5);
 if (VAR_2)
  FUNC_5(VAR_3, VAR_0);
 else
  FUNC_4(VAR_3, VAR_0);
 FUNC_6(VAR_4);
 FUNC_1(VAR_4, VAR_5);

 return 0;
}
