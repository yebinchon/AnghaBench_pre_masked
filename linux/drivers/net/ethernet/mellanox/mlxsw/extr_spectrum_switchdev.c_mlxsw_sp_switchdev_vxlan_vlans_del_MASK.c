
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct switchdev_notifier_port_obj_info {int handled; int obj; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_device {int vlan_enabled; } ;
struct mlxsw_sp {int bridge; } ;


 struct switchdev_obj_port_vlan* FUNC_0 (int ) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (int ,struct net_device*) ;
 struct mlxsw_sp* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_bridge_device*,struct net_device*,scalar_t__) ;
 struct net_device* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_0,
       struct switchdev_notifier_port_obj_info *
       VAR_1)
{
 struct switchdev_obj_port_vlan *VAR_2 =
  FUNC_0(VAR_1->obj);
 struct mlxsw_sp_bridge_device *VAR_3;
 struct mlxsw_sp *VAR_4;
 struct net_device *VAR_5;
 u16 VAR_6;

 VAR_5 = FUNC_4(VAR_0);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_2(VAR_5);
 if (!VAR_4)
  return;

 VAR_1->handled = 1;

 VAR_3 = FUNC_1(VAR_4->bridge, VAR_5);
 if (!VAR_3)
  return;

 if (!VAR_3->vlan_enabled)
  return;

 for (VAR_6 = VAR_2->vid_begin; VAR_6 <= VAR_2->vid_end; VAR_6++)
  FUNC_3(VAR_4, VAR_3,
        VAR_0, VAR_6);
}
