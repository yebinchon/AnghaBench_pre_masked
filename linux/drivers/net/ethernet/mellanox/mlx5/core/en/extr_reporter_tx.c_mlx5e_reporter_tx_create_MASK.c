
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct devlink_health_reporter* tx_reporter; int netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;


 scalar_t__ FUNC_0 (struct devlink_health_reporter*) ;
 int VAR_0 ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 struct devlink_health_reporter* FUNC_2 (struct devlink*,int *,int ,int,struct mlx5e_priv*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 struct devlink* FUNC_4 (struct mlx5_core_dev*) ;

int FUNC_5(struct mlx5e_priv *VAR_2)
{
 struct devlink_health_reporter *VAR_3;
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;
 struct devlink *VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 VAR_3 =
  FUNC_2(VAR_5, &VAR_1,
            VAR_0,
            1, VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_2->netdev,
       "Failed to create tx reporter, err = %ld\n",
       FUNC_1(VAR_3));
  return FUNC_1(VAR_3);
 }
 VAR_2->tx_reporter = VAR_3;
 return 0;
}
