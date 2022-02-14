
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_trans {int dummy; } ;
struct TYPE_3__ {struct net_device* orig_dev; } ;
struct switchdev_obj_port_vlan {int flags; scalar_t__ vid_begin; scalar_t__ vid_end; TYPE_1__ obj; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {TYPE_2__* bridge_device; } ;
struct mlxsw_sp {int bridge; } ;
struct TYPE_4__ {int vlan_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp*,struct net_device*,struct switchdev_obj_port_vlan const*) ;
 struct mlxsw_sp_bridge_port* FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,scalar_t__,int,int,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct switchdev_trans*) ;
 scalar_t__ FUNC_7 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp_port *VAR_5,
       const struct switchdev_obj_port_vlan *VAR_6,
       struct switchdev_trans *VAR_7,
       struct netlink_ext_ack *VAR_8)
{
 bool VAR_9 = VAR_6->flags & VAR_2;
 bool VAR_10 = VAR_6->flags & VAR_1;
 struct mlxsw_sp *VAR_11 = VAR_5->mlxsw_sp;
 struct net_device *VAR_12 = VAR_6->obj.orig_dev;
 struct mlxsw_sp_bridge_port *VAR_13;
 u16 VAR_14;

 if (FUNC_5(VAR_12)) {
  int VAR_15 = 0;

  if ((VAR_6->flags & VAR_0) &&
      FUNC_1(VAR_12) &&
      FUNC_7(VAR_7))
   VAR_15 = FUNC_2(VAR_11,
             VAR_12, VAR_6);
  if (!VAR_15)
   VAR_15 = -VAR_4;
  return VAR_15;
 }

 if (FUNC_6(VAR_7))
  return 0;

 VAR_13 = FUNC_3(VAR_11->bridge, VAR_12);
 if (FUNC_0(!VAR_13))
  return -VAR_3;

 if (!VAR_13->bridge_device->vlan_enabled)
  return 0;

 for (VAR_14 = VAR_6->vid_begin; VAR_14 <= VAR_6->vid_end; VAR_14++) {
  int VAR_16;

  VAR_16 = FUNC_4(VAR_5, VAR_13,
          VAR_14, VAR_9,
          VAR_10, VAR_8);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
