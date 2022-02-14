
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_irq {int requested; int name; int handler; int vector; } ;
struct bnx2 {int flags; int irq_nvecs; int * bnx2_napi; struct bnx2_irq* irq_tbl; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int ,unsigned long,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct bnx2 *VAR_2)
{
 unsigned long VAR_3;
 struct bnx2_irq *VAR_4;
 int VAR_5 = 0, VAR_6;

 if (VAR_2->flags & VAR_0)
  VAR_3 = 0;
 else
  VAR_3 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_2->irq_nvecs; VAR_6++) {
  VAR_4 = &VAR_2->irq_tbl[VAR_6];
  VAR_5 = FUNC_0(VAR_4->vector, VAR_4->handler, VAR_3, VAR_4->name,
     &VAR_2->bnx2_napi[VAR_6]);
  if (VAR_5)
   break;
  VAR_4->requested = 1;
 }
 return VAR_5;
}
