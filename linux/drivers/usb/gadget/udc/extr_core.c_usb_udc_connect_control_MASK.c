
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_udc {int gadget; scalar_t__ vbus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_udc *VAR_0)
{
 if (VAR_0->vbus)
  FUNC_0(VAR_0->gadget);
 else
  FUNC_1(VAR_0->gadget);
}
