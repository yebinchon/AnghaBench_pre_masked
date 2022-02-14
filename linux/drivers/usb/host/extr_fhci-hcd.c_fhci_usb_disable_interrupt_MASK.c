
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fhci_usb {scalar_t__ intr_nesting_cnt; struct fhci_hcd* fhci; } ;
struct fhci_hcd {TYPE_2__* regs; TYPE_1__* timer; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int usb_usbmr; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct fhci_hcd*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct fhci_usb *VAR_0)
{
 struct fhci_hcd *VAR_1 = VAR_0->fhci;

 if (VAR_0->intr_nesting_cnt == 0) {

  FUNC_0(VAR_1->timer->irq);


  FUNC_0(FUNC_1(VAR_1)->irq);
  FUNC_2(&VAR_0->fhci->regs->usb_usbmr, 0);
 }
 VAR_0->intr_nesting_cnt++;
}
