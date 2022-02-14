
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct pxa25x_udc {int * driver; TYPE_1__* transceiver; scalar_t__ pullup; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pxa25x_udc*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct pxa25x_udc*,int *) ;
 struct pxa25x_udc* FUNC_6 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_7(struct usb_gadget*VAR_0)
{
 struct pxa25x_udc *VAR_1 = FUNC_6(VAR_0);

 FUNC_2();
 VAR_1->pullup = 0;
 FUNC_5(VAR_1, ((void*)0));
 FUNC_3();

 if (!FUNC_0(VAR_1->transceiver))
  (void) FUNC_4(VAR_1->transceiver->otg, ((void*)0));

 VAR_1->driver = ((void*)0);

 FUNC_1(VAR_1);

 return 0;
}
