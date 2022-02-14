
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int lock; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_eq_table *VAR_1 = VAR_0->priv.eq_table;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
