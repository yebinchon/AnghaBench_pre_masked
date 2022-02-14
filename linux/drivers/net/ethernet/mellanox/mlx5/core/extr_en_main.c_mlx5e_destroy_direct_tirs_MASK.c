
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tir {int dummy; } ;
struct mlx5e_priv {int max_nch; int mdev; } ;


 int FUNC_0 (int ,struct mlx5e_tir*) ;

void FUNC_1(struct mlx5e_priv *VAR_0, struct mlx5e_tir *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_nch; VAR_2++)
  FUNC_0(VAR_0->mdev, &VAR_1[VAR_2]);
}
