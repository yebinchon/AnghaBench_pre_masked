
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_driver {int (* reset ) (struct usb_gadget*) ;} ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_gadget*,int ) ;

void FUNC_2(struct usb_gadget *VAR_1,
  struct usb_gadget_driver *VAR_2)
{
 VAR_2->reset(VAR_1);
 FUNC_1(VAR_1, VAR_0);
}
