
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_params {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_params*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 int FUNC_2 (struct mlx5e_params*,int *) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,struct mlx5e_params*,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 scalar_t__ FUNC_5 (struct mlx5_core_dev*,struct mlx5e_params*) ;
 int FUNC_6 (struct mlx5_core_dev*) ;

void FUNC_7(struct mlx5_core_dev *VAR_1,
      struct mlx5e_params *VAR_2)
{







 if (!FUNC_6(VAR_1) &&
     FUNC_5(VAR_1, VAR_2) &&
     (FUNC_3(VAR_1, VAR_2, ((void*)0)) ||
      !FUNC_2(VAR_2, ((void*)0))))
  FUNC_0(VAR_2, VAR_0, 1);
 FUNC_4(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);
}
