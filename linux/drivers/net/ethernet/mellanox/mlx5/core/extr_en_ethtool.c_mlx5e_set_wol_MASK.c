
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_2);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 __u32 VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;

 if (!VAR_6)
  return -VAR_1;

 if (VAR_3->wolopts & ~VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3->wolopts);

 return FUNC_0(VAR_5, VAR_7);
}
