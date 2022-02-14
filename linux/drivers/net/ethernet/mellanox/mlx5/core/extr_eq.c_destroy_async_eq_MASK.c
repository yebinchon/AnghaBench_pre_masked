
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int lock; } ;
struct mlx5_eq {int dummy; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_eq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_0, struct mlx5_eq *VAR_1)
{
 struct mlx5_eq_table *VAR_2 = VAR_0->priv.eq_table;
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
