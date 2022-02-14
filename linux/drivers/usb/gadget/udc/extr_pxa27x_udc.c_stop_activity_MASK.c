
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int speed; } ;
struct pxa_udc {TYPE_2__* udc_usb_ep; TYPE_1__ gadget; } ;
struct TYPE_4__ {int usb_ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pxa_udc *VAR_2)
{
 int VAR_3;

 VAR_2->gadget.speed = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_2->udc_usb_ep[VAR_3].usb_ep);
}
