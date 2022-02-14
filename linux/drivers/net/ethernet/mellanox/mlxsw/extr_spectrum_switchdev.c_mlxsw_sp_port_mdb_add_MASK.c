
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {struct net_device* orig_dev; } ;
struct switchdev_obj_port_mdb {int addr; int vid; TYPE_1__ obj; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {int fid; } ;
struct mlxsw_sp_port {int local_port; struct net_device* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mid {int mid; int ports_in_mid; } ;
struct mlxsw_sp_bridge_port {scalar_t__ mrouter; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {int multicast_enabled; } ;
struct mlxsw_sp {int bridge; } ;


 int VAR_0 ;
 struct mlxsw_sp_mid* FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_bridge_device*,int ,int ) ;
 struct mlxsw_sp_mid* FUNC_1 (struct mlxsw_sp_bridge_device*,int ,int ) ;
 struct mlxsw_sp_bridge_port* FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_mid*) ;
 int FUNC_5 (struct mlxsw_sp_port*,int ,int) ;
 struct mlxsw_sp_port_vlan* FUNC_6 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_device*,int ) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_10(struct mlxsw_sp_port *VAR_1,
     const struct switchdev_obj_port_mdb *VAR_2,
     struct switchdev_trans *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_1->mlxsw_sp;
 struct net_device *VAR_5 = VAR_2->obj.orig_dev;
 struct mlxsw_sp_port_vlan *VAR_6;
 struct net_device *VAR_7 = VAR_1->dev;
 struct mlxsw_sp_bridge_device *VAR_8;
 struct mlxsw_sp_bridge_port *VAR_9;
 struct mlxsw_sp_mid *VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 if (FUNC_9(VAR_3))
  return 0;

 VAR_9 = FUNC_2(VAR_4->bridge, VAR_5);
 if (!VAR_9)
  return 0;

 VAR_8 = VAR_9->bridge_device;
 VAR_6 = FUNC_6(VAR_1,
              VAR_8,
              VAR_2->vid);
 if (!VAR_6)
  return 0;

 VAR_11 = FUNC_3(VAR_6->fid);

 VAR_10 = FUNC_1(VAR_8, VAR_2->addr, VAR_11);
 if (!VAR_10) {
  VAR_10 = FUNC_0(VAR_4, VAR_8, VAR_2->addr,
       VAR_11);
  if (!VAR_10) {
   FUNC_7(VAR_7, "Unable to allocate MC group\n");
   return -VAR_0;
  }
 }
 FUNC_8(VAR_1->local_port, VAR_10->ports_in_mid);

 if (!VAR_8->multicast_enabled)
  return 0;

 if (VAR_9->mrouter)
  return 0;

 VAR_12 = FUNC_5(VAR_1, VAR_10->mid, 1);
 if (VAR_12) {
  FUNC_7(VAR_7, "Unable to set SMID\n");
  goto err_out;
 }

 return 0;

err_out:
 FUNC_4(VAR_1, VAR_10);
 return VAR_12;
}
