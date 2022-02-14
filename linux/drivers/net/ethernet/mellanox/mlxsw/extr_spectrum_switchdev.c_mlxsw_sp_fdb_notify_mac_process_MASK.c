
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlxsw_sp_port_vlan {int vid; struct mlxsw_sp_bridge_port* bridge_port; } ;
struct mlxsw_sp_port {int dev; } ;
struct mlxsw_sp_bridge_port {int dev; struct mlxsw_sp_bridge_device* bridge_device; } ;
struct mlxsw_sp_bridge_device {scalar_t__ vlan_enabled; } ;
struct mlxsw_sp {TYPE_1__* bus_info; struct mlxsw_sp_port** ports; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,int *,size_t*) ;
 int FUNC_2 (int,char*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp*,int ) ;
 int FUNC_4 (struct mlxsw_sp*,size_t,char*,int ,int,int) ;
 struct mlxsw_sp_port_vlan* FUNC_5 (struct mlxsw_sp_port*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_sp *VAR_3,
         char *VAR_4, int VAR_5,
         bool VAR_6)
{
 struct mlxsw_sp_port_vlan *VAR_7;
 struct mlxsw_sp_bridge_device *VAR_8;
 struct mlxsw_sp_bridge_port *VAR_9;
 struct mlxsw_sp_port *VAR_10;
 enum switchdev_notifier_type VAR_11;
 char VAR_12[VAR_0];
 u8 VAR_13;
 u16 VAR_14, VAR_15;
 bool VAR_16 = 1;
 int VAR_17;

 FUNC_1(VAR_4, VAR_5, VAR_12, &VAR_15, &VAR_13);
 VAR_10 = VAR_3->ports[VAR_13];
 if (!VAR_10) {
  FUNC_0(VAR_3->bus_info->dev, "Incorrect local port in FDB notification\n");
  goto just_remove;
 }

 if (FUNC_3(VAR_3, VAR_15))
  goto just_remove;

 VAR_7 = FUNC_5(VAR_10, VAR_15);
 if (!VAR_7) {
  FUNC_6(VAR_10->dev, "Failed to find a matching {Port, VID} following FDB notification\n");
  goto just_remove;
 }

 VAR_9 = VAR_7->bridge_port;
 if (!VAR_9) {
  FUNC_6(VAR_10->dev, "{Port, VID} not associated with a bridge\n");
  goto just_remove;
 }

 VAR_8 = VAR_9->bridge_device;
 VAR_14 = VAR_8->vlan_enabled ? VAR_7->vid : 0;

do_fdb_op:
 VAR_17 = FUNC_4(VAR_3, VAR_13, VAR_12, VAR_15,
          VAR_6, 1);
 if (VAR_17) {
  FUNC_0(VAR_3->bus_info->dev, "Failed to set FDB entry\n");
  return;
 }

 if (!VAR_16)
  return;
 VAR_11 = VAR_6 ? VAR_1 : VAR_2;
 FUNC_2(VAR_11, VAR_12, VAR_14, VAR_9->dev, VAR_6);

 return;

just_remove:
 VAR_6 = 0;
 VAR_16 = 0;
 goto do_fdb_op;
}
