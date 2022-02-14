
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxu_hcd {int* qh_used; int mem_lock; TYPE_1__* mem; } ;
struct ehci_qh {int * dummy; int qtd_list; int qh_dma; struct oxu_hcd* oxu; int kref; } ;
struct TYPE_2__ {int * qh_pool; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (struct oxu_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehci_qh*,int ,int) ;
 int FUNC_4 (struct oxu_hcd*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ehci_qh*) ;

__attribute__((used)) static struct ehci_qh *FUNC_8(struct oxu_hcd *VAR_1)
{
 int VAR_2;
 struct ehci_qh *VAR_3 = ((void*)0);

 FUNC_5(&VAR_1->mem_lock);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (!VAR_1->qh_used[VAR_2])
   break;

 if (VAR_2 < VAR_0) {
  VAR_3 = (struct ehci_qh *) &VAR_1->mem->qh_pool[VAR_2];
  FUNC_3(VAR_3, 0, sizeof *VAR_3);

  FUNC_2(&VAR_3->kref);
  VAR_3->oxu = VAR_1;
  VAR_3->qh_dma = FUNC_7(VAR_3);
  FUNC_0(&VAR_3->qtd_list);


  VAR_3->dummy = FUNC_1(VAR_1);
  if (VAR_3->dummy == ((void*)0)) {
   FUNC_4(VAR_1, "no dummy td\n");
   VAR_1->qh_used[VAR_2] = 0;
   VAR_3 = ((void*)0);
   goto unlock;
  }

  VAR_1->qh_used[VAR_2] = 1;
 }
unlock:
 FUNC_6(&VAR_1->mem_lock);

 return VAR_3;
}
