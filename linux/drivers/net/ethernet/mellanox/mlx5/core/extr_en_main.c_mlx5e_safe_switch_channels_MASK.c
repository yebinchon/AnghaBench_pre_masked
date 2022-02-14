
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_channels {int dummy; } ;
typedef int mlx5e_fp_hw_modify ;


 int FUNC_0 (struct mlx5e_priv*,struct mlx5e_channels*) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_channels*,int ) ;

int FUNC_2(struct mlx5e_priv *VAR_0,
          struct mlx5e_channels *VAR_1,
          mlx5e_fp_hw_modify VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0, VAR_1, VAR_2);
 return 0;
}
