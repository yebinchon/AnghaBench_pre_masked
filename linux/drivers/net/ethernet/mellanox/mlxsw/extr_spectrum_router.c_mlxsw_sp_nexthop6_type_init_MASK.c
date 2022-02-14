
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_nexthop_group {int dummy; } ;
struct mlxsw_sp_nexthop {int type; } ;
struct mlxsw_sp_ipip_ops {scalar_t__ (* can_offload ) (struct mlxsw_sp*,struct net_device*,int ) ;} ;
struct mlxsw_sp_ipip_entry {size_t ipipt; } ;
struct mlxsw_sp {TYPE_2__* router; } ;
struct fib6_info {TYPE_1__* fib6_nh; } ;
struct TYPE_4__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;
struct TYPE_3__ {struct net_device* fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlxsw_sp_ipip_entry* FUNC_0 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*,struct mlxsw_sp_ipip_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_nexthop*) ;
 int FUNC_3 (struct mlxsw_sp_nexthop*) ;
 int FUNC_4 (struct mlxsw_sp_nexthop*,struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_5 (struct mlxsw_sp*,struct net_device*) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_3,
           struct mlxsw_sp_nexthop_group *VAR_4,
           struct mlxsw_sp_nexthop *VAR_5,
           const struct fib6_info *VAR_6)
{
 const struct mlxsw_sp_ipip_ops *VAR_7;
 struct mlxsw_sp_ipip_entry *VAR_8;
 struct net_device *VAR_9 = VAR_6->fib6_nh->fib_nh_dev;
 struct mlxsw_sp_rif *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_3, VAR_9);
 if (VAR_8) {
  VAR_7 = VAR_3->router->ipip_ops_arr[VAR_8->ipipt];
  if (VAR_7->can_offload(VAR_3, VAR_9,
       VAR_0)) {
   VAR_5->type = VAR_2;
   FUNC_1(VAR_3, VAR_5, VAR_8);
   return 0;
  }
 }

 VAR_5->type = VAR_1;
 VAR_10 = FUNC_5(VAR_3, VAR_9);
 if (!VAR_10)
  return 0;
 FUNC_4(VAR_5, VAR_10);

 VAR_11 = FUNC_2(VAR_3, VAR_5);
 if (VAR_11)
  goto err_nexthop_neigh_init;

 return 0;

err_nexthop_neigh_init:
 FUNC_3(VAR_5);
 return VAR_11;
}
