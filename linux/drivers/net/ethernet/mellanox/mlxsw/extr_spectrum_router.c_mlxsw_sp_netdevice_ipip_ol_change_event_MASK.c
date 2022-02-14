
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_ops {int (* ol_netdev_change ) (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,struct netlink_ext_ack*) ;} ;
struct mlxsw_sp_ipip_entry {size_t ipipt; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;
 struct mlxsw_sp_ipip_entry* FUNC_1 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*,size_t) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_0,
     struct net_device *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 const struct mlxsw_sp_ipip_ops *VAR_3;
 struct mlxsw_sp_ipip_entry *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4)




  return 0;


 if (!FUNC_2(VAR_0, VAR_1,
       VAR_4->ipipt)) {
  FUNC_0(VAR_0, VAR_4);
  return 0;
 }

 VAR_3 = VAR_0->router->ipip_ops_arr[VAR_4->ipipt];
 VAR_5 = VAR_3->ol_netdev_change(VAR_0, VAR_4, VAR_2);
 return VAR_5;
}
