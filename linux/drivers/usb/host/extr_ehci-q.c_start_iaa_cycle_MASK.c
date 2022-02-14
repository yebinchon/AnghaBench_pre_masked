
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {scalar_t__ rh_state; int iaa_in_progress; int command; TYPE_1__* regs; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int ,int) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;
 int FUNC_2 (struct ehci_hcd*,int,int *) ;
 int FUNC_3 (struct ehci_hcd*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct ehci_hcd *VAR_3)
{

 if (FUNC_4(VAR_3->rh_state < VAR_2)) {
  FUNC_3(VAR_3);


 } else if (VAR_3->rh_state == VAR_2 &&
   !VAR_3->iaa_in_progress) {


  FUNC_5();

  FUNC_2(VAR_3, VAR_3->command | VAR_0,
    &VAR_3->regs->command);
  FUNC_1(VAR_3, &VAR_3->regs->command);
  VAR_3->iaa_in_progress = 1;
  FUNC_0(VAR_3, VAR_1, 1);
 }
}
