
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohci_hcd {int rh_state; TYPE_1__* regs; int hc_control; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ohci_hcd*,int *) ;
 int FUNC_1 (struct ohci_hcd*,int ,int *) ;

__attribute__((used)) static void FUNC_2 (struct ohci_hcd *VAR_2)
{
 VAR_2->hc_control = FUNC_0 (VAR_2, &VAR_2->regs->control);
 VAR_2->hc_control &= VAR_0;
 FUNC_1 (VAR_2, VAR_2->hc_control, &VAR_2->regs->control);
 VAR_2->rh_state = VAR_1;
}
