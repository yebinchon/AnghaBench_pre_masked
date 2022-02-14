
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlx4_dev {struct mlx4_dev_persistent* persist; } ;
struct mlx4_priv {struct mlx4_dev dev; } ;
struct mlx4_dev_persistent {int pdev; int dev; scalar_t__ num_vfs; } ;
struct devlink {int dummy; } ;


 struct mlx4_priv* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_0,
        struct netlink_ext_ack *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx4_dev *VAR_3 = &VAR_2->dev;
 struct mlx4_dev_persistent *VAR_4 = VAR_3->persist;

 if (VAR_4->num_vfs)
  FUNC_2(VAR_4->dev, "Reload performed on PF, will cause reset on operating Virtual Functions\n");
 FUNC_1(VAR_4->pdev);
 return 0;
}
