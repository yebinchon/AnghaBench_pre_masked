
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port_vlan {scalar_t__ fid; scalar_t__ bridge_port; } ;


 int FUNC_0 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_1 (struct mlxsw_sp_port_vlan*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_port_vlan *VAR_0)
{
 if (VAR_0->bridge_port)
  FUNC_0(VAR_0);
 else if (VAR_0->fid)
  FUNC_1(VAR_0);
}
