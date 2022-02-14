
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int num_vec; int * affinity_mask; int pdev; int node; int * irq_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nicvf*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct nicvf *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_vec; VAR_3++) {
  if (!VAR_2->irq_allocated[VAR_3])
   continue;

  if (!FUNC_5(&VAR_2->affinity_mask[VAR_3], VAR_0))
   return;

  if (VAR_3 < VAR_1)

   VAR_4 = FUNC_3(VAR_2, VAR_3) + 1;
  else
   VAR_4 = 0;

  FUNC_1(FUNC_0(VAR_4, VAR_2->node),
    VAR_2->affinity_mask[VAR_3]);
  FUNC_2(FUNC_4(VAR_2->pdev, VAR_3),
          VAR_2->affinity_mask[VAR_3]);
 }
}
