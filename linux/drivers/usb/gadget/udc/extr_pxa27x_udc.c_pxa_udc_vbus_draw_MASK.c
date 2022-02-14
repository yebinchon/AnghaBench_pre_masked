
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct pxa_udc {int transceiver; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pxa_udc* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct usb_gadget *VAR_1, unsigned VAR_2)
{
 struct pxa_udc *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!FUNC_0(VAR_3->transceiver))
  return FUNC_2(VAR_3->transceiver, VAR_2);
 return -VAR_0;
}
