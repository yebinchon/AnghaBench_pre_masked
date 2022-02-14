
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int netdev; } ;
struct mlx5e_err_ctx {int (* recover ) (int *) ;int ctx; } ;
struct devlink_health_reporter {int dummy; } ;


 int FUNC_0 (struct devlink_health_reporter*,char*,struct mlx5e_err_ctx*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5e_priv *VAR_0,
   struct devlink_health_reporter *VAR_1, char *VAR_2,
   struct mlx5e_err_ctx *VAR_3)
{
 if (!VAR_1) {
  FUNC_1(VAR_0->netdev, VAR_2);
  return VAR_3->recover(&VAR_3->ctx);
 }
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
