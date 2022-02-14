
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_port_vlan {int list; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp_port_vlan*) ;
 int FUNC_3 (struct mlxsw_sp_port*,int ,int ,int,int) ;

void FUNC_4(struct mlxsw_sp_port_vlan *VAR_0)
{
 struct mlxsw_sp_port *VAR_1 = VAR_0->mlxsw_sp_port;
 u16 VAR_2 = VAR_0->vid;

 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0);
 FUNC_3(VAR_1, VAR_2, VAR_2, 0, 0);
}
