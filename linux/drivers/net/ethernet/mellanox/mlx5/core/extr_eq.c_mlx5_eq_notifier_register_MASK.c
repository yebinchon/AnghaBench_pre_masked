
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_nb {size_t event_type; int nb; } ;
struct mlx5_eq_table {int * nh; } ;
struct TYPE_2__ {struct mlx5_eq_table* eq_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(struct mlx5_core_dev *VAR_0, struct mlx5_nb *VAR_1)
{
 struct mlx5_eq_table *VAR_2 = VAR_0->priv.eq_table;

 return FUNC_0(&VAR_2->nh[VAR_1->event_type], &VAR_1->nb);
}
