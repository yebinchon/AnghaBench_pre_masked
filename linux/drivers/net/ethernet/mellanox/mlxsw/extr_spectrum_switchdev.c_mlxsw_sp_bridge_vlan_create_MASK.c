
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_bridge_vlan {int list; int vid; int port_vlan_list; } ;
struct mlxsw_sp_bridge_port {int vlans_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_bridge_vlan* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct mlxsw_sp_bridge_vlan *
FUNC_3(struct mlxsw_sp_bridge_port *VAR_1, u16 VAR_2)
{
 struct mlxsw_sp_bridge_vlan *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_0(&VAR_3->port_vlan_list);
 VAR_3->vid = VAR_2;
 FUNC_2(&VAR_3->list, &VAR_1->vlans_list);

 return VAR_3;
}
