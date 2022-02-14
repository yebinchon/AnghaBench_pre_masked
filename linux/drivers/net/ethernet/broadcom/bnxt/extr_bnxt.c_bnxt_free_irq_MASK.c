
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_irq {scalar_t__ requested; int vector; scalar_t__ have_cpumask; int cpu_mask; } ;
struct bnxt {int cp_nr_rings; int * bnapi; struct bnxt_irq* irq_tbl; TYPE_1__* dev; } ;
struct TYPE_2__ {int * rx_cpu_rmap; } ;


 int FUNC_0 (struct bnxt*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct bnxt *VAR_0)
{
 struct bnxt_irq *VAR_1;
 int VAR_2;





 if (!VAR_0->irq_tbl || !VAR_0->bnapi)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->cp_nr_rings; VAR_2++) {
  int VAR_3 = FUNC_0(VAR_0, VAR_2);

  VAR_1 = &VAR_0->irq_tbl[VAR_3];
  if (VAR_1->requested) {
   if (VAR_1->have_cpumask) {
    FUNC_4(VAR_1->vector, ((void*)0));
    FUNC_1(VAR_1->cpu_mask);
    VAR_1->have_cpumask = 0;
   }
   FUNC_2(VAR_1->vector, VAR_0->bnapi[VAR_2]);
  }

  VAR_1->requested = 0;
 }
}
