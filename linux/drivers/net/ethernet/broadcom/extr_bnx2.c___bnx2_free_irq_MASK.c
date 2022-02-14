
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_irq {scalar_t__ requested; int vector; } ;
struct bnx2 {int irq_nvecs; int * bnx2_napi; struct bnx2_irq* irq_tbl; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_0)
{
 struct bnx2_irq *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->irq_nvecs; VAR_2++) {
  VAR_1 = &VAR_0->irq_tbl[VAR_2];
  if (VAR_1->requested)
   FUNC_0(VAR_1->vector, &VAR_0->bnx2_napi[VAR_2]);
  VAR_1->requested = 0;
 }
}
