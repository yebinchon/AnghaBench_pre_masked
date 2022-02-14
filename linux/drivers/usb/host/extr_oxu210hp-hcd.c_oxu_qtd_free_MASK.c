
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int mem_lock; scalar_t__* qtd_used; TYPE_1__* mem; } ;
struct ehci_qtd {scalar_t__ buffer; } ;
struct TYPE_2__ {struct ehci_qtd* qtd_pool; } ;


 int FUNC_0 (struct oxu_hcd*,struct ehci_qtd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct oxu_hcd *VAR_0, struct ehci_qtd *VAR_1)
{
 int VAR_2;

 if (VAR_1->buffer)
  FUNC_0(VAR_0, VAR_1);

 FUNC_1(&VAR_0->mem_lock);

 VAR_2 = VAR_1 - &VAR_0->mem->qtd_pool[0];
 VAR_0->qtd_used[VAR_2] = 0;

 FUNC_2(&VAR_0->mem_lock);
}
