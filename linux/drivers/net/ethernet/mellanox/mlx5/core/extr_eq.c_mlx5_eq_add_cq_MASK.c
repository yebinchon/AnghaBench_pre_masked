
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cq_table {int lock; int tree; } ;
struct mlx5_eq {struct mlx5_cq_table cq_table; } ;
struct mlx5_core_cq {int cqn; } ;


 int FUNC_0 (int *,int ,struct mlx5_core_cq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5_eq *VAR_0, struct mlx5_core_cq *VAR_1)
{
 struct mlx5_cq_table *VAR_2 = &VAR_0->cq_table;
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(&VAR_2->tree, VAR_1->cqn, VAR_1);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
