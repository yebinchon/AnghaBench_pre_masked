
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct devlink_health_reporter* rx_reporter; int netdev; int mdev; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;


 scalar_t__ FUNC_0 (struct devlink_health_reporter*) ;
 int VAR_0 ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 struct devlink_health_reporter* FUNC_2 (struct devlink*,int *,int ,int,struct mlx5e_priv*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;
 struct devlink* FUNC_4 (int ) ;

int FUNC_5(struct mlx5e_priv *VAR_2)
{
 struct devlink *VAR_3 = FUNC_4(VAR_2->mdev);
 struct devlink_health_reporter *VAR_4;

 VAR_4 = FUNC_2(VAR_3,
        &VAR_1,
        VAR_0,
        1, VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_2->netdev, "Failed to create rx reporter, err = %ld\n",
       FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }
 VAR_2->rx_reporter = VAR_4;
 return 0;
}
