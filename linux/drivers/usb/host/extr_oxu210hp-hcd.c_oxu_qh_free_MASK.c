
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int mem_lock; scalar_t__* qh_used; TYPE_1__* mem; } ;
struct ehci_qh {int dummy; } ;
struct TYPE_2__ {struct ehci_qh* qh_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct oxu_hcd *VAR_0, struct ehci_qh *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->mem_lock);

 VAR_2 = VAR_1 - &VAR_0->mem->qh_pool[0];
 VAR_0->qh_used[VAR_2] = 0;

 FUNC_1(&VAR_0->mem_lock);
}
