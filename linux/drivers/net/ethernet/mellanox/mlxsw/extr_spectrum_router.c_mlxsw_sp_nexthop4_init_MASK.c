
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_nexthop_group {int dummy; } ;
struct TYPE_3__ {struct fib_nh* fib_nh; } ;
struct mlxsw_sp_nexthop {int nh_weight; int router_list_node; int gw_addr; TYPE_1__ key; struct mlxsw_sp_nexthop_group* nh_grp; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct in_device {int dummy; } ;
struct fib_nh {int fib_nh_weight; int fib_nh_flags; int fib_nh_gw4; struct net_device* fib_nh_dev; } ;
struct TYPE_4__ {int nexthop_list; } ;


 scalar_t__ FUNC_0 (struct in_device*) ;
 int VAR_0 ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*,struct fib_nh*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_nexthop_group *VAR_2,
      struct mlxsw_sp_nexthop *VAR_3,
      struct fib_nh *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->fib_nh_dev;
 struct in_device *VAR_6;
 int VAR_7;

 VAR_3->nh_grp = VAR_2;
 VAR_3->key.fib_nh = VAR_4;



 VAR_3->nh_weight = 1;

 FUNC_3(&VAR_3->gw_addr, &VAR_4->fib_nh_gw4, sizeof(VAR_4->fib_nh_gw4));
 VAR_7 = FUNC_6(VAR_1, VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_1, VAR_3);
 FUNC_2(&VAR_3->router_list_node, &VAR_1->router->nexthop_list);

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 && FUNC_0(VAR_6) &&
     VAR_4->fib_nh_flags & VAR_0)
  return 0;

 VAR_7 = FUNC_4(VAR_1, VAR_3, VAR_4);
 if (VAR_7)
  goto err_nexthop_neigh_init;

 return 0;

err_nexthop_neigh_init:
 FUNC_7(VAR_1, VAR_3);
 return VAR_7;
}
