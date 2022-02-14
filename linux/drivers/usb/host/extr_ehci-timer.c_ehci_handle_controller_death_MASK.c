
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; int rh_state; int died_poll_count; } ;
struct TYPE_2__ {int intr_enable; int configured_flag; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int ,int) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;
 int FUNC_2 (struct ehci_hcd*,char*) ;
 int FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*,int ,int *) ;
 int FUNC_5 (struct ehci_hcd*) ;

__attribute__((used)) static void FUNC_6(struct ehci_hcd *VAR_3)
{
 if (!(FUNC_1(VAR_3, &VAR_3->regs->status) & VAR_2)) {


  if (VAR_3->died_poll_count++ < 5) {

   FUNC_0(VAR_3, VAR_0, 1);
   return;
  }
  FUNC_2(VAR_3, "Waited too long for the controller to stop, giving up\n");
 }


 VAR_3->rh_state = VAR_1;
 FUNC_4(VAR_3, 0, &VAR_3->regs->configured_flag);
 FUNC_4(VAR_3, 0, &VAR_3->regs->intr_enable);
 FUNC_3(VAR_3);
 FUNC_5(VAR_3);


}
