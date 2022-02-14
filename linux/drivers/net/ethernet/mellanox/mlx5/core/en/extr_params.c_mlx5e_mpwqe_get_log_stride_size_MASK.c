
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_3 (int ) ;

u8 FUNC_4(struct mlx5_core_dev *VAR_0,
       struct mlx5e_params *VAR_1,
       struct mlx5e_xsk_param *VAR_2)
{
 if (FUNC_2(VAR_0, VAR_1, VAR_2))
  return FUNC_3(FUNC_1(VAR_1, VAR_2));

 return FUNC_0(VAR_0);
}
