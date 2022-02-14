
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_port {int dummy; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp_bridge {int dummy; } ;


 struct mlxsw_sp_bridge_port* FUNC_0 (struct mlxsw_sp_bridge_device*,struct net_device*) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (struct mlxsw_sp_bridge*,struct net_device*) ;
 struct net_device* FUNC_2 (struct net_device*) ;

struct mlxsw_sp_bridge_port *
FUNC_3(struct mlxsw_sp_bridge *VAR_0,
     struct net_device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_1);
 struct mlxsw_sp_bridge_device *VAR_3;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_0(VAR_3, VAR_1);
}
