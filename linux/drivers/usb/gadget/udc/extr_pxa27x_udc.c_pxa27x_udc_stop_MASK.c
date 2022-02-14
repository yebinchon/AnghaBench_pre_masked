
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct pxa_udc {TYPE_1__* transceiver; int * driver; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct pxa_udc*) ;
 struct pxa_udc* FUNC_3 (struct usb_gadget*) ;
 int FUNC_4 (struct pxa_udc*) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_0)
{
 struct pxa_udc *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1);
 FUNC_4(VAR_1);

 VAR_1->driver = ((void*)0);

 if (!FUNC_0(VAR_1->transceiver))
  return FUNC_1(VAR_1->transceiver->otg, ((void*)0));
 return 0;
}
