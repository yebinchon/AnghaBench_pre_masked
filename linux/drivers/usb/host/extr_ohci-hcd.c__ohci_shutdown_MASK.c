
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int dummy; } ;
struct ohci_hcd {int rh_state; TYPE_1__* regs; int fminterval; } ;
struct TYPE_2__ {int fminterval; int cmdstatus; int intrdisable; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,int *) ;
 int FUNC_2 (struct ohci_hcd*,int ,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_2)
{
 struct ohci_hcd *VAR_3;

 VAR_3 = FUNC_0 (VAR_2);
 FUNC_2(VAR_3, (u32) ~0, &VAR_3->regs->intrdisable);


 FUNC_2(VAR_3, VAR_0, &VAR_3->regs->cmdstatus);
 FUNC_1(VAR_3, &VAR_3->regs->cmdstatus);
 FUNC_3(10);

 FUNC_2(VAR_3, VAR_3->fminterval, &VAR_3->regs->fminterval);
 VAR_3->rh_state = VAR_1;
}
