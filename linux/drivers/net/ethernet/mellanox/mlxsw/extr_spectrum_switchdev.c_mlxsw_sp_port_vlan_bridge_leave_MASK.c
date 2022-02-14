
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_bridge_port* bridge_port; int bridge_vlan_node; int vid; struct mlxsw_sp_fid* fid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_vlan {int port_vlan_list; } ;
struct mlxsw_sp_bridge_port {int vlans_list; } ;
struct TYPE_2__ {int bridge; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct mlxsw_sp_bridge_port*,int ) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*) ;
 int FUNC_5 (int ,struct mlxsw_sp_bridge_port*) ;
 struct mlxsw_sp_bridge_vlan* FUNC_6 (struct mlxsw_sp_bridge_port*,int ) ;
 int FUNC_7 (struct mlxsw_sp_bridge_vlan*) ;
 int FUNC_8 (struct mlxsw_sp_fid*) ;
 scalar_t__ FUNC_9 (struct mlxsw_sp_fid*) ;
 int FUNC_10 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_11 (struct mlxsw_sp_port*,int ,int ) ;
 int FUNC_12 (struct mlxsw_sp_port_vlan*) ;

void
FUNC_13(struct mlxsw_sp_port_vlan *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = VAR_3->mlxsw_sp_port;
 struct mlxsw_sp_fid *VAR_5 = VAR_3->fid;
 struct mlxsw_sp_bridge_vlan *VAR_6;
 struct mlxsw_sp_bridge_port *VAR_7;
 u16 VAR_8 = VAR_3->vid;
 bool VAR_9, VAR_10;

 if (FUNC_0(FUNC_9(VAR_5) != VAR_2 &&
      FUNC_9(VAR_5) != VAR_1))
  return;

 VAR_7 = VAR_3->bridge_port;
 VAR_10 = FUNC_2(&VAR_7->vlans_list);
 VAR_6 = FUNC_6(VAR_7, VAR_8);
 VAR_9 = FUNC_2(&VAR_6->port_vlan_list);

 FUNC_1(&VAR_3->bridge_vlan_node);
 FUNC_7(VAR_6);
 FUNC_11(VAR_4, VAR_8, VAR_0);
 FUNC_10(VAR_4, VAR_8, 0);
 if (VAR_9)
  FUNC_3(VAR_4->mlxsw_sp,
            VAR_7,
            FUNC_8(VAR_5));
 if (VAR_10)
  FUNC_4(VAR_4, VAR_7);

 FUNC_12(VAR_3);

 FUNC_5(VAR_4->mlxsw_sp->bridge, VAR_7);
 VAR_3->bridge_port = ((void*)0);
}
