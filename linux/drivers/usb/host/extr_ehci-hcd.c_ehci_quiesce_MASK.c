
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {scalar_t__ rh_state; int command; TYPE_1__* regs; int lock; } ;
struct TYPE_2__ {int status; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ehci_hcd*,int *,int,int,int) ;
 int FUNC_1 (struct ehci_hcd*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4 (struct ehci_hcd *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->rh_state != VAR_2)
  return;


 VAR_6 = (VAR_5->command << 10) & (VAR_3 | VAR_4);
 FUNC_0(VAR_5, &VAR_5->regs->status, VAR_3 | VAR_4, VAR_6,
   16 * 125);


 FUNC_2(&VAR_5->lock);
 VAR_5->command &= ~(VAR_0 | VAR_1);
 FUNC_1(VAR_5, VAR_5->command, &VAR_5->regs->command);
 FUNC_3(&VAR_5->lock);


 FUNC_0(VAR_5, &VAR_5->regs->status, VAR_3 | VAR_4, 0,
   16 * 125);
}
