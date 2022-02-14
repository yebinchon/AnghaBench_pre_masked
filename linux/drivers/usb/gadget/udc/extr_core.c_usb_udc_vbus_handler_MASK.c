
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_udc {int vbus; } ;
struct usb_gadget {struct usb_udc* udc; } ;


 int FUNC_0 (struct usb_udc*) ;

void FUNC_1(struct usb_gadget *VAR_0, bool VAR_1)
{
 struct usb_udc *VAR_2 = VAR_0->udc;

 if (VAR_2) {
  VAR_2->vbus = VAR_1;
  FUNC_0(VAR_2);
 }
}
