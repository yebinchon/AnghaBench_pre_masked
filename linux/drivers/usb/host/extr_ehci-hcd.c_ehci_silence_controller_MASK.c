
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {int lock; TYPE_1__* regs; int rh_state; } ;
struct TYPE_2__ {int configured_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;
 int FUNC_2 (struct ehci_hcd*) ;
 int FUNC_3 (struct ehci_hcd*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ehci_hcd *VAR_1)
{
 FUNC_0(VAR_1);

 FUNC_4(&VAR_1->lock);
 VAR_1->rh_state = VAR_0;
 FUNC_2(VAR_1);


 FUNC_3(VAR_1, 0, &VAR_1->regs->configured_flag);


 FUNC_1(VAR_1, &VAR_1->regs->configured_flag);
 FUNC_5(&VAR_1->lock);
}
