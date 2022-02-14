
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_2__ {int (* port_join ) (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_bridge_port*,struct mlxsw_sp_port*,struct netlink_ext_ack*) ;} ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_bridge_port*) ;
 int FUNC_1 (struct mlxsw_sp_bridge_port*) ;
 struct mlxsw_sp_bridge_port* FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ,struct mlxsw_sp_bridge_port*) ;
 int FUNC_4 (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_bridge_port*,struct mlxsw_sp_port*,struct netlink_ext_ack*) ;

int FUNC_5(struct mlxsw_sp_port *VAR_0,
         struct net_device *VAR_1,
         struct net_device *VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_bridge_device *VAR_5;
 struct mlxsw_sp_bridge_port *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4->bridge, VAR_1);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_5 = VAR_6->bridge_device;

 VAR_7 = VAR_5->ops->port_join(VAR_5, VAR_6,
         VAR_0, VAR_3);
 if (VAR_7)
  goto err_port_join;

 return 0;

err_port_join:
 FUNC_3(VAR_4->bridge, VAR_6);
 return VAR_7;
}
