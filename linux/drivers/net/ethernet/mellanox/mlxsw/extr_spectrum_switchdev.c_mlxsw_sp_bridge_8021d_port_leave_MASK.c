
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {int bridge_port; } ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp_bridge_port {struct net_device* dev; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp_port_vlan*) ;
 struct mlxsw_sp_port_vlan* FUNC_2 (struct mlxsw_sp_port*,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_bridge_device *VAR_1,
     struct mlxsw_sp_bridge_port *VAR_2,
     struct mlxsw_sp_port *VAR_3)
{
 struct mlxsw_sp_port_vlan *VAR_4;
 struct net_device *VAR_5 = VAR_2->dev;
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_5) ? FUNC_3(VAR_5) : VAR_0;
 VAR_4 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_4 || !VAR_4->bridge_port)
  return;

 FUNC_1(VAR_4);
}
