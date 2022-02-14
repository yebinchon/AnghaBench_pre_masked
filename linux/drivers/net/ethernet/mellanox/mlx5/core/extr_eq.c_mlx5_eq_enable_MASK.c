
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct mlx5_eq_table {int irq_table; } ;
struct mlx5_eq {int vecidx; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_eq*,int) ;
 int FUNC_1 (int ,int ,struct notifier_block*) ;

int FUNC_2(struct mlx5_core_dev *VAR_0, struct mlx5_eq *VAR_1,
     struct notifier_block *VAR_2)
{
 struct mlx5_eq_table *VAR_3 = VAR_0->priv.eq_table;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->irq_table, VAR_1->vecidx, VAR_2);
 if (!VAR_4)
  FUNC_0(VAR_1, 1);

 return VAR_4;
}
