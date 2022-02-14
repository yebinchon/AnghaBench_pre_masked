
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {size_t module; } ;
struct mlxsw_sx_port {size_t local_port; TYPE_1__ mapping; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {struct mlxsw_sx_port** ports; int core; TYPE_2__* bus_info; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct mlxsw_sx_port*) ;
 struct mlxsw_sx_port* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,size_t,struct mlxsw_sx_port*) ;
 int FUNC_5 (struct mlxsw_sx_port*,int) ;
 int FUNC_6 (struct mlxsw_sx_port*,size_t) ;
 int FUNC_7 (struct mlxsw_sx_port*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct mlxsw_sx_port*,int ) ;
 int FUNC_9 (struct mlxsw_sx_port*,int) ;
 int FUNC_10 (struct mlxsw_sx_port*) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_sx *VAR_5, u8 VAR_6,
         u8 VAR_7, u8 VAR_8)
{
 struct mlxsw_sx_port *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->mlxsw_sx = VAR_5;
 VAR_9->local_port = VAR_6;
 VAR_9->mapping.module = VAR_7;

 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to set system port mapping\n",
   VAR_9->local_port);
  goto err_port_system_port_mapping_set;
 }


 VAR_10 = FUNC_9(VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to set SWID\n",
   VAR_9->local_port);
  goto err_port_swid_set;
 }


 VAR_10 = FUNC_6(VAR_9, VAR_7 + 1);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to set IB port\n",
   VAR_9->local_port);
  goto err_port_ib_set;
 }




 VAR_10 = FUNC_7(VAR_9,
      VAR_4 - 1,
      FUNC_0(3) - 1);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to set speed\n",
   VAR_9->local_port);
  goto err_port_speed_set;
 }




 VAR_10 = FUNC_8(VAR_9, VAR_2);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to set MTU\n",
   VAR_9->local_port);
  goto err_port_mtu_set;
 }

 VAR_10 = FUNC_5(VAR_9, 1);
 if (VAR_10) {
  FUNC_1(VAR_5->bus_info->dev, "Port %d: Failed to change admin state to UP\n",
   VAR_9->local_port);
  goto err_port_admin_set;
 }

 FUNC_4(VAR_5->core, VAR_9->local_port,
          VAR_9);
 VAR_5->ports[VAR_6] = VAR_9;
 return 0;

err_port_admin_set:
err_port_mtu_set:
err_port_speed_set:
err_port_ib_set:
 FUNC_9(VAR_9, VAR_3);
err_port_swid_set:
err_port_system_port_mapping_set:
 FUNC_2(VAR_9);
 return VAR_10;
}
