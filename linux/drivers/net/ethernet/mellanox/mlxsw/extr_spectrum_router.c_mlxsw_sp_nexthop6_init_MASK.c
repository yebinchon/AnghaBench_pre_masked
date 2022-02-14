
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int ifindex; } ;
struct mlxsw_sp_nexthop_group {int dummy; } ;
struct mlxsw_sp_nexthop {int ifindex; int router_list_node; int gw_addr; int nh_weight; struct mlxsw_sp_nexthop_group* nh_grp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct fib6_info {TYPE_2__* fib6_nh; } ;
struct TYPE_4__ {int fib_nh_gw6; int fib_nh_weight; struct net_device* fib_nh_dev; } ;
struct TYPE_3__ {int nexthop_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_nexthop_group*,struct mlxsw_sp_nexthop*,struct fib6_info const*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_nexthop_group *VAR_1,
      struct mlxsw_sp_nexthop *VAR_2,
      const struct fib6_info *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->fib6_nh->fib_nh_dev;

 VAR_2->nh_grp = VAR_1;
 VAR_2->nh_weight = VAR_3->fib6_nh->fib_nh_weight;
 FUNC_1(&VAR_2->gw_addr, &VAR_3->fib6_nh->fib_nh_gw6, sizeof(VAR_2->gw_addr));
 FUNC_3(VAR_0, VAR_2);

 FUNC_0(&VAR_2->router_list_node, &VAR_0->router->nexthop_list);

 if (!VAR_4)
  return 0;
 VAR_2->ifindex = VAR_4->ifindex;

 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
