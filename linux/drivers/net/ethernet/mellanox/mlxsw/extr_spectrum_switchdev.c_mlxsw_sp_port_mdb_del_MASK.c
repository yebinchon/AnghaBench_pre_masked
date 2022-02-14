
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct net_device* orig_dev; } ;
struct switchdev_obj_port_mdb {int addr; int vid; TYPE_1__ obj; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {int fid; } ;
struct mlxsw_sp_port {struct net_device* dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mid {int dummy; } ;
struct mlxsw_sp_bridge_port {struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp {int bridge; } ;


 int VAR_0 ;
 struct mlxsw_sp_mid* FUNC_0 (struct mlxsw_sp_bridge_device*,int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_port*,struct mlxsw_sp_mid*) ;
 struct mlxsw_sp_bridge_port* FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;
 struct mlxsw_sp_port_vlan* FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_device*,int ) ;
 int FUNC_5 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_1,
     const struct switchdev_obj_port_mdb *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_1->mlxsw_sp;
 struct net_device *VAR_4 = VAR_2->obj.orig_dev;
 struct mlxsw_sp_port_vlan *VAR_5;
 struct mlxsw_sp_bridge_device *VAR_6;
 struct net_device *VAR_7 = VAR_1->dev;
 struct mlxsw_sp_bridge_port *VAR_8;
 struct mlxsw_sp_mid *VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_2(VAR_3->bridge, VAR_4);
 if (!VAR_8)
  return 0;

 VAR_6 = VAR_8->bridge_device;
 VAR_5 = FUNC_4(VAR_1,
              VAR_6,
              VAR_2->vid);
 if (!VAR_5)
  return 0;

 VAR_10 = FUNC_3(VAR_5->fid);

 VAR_9 = FUNC_0(VAR_6, VAR_2->addr, VAR_10);
 if (!VAR_9) {
  FUNC_5(VAR_7, "Unable to remove port from MC DB\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_1, VAR_8, VAR_9);
}
