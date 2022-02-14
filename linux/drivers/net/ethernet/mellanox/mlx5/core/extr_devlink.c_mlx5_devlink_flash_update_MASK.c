
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct firmware {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct mlx5_core_dev* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlx5_core_dev*,struct firmware const*,struct netlink_ext_ack*) ;
 int FUNC_2 (struct firmware const**,char const*,int *) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_1,
         const char *VAR_2,
         const char *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = FUNC_0(VAR_1);
 const struct firmware *VAR_6;
 int VAR_7;

 if (VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_6, VAR_2, &VAR_5->pdev->dev);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_5, VAR_6, VAR_4);
}
