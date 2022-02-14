
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cq_table {int lock; int tree; } ;
struct mlx5_eq {int eqn; int dev; struct mlx5_cq_table cq_table; } ;
struct mlx5_core_cq {int cqn; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 struct mlx5_core_cq* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_eq *VAR_0, struct mlx5_core_cq *VAR_1)
{
 struct mlx5_cq_table *VAR_2 = &VAR_0->cq_table;
 struct mlx5_core_cq *VAR_3;

 FUNC_2(&VAR_2->lock);
 VAR_3 = FUNC_1(&VAR_2->tree, VAR_1->cqn);
 FUNC_3(&VAR_2->lock);

 if (!VAR_3) {
  FUNC_0(VAR_0->dev, "cq 0x%x not found in eq 0x%x tree\n",
         VAR_0->eqn, VAR_1->cqn);
  return;
 }

 if (VAR_3 != VAR_1)
  FUNC_0(VAR_0->dev, "corruption on cqn 0x%x in eq 0x%x\n",
         VAR_0->eqn, VAR_1->cqn);
}
