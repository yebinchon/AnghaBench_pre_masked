
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_cq_table {int tree; } ;
struct mlx5_eq {struct mlx5_cq_table cq_table; } ;
struct mlx5_core_cq {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlx5_core_cq*) ;
 int FUNC_1 (struct mlx5_core_cq*) ;
 struct mlx5_core_cq* FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static struct mlx5_core_cq *FUNC_5(struct mlx5_eq *VAR_0, u32 VAR_1)
{
 struct mlx5_cq_table *VAR_2 = &VAR_0->cq_table;
 struct mlx5_core_cq *VAR_3 = ((void*)0);

 FUNC_3();
 VAR_3 = FUNC_2(&VAR_2->tree, VAR_1);
 if (FUNC_0(VAR_3))
  FUNC_1(VAR_3);
 FUNC_4();

 return VAR_3;
}
