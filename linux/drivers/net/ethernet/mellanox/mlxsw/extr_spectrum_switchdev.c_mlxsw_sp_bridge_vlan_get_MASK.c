
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_bridge_vlan {int dummy; } ;
struct mlxsw_sp_bridge_port {int dummy; } ;


 struct mlxsw_sp_bridge_vlan* FUNC_0 (struct mlxsw_sp_bridge_port*,int ) ;
 struct mlxsw_sp_bridge_vlan* FUNC_1 (struct mlxsw_sp_bridge_port*,int ) ;

__attribute__((used)) static struct mlxsw_sp_bridge_vlan *
FUNC_2(struct mlxsw_sp_bridge_port *VAR_0, u16 VAR_1)
{
 struct mlxsw_sp_bridge_vlan *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
