
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {TYPE_1__* regs; int command; } ;
struct TYPE_2__ {int command; } ;


 int FUNC_0 (struct ehci_hcd*,int *) ;
 int FUNC_1 (struct ehci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ehci_hcd *VAR_0, u32 VAR_1)
{
 VAR_0->command &= ~VAR_1;
 FUNC_1(VAR_0, VAR_0->command, &VAR_0->regs->command);


 FUNC_0(VAR_0, &VAR_0->regs->command);
}
