
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int vf_vport; } ;
struct mlx5e_priv {TYPE_1__ stats; } ;


 int FUNC_0 (struct rtnl_link_stats64*,int *,int) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct rtnl_link_stats64 *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_2(VAR_0);


 FUNC_1(VAR_2);
 FUNC_0(VAR_1, &VAR_2->stats.vf_vport, sizeof(*VAR_1));
}
