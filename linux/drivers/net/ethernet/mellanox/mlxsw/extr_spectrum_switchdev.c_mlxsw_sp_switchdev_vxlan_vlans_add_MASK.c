
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_vlan {int flags; scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct switchdev_notifier_port_obj_info {int handled; int info; struct switchdev_trans* trans; int obj; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_bridge_device {int vlan_enabled; } ;
struct mlxsw_sp {int bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct switchdev_obj_port_vlan* FUNC_0 (int ) ;
 struct mlxsw_sp_bridge_device* FUNC_1 (int ,struct net_device*) ;
 struct mlxsw_sp* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_bridge_device*,struct net_device*,scalar_t__,int,int,struct netlink_ext_ack*) ;
 struct net_device* FUNC_4 (struct net_device*) ;
 struct netlink_ext_ack* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct switchdev_trans*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_3,
       struct switchdev_notifier_port_obj_info *
       VAR_4)
{
 struct switchdev_obj_port_vlan *VAR_5 =
  FUNC_0(VAR_4->obj);
 bool VAR_6 = VAR_5->flags & VAR_1;
 bool VAR_7 = VAR_5->flags & VAR_0;
 struct switchdev_trans *VAR_8 = VAR_4->trans;
 struct mlxsw_sp_bridge_device *VAR_9;
 struct netlink_ext_ack *VAR_10;
 struct mlxsw_sp *VAR_11;
 struct net_device *VAR_12;
 u16 VAR_13;

 VAR_10 = FUNC_5(&VAR_4->info);
 VAR_12 = FUNC_4(VAR_3);
 if (!VAR_12)
  return 0;

 VAR_11 = FUNC_2(VAR_12);
 if (!VAR_11)
  return 0;

 VAR_4->handled = 1;

 if (FUNC_6(VAR_8))
  return 0;

 VAR_9 = FUNC_1(VAR_11->bridge, VAR_12);
 if (!VAR_9)
  return -VAR_2;

 if (!VAR_9->vlan_enabled)
  return 0;

 for (VAR_13 = VAR_5->vid_begin; VAR_13 <= VAR_5->vid_end; VAR_13++) {
  int VAR_14;

  VAR_14 = FUNC_3(VAR_11, VAR_9,
       VAR_3, VAR_13,
       VAR_6,
       VAR_7, VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
