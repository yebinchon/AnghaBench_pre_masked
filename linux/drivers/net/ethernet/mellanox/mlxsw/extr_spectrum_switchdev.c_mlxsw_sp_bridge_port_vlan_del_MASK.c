
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_port_vlan {int dummy; } ;
struct mlxsw_sp_port {scalar_t__ pvid; } ;
struct mlxsw_sp_bridge_port {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_port*,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_3 (struct mlxsw_sp_port_vlan*) ;
 struct mlxsw_sp_port_vlan* FUNC_4 (struct mlxsw_sp_port*,scalar_t__) ;
 int FUNC_5 (struct mlxsw_sp_port*,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_6(struct mlxsw_sp_port *VAR_0,
         struct mlxsw_sp_bridge_port *VAR_1, u16 VAR_2)
{
 u16 VAR_3 = VAR_0->pvid == VAR_2 ? 0 : VAR_0->pvid;
 struct mlxsw_sp_port_vlan *VAR_4;

 VAR_4 = FUNC_4(VAR_0, VAR_2);
 if (FUNC_0(!VAR_4))
  return;

 FUNC_2(VAR_4);
 FUNC_1(VAR_0, VAR_3);
 FUNC_5(VAR_0, VAR_2, VAR_2, 0, 0);
 FUNC_3(VAR_4);
}
