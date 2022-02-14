
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehci_hcd {TYPE_1__* regs; scalar_t__ frame_index_bug; } ;
struct TYPE_2__ {int frame_index; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct ehci_hcd*,int *) ;

__attribute__((used)) static inline unsigned FUNC_2(struct ehci_hcd *VAR_0)
{
 if (VAR_0->frame_index_bug)
  return FUNC_0(VAR_0);
 return FUNC_1(VAR_0, &VAR_0->regs->frame_index);
}
