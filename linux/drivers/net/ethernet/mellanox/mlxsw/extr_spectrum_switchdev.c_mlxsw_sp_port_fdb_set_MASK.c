
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct net_device* dev; } ;
struct switchdev_notifier_fdb_info {int addr; int vid; TYPE_1__ info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port_vlan {int vid; int fid; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_bridge_port {int lag_id; int system_port; int lagged; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {int dummy; } ;
struct mlxsw_sp {int bridge; } ;


 int VAR_0 ;
 struct mlxsw_sp_bridge_port* FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ,int ,int ,int ,int,int) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int ,int,int) ;
 struct mlxsw_sp_port_vlan* FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_bridge_device*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_1,
        struct switchdev_notifier_fdb_info *VAR_2, bool VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_1->mlxsw_sp;
 struct net_device *VAR_5 = VAR_2->info.dev;
 struct mlxsw_sp_port_vlan *VAR_6;
 struct mlxsw_sp_bridge_device *VAR_7;
 struct mlxsw_sp_bridge_port *VAR_8;
 u16 VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_4->bridge, VAR_5);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = VAR_8->bridge_device;
 VAR_6 = FUNC_4(VAR_1,
              VAR_7,
              VAR_2->vid);
 if (!VAR_6)
  return 0;

 VAR_9 = FUNC_1(VAR_6->fid);
 VAR_10 = VAR_6->vid;

 if (!VAR_8->lagged)
  return FUNC_3(VAR_4,
            VAR_8->system_port,
            VAR_2->addr, VAR_9,
            VAR_3, 0);
 else
  return FUNC_2(VAR_4,
         VAR_8->lag_id,
         VAR_2->addr, VAR_9,
         VAR_10, VAR_3, 0);
}
