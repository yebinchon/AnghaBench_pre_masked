
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int dummy; } ;
struct mlx5e_err_ctx {int dummy; } ;
struct devlink_health_reporter {int dummy; } ;


 struct mlx5e_priv* FUNC_0 (struct devlink_health_reporter*) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_err_ctx*) ;

__attribute__((used)) static int FUNC_3(struct devlink_health_reporter *VAR_0,
         void *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx5e_err_ctx *VAR_3 = VAR_1;

 return VAR_3 ? FUNC_2(VAR_3) :
    FUNC_1(VAR_2);
}
