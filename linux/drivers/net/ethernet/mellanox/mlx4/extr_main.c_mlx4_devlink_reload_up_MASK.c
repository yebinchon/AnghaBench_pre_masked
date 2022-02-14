
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlx4_dev {struct mlx4_dev_persistent* persist; } ;
struct mlx4_priv {struct mlx4_dev dev; } ;
struct mlx4_dev_persistent {int dev; int pdev; } ;
struct devlink {int dummy; } ;


 struct mlx4_priv* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,struct devlink*) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_0,
      struct netlink_ext_ack *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx4_dev *VAR_3 = &VAR_2->dev;
 struct mlx4_dev_persistent *VAR_4 = VAR_3->persist;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->pdev, 1, VAR_0);
 if (VAR_5)
  FUNC_1(VAR_4->dev, "mlx4_restart_one_up failed, ret=%d\n",
    VAR_5);

 return VAR_5;
}
