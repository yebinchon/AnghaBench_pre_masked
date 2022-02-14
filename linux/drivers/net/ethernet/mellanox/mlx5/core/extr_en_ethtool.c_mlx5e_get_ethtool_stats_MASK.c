
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*,struct ethtool_stats*,int *) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
        struct ethtool_stats *VAR_1,
        u64 *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
}
