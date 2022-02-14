
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ehci_hcd {int command; TYPE_1__* regs; int lock; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int status; int command; int intr_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ehci_hcd*,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct ehci_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,int *) ;
 TYPE_2__* FUNC_3 (struct ehci_hcd*) ;
 int FUNC_4 (struct ehci_hcd*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ehci_hcd*) ;

__attribute__((used)) static int FUNC_9 (struct ehci_hcd *VAR_3)
{
 u32 VAR_4;

 FUNC_5(&VAR_3->lock);


 FUNC_4(VAR_3, 0, &VAR_3->regs->intr_enable);

 if (FUNC_1(VAR_3) && !FUNC_8(VAR_3)) {
  FUNC_6(&VAR_3->lock);
  return 0;
 }





 VAR_3->command &= ~VAR_1;
 VAR_4 = FUNC_2(VAR_3, &VAR_3->regs->command);
 VAR_4 &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_3, VAR_4, &VAR_3->regs->command);

 FUNC_6(&VAR_3->lock);
 FUNC_7(FUNC_3(VAR_3)->irq);

 return FUNC_0(VAR_3, &VAR_3->regs->status,
     VAR_2, VAR_2, 16 * 125);
}
