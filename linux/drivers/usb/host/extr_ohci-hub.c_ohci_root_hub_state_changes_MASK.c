
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int intrenable; } ;


 int VAR_0 ;
 int FUNC_0 (struct ohci_hcd*,int *) ;
 int FUNC_1 (struct ohci_hcd*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct ohci_hcd *VAR_1, int VAR_2,
  int VAR_3, int VAR_4)
{

 if (FUNC_0(VAR_1, &VAR_1->regs->intrenable) & VAR_0)
  return 0;





 if (VAR_2 || VAR_4)
  return 1;


 FUNC_1(VAR_1, VAR_0, &VAR_1->regs->intrenable);
 return 0;
}
