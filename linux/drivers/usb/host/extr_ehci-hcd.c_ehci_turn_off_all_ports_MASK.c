
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; int lock; int hcs_params; } ;
struct TYPE_2__ {int * port_status; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ehci_hcd*,int,int) ;
 int FUNC_2 (struct ehci_hcd*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ehci_hcd *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->hcs_params);

 while (VAR_2--) {
  FUNC_4(&VAR_1->lock);
  FUNC_1(VAR_1, VAR_2, 0);
  FUNC_3(&VAR_1->lock);
  FUNC_2(VAR_1, VAR_0,
    &VAR_1->regs->port_status[VAR_2]);
 }
}
