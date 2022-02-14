
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_2__ {int (* port_leave ) (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_bridge_port*,struct mlxsw_sp_port*) ;} ;


 struct mlxsw_sp_bridge_port* FUNC_0 (struct mlxsw_sp_bridge_device*,struct net_device*) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int ,struct mlxsw_sp_bridge_port*) ;
 int FUNC_3 (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_bridge_port*,struct mlxsw_sp_port*) ;

void FUNC_4(struct mlxsw_sp_port *VAR_0,
    struct net_device *VAR_1,
    struct net_device *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_bridge_device *VAR_4;
 struct mlxsw_sp_bridge_port *VAR_5;

 VAR_4 = FUNC_1(VAR_3->bridge, VAR_2);
 if (!VAR_4)
  return;
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_5)
  return;

 VAR_4->ops->port_leave(VAR_4, VAR_5,
           VAR_0);
 FUNC_2(VAR_3->bridge, VAR_5);
}
