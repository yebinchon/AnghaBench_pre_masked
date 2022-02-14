
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct mlx5e_priv {struct net_device* netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct firmware {int dummy; } ;
struct ethtool_flash {scalar_t__ region; int data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlx5_core_dev*,struct firmware const*,int *) ;
 int FUNC_3 (struct firmware const*) ;
 int FUNC_4 (struct firmware const**,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct mlx5e_priv *VAR_2,
          struct ethtool_flash *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;
 struct net_device *VAR_5 = VAR_2->netdev;
 const struct firmware *VAR_6;
 int VAR_7;

 if (VAR_3->region != VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_4(&VAR_6, VAR_3->data, &VAR_5->dev);
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_5);
 FUNC_6();

 VAR_7 = FUNC_2(VAR_4, VAR_6, ((void*)0));
 FUNC_3(VAR_6);

 FUNC_5();
 FUNC_1(VAR_5);
 return VAR_7;
}
