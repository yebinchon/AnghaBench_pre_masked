
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 int FUNC_2 (struct mlx5e_params*,struct mlx5e_xsk_param*) ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(struct mlx5_core_dev *VAR_4,
      struct mlx5e_params *VAR_5,
      struct mlx5e_xsk_param *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_5, VAR_6);
 s8 VAR_8;
 u8 VAR_9;

 if (!FUNC_2(VAR_5, VAR_6))
  return 0;

 if (FUNC_3(VAR_7) > VAR_0)
  return 0;

 if (FUNC_0(VAR_4, VAR_3))
  return 1;

 VAR_9 = VAR_2 - FUNC_3(VAR_7);
 VAR_8 =
  (s8)VAR_9 - VAR_1;

 return VAR_8 >= 0;
}
