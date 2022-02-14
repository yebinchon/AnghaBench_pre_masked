
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_roce {int ft; } ;
struct TYPE_2__ {struct mlx5_core_roce roce; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;

void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_core_roce *VAR_1 = &VAR_0->priv.roce;

 if (!VAR_1->ft)
  return;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
