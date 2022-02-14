
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct mlx5_irq_table {struct mlx5_irq* irq; } ;
struct mlx5_irq {int nh; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct mlx5_irq_table *VAR_0, int VAR_1,
         struct notifier_block *VAR_2)
{
 struct mlx5_irq *VAR_3;

 VAR_3 = &VAR_0->irq[VAR_1];
 return FUNC_0(&VAR_3->nh, VAR_2);
}
