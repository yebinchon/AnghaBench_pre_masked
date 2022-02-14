
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_2__ self; scalar_t__ localmem_pool; scalar_t__ irq; } ;
struct ohci_hcd {scalar_t__ hcca_dma; int * hcca; TYPE_1__* regs; int prev_frame_no; int io_watchdog; int nec_work; } ;
struct TYPE_3__ {int intrdisable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,struct usb_hcd*) ;
 int FUNC_4 (scalar_t__,unsigned long,int) ;
 struct ohci_hcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct ohci_hcd*) ;
 int FUNC_7 (struct ohci_hcd*) ;
 int FUNC_8 (struct ohci_hcd*) ;
 int FUNC_9 (struct ohci_hcd*,int ,int *) ;
 scalar_t__ FUNC_10 (struct ohci_hcd*) ;
 scalar_t__ FUNC_11 (struct ohci_hcd*) ;
 int FUNC_12 (struct ohci_hcd*) ;
 int FUNC_13 () ;

__attribute__((used)) static void FUNC_14 (struct usb_hcd *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_5 (VAR_2);

 FUNC_6(VAR_3);

 if (FUNC_11(VAR_3))
  FUNC_2(&VAR_3->nec_work);
 FUNC_0(&VAR_3->io_watchdog);
 VAR_3->prev_frame_no = VAR_0;

 FUNC_9 (VAR_3, VAR_1, &VAR_3->regs->intrdisable);
 FUNC_8(VAR_3);
 FUNC_3(VAR_2->irq, VAR_2);
 VAR_2->irq = 0;

 if (FUNC_10(VAR_3))
  FUNC_13();

 FUNC_12 (VAR_3);
 FUNC_7 (VAR_3);
 if (VAR_3->hcca) {
  if (VAR_2->localmem_pool)
   FUNC_4(VAR_2->localmem_pool,
          (unsigned long)VAR_3->hcca,
          sizeof(*VAR_3->hcca));
  else
   FUNC_1(VAR_2->self.controller,
       sizeof(*VAR_3->hcca),
       VAR_3->hcca, VAR_3->hcca_dma);
  VAR_3->hcca = ((void*)0);
  VAR_3->hcca_dma = 0;
 }
}
