
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eq_table {int lock; } ;
struct mlx5_eq_param {scalar_t__ irq_index; } ;
struct mlx5_eq {int dummy; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_eq*,struct mlx5_eq_param*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_1,
      struct mlx5_eq *VAR_2, struct mlx5_eq_param *VAR_3)
{
 struct mlx5_eq_table *VAR_4 = VAR_1->priv.eq_table;
 int VAR_5;

 FUNC_1(&VAR_4->lock);

 if (VAR_3->irq_index != 0) {
  VAR_5 = -VAR_0;
  goto unlock;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
unlock:
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
