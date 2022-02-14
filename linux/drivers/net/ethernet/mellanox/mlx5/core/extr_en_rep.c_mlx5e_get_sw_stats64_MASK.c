
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;


 int FUNC_0 (struct mlx5e_priv*,struct rtnl_link_stats64*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int
FUNC_2(const struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);
 return 0;
}
