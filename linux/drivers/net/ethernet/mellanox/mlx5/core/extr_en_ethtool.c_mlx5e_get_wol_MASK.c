
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int FUNC_0 (struct ethtool_wolinfo*,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int *) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int ) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
     struct ethtool_wolinfo *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_4(VAR_0);
 struct mlx5_core_dev *VAR_3 = VAR_2->mdev;
 u8 VAR_4;
 int VAR_5;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->supported = FUNC_2(VAR_3);
 if (!VAR_1->supported)
  return;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5)
  return;

 VAR_1->wolopts = FUNC_3(VAR_4);
}
