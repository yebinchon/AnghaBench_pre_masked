
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_gpriv {int dummy; } ;
struct usb_gadget {int is_selfpowered; } ;


 int VAR_0 ;
 struct usbhsg_gpriv* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usbhsg_gpriv*,int ) ;
 int FUNC_2 (struct usbhsg_gpriv*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_1, int VAR_2)
{
 struct usbhsg_gpriv *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  FUNC_2(VAR_3, VAR_0);
 else
  FUNC_1(VAR_3, VAR_0);

 VAR_1->is_selfpowered = (VAR_2 != 0);

 return 0;
}
