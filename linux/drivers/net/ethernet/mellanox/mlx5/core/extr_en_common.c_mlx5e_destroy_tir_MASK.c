
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_tir {int list; int tirn; } ;
struct TYPE_3__ {int list_lock; } ;
struct TYPE_4__ {TYPE_1__ td; } ;
struct mlx5_core_dev {TYPE_2__ mlx5e_res; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx5_core_dev *VAR_0,
         struct mlx5e_tir *VAR_1)
{
 FUNC_2(&VAR_0->mlx5e_res.td.list_lock);
 FUNC_1(VAR_0, VAR_1->tirn);
 FUNC_0(&VAR_1->list);
 FUNC_3(&VAR_0->mlx5e_res.td.list_lock);
}
