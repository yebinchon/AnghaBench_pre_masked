
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_dcbx_oper_mode { ____Placeholder_mlx5_dcbx_oper_mode } mlx5_dcbx_oper_mode ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_4,
         enum mlx5_dcbx_oper_mode VAR_5)
{
 struct mlx5_core_dev *VAR_6 = VAR_4->mdev;
 u32 VAR_7[FUNC_1(VAR_1)];
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_1, VAR_7, VAR_2, VAR_5);
 if (VAR_5 != VAR_0)
  FUNC_0(VAR_1, VAR_7, VAR_3, 1);

 return FUNC_3(VAR_6, VAR_7);
}
