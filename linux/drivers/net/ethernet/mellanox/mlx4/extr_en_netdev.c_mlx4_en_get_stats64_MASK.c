
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int stats; } ;
struct mlx4_en_priv {int stats_lock; } ;


 int FUNC_0 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtnl_link_stats64*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_3(&VAR_2->stats_lock);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1, &VAR_0->stats);
 FUNC_4(&VAR_2->stats_lock);
}
