
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; } ;
struct TYPE_2__ {int frame_index; } ;


 unsigned int FUNC_0 (struct ehci_hcd*,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned FUNC_2(struct ehci_hcd *VAR_0)
{
 unsigned VAR_1;

 VAR_1 = FUNC_0(VAR_0, &VAR_0->regs->frame_index);
 if (FUNC_1((VAR_1 & 7) == 0))
  VAR_1 = FUNC_0(VAR_0, &VAR_0->regs->frame_index);
 return VAR_1;
}
