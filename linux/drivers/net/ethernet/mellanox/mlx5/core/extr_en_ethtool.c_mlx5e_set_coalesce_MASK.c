
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct ethtool_coalesce {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*,struct ethtool_coalesce*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
