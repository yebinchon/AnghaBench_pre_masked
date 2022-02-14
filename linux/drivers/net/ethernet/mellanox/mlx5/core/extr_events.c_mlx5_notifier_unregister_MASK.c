
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct mlx5_events {int nh; } ;
struct TYPE_2__ {struct mlx5_events* events; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct mlx5_core_dev *VAR_0, struct notifier_block *VAR_1)
{
 struct mlx5_events *VAR_2 = VAR_0->priv.events;

 return FUNC_0(&VAR_2->nh, VAR_1);
}
