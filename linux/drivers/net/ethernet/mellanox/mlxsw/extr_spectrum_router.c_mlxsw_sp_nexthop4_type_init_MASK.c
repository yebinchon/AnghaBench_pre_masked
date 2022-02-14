
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_nexthop {int type; } ;
struct mlxsw_sp_ipip_ops {scalar_t__ (* can_offload ) (struct mlxsw_sp*,struct net_device*,int ) ;} ;
struct mlxsw_sp_ipip_entry {size_t ipipt; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct fib_nh {struct net_device* fib_nh_dev; } ;
struct TYPE_2__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


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
           struct mlxsw_sp_nexthop *VAR_4,
           struct fib_nh *VAR_5)
{
 const struct mlxsw_sp_ipip_ops *VAR_6;
 struct net_device *VAR_7 = VAR_5->fib_nh_dev;
 struct mlxsw_sp_ipip_entry *VAR_8;
 struct mlxsw_sp_rif *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_3, VAR_7);
 if (VAR_8) {
  VAR_6 = VAR_3->router->ipip_ops_arr[VAR_8->ipipt];
  if (VAR_6->can_offload(VAR_3, VAR_7,
       VAR_0)) {
   VAR_4->type = VAR_2;
   FUNC_1(VAR_3, VAR_4, VAR_8);
   return 0;
  }
 }

 VAR_4->type = VAR_1;
 VAR_9 = FUNC_5(VAR_3, VAR_7);
 if (!VAR_9)
  return 0;

 FUNC_4(VAR_4, VAR_9);
 VAR_10 = FUNC_2(VAR_3, VAR_4);
 if (VAR_10)
  goto err_neigh_init;

 return 0;

err_neigh_init:
 FUNC_3(VAR_4);
 return VAR_10;
}
