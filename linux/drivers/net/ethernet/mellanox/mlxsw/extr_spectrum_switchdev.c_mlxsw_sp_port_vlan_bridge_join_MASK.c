
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port_vlan {struct mlxsw_sp_bridge_port* bridge_port; int bridge_vlan_node; int vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; } ;
struct mlxsw_sp_bridge_vlan {int port_vlan_list; } ;
struct mlxsw_sp_bridge_port {int flags; int dev; int stp_state; } ;
struct TYPE_2__ {int bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;
 struct mlxsw_sp_bridge_vlan* FUNC_2 (struct mlxsw_sp_bridge_port*,int ) ;
 int FUNC_3 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_4 (struct mlxsw_sp_port*,int ,int ) ;
 int FUNC_5 (struct mlxsw_sp_port_vlan*,struct mlxsw_sp_bridge_port*,struct netlink_ext_ack*) ;
 int FUNC_6 (struct mlxsw_sp_port_vlan*) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp_port_vlan *VAR_3,
          struct mlxsw_sp_bridge_port *VAR_4,
          struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_port *VAR_6 = VAR_3->mlxsw_sp_port;
 struct mlxsw_sp_bridge_vlan *VAR_7;
 u16 VAR_8 = VAR_3->vid;
 int VAR_9;


 if (VAR_3->bridge_port)
  return 0;

 VAR_9 = FUNC_5(VAR_3, VAR_4,
       VAR_5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_8,
          VAR_4->flags & VAR_0);
 if (VAR_9)
  goto err_port_vid_learning_set;

 VAR_9 = FUNC_4(VAR_6, VAR_8,
     VAR_4->stp_state);
 if (VAR_9)
  goto err_port_vid_stp_set;

 VAR_7 = FUNC_2(VAR_4, VAR_8);
 if (!VAR_7) {
  VAR_9 = -VAR_2;
  goto err_bridge_vlan_get;
 }

 FUNC_0(&VAR_3->bridge_vlan_node,
   &VAR_7->port_vlan_list);

 FUNC_1(VAR_6->mlxsw_sp->bridge,
     VAR_4->dev);
 VAR_3->bridge_port = VAR_4;

 return 0;

err_bridge_vlan_get:
 FUNC_4(VAR_6, VAR_8, VAR_1);
err_port_vid_stp_set:
 FUNC_3(VAR_6, VAR_8, 0);
err_port_vid_learning_set:
 FUNC_6(VAR_3);
 return VAR_9;
}
