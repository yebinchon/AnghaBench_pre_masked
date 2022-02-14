
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int* qtd_used; int mem_lock; TYPE_1__* mem; } ;
struct ehci_qtd {int qtd_dma; int qtd_list; void* hw_alt_next; void* hw_next; int hw_token; } ;
struct TYPE_2__ {int * qtd_pool; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ehci_qtd*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ehci_qtd*) ;

__attribute__((used)) static struct ehci_qtd *FUNC_6(struct oxu_hcd *VAR_3)
{
 int VAR_4;
 struct ehci_qtd *VAR_5 = ((void*)0);

 FUNC_3(&VAR_3->mem_lock);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (!VAR_3->qtd_used[VAR_4])
   break;

 if (VAR_4 < VAR_1) {
  VAR_5 = (struct ehci_qtd *) &VAR_3->mem->qtd_pool[VAR_4];
  FUNC_2(VAR_5, 0, sizeof *VAR_5);

  VAR_5->hw_token = FUNC_1(VAR_2);
  VAR_5->hw_next = VAR_0;
  VAR_5->hw_alt_next = VAR_0;
  FUNC_0(&VAR_5->qtd_list);

  VAR_5->qtd_dma = FUNC_5(VAR_5);

  VAR_3->qtd_used[VAR_4] = 1;
 }

 FUNC_4(&VAR_3->mem_lock);

 return VAR_5;
}
