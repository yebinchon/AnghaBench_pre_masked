
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fhci_usb {int intr_nesting_cnt; int saved_msk; struct fhci_hcd* fhci; } ;
struct fhci_hcd {TYPE_1__* timer; TYPE_2__* regs; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int usb_usbmr; int usb_usber; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fhci_hcd*,char*) ;
 TYPE_3__* FUNC_2 (struct fhci_hcd*) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct fhci_usb *VAR_0)
{
 struct fhci_hcd *VAR_1 = VAR_0->fhci;

 if (VAR_0->intr_nesting_cnt == 1) {

  FUNC_0(FUNC_2(VAR_1)->irq);


  FUNC_3(&VAR_0->fhci->regs->usb_usber, 0xffff);
  FUNC_3(&VAR_0->fhci->regs->usb_usbmr, VAR_0->saved_msk);


  FUNC_0(VAR_1->timer->irq);
 } else if (VAR_0->intr_nesting_cnt > 1)
  FUNC_1(VAR_1, "unbalanced USB interrupts nesting\n");
 VAR_0->intr_nesting_cnt--;
}
