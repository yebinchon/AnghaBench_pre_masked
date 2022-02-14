
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stats; } ;
struct mlxsw_sp_port {TYPE_1__ periodic_hw_stats; } ;


 int FUNC_0 (struct rtnl_link_stats64*,int *,int) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, &VAR_2->periodic_hw_stats.stats, sizeof(*VAR_1));
}
