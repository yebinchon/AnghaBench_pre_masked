
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_qp_table {int nb; } ;
struct TYPE_2__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,int *) ;
 int FUNC_1 (struct mlx5_core_dev*) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_qp_table *VAR_1 = &VAR_0->priv.qp_table;

 FUNC_0(VAR_0, &VAR_1->nb);
 FUNC_1(VAR_0);
}
