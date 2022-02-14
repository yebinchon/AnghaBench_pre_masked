
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_3__ {size_t module; size_t width; } ;
struct mlxsw_sp_port {int dev; TYPE_1__ mapping; } ;
struct mlxsw_sp {TYPE_2__* bus_info; struct mlxsw_sp_port** ports; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct mlxsw_core*,int ) ;
 int FUNC_1 (struct mlxsw_core*,int ) ;
 size_t VAR_4 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 struct mlxsw_sp* FUNC_4 (struct mlxsw_core*) ;
 size_t FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (struct mlxsw_sp*,size_t) ;
 int FUNC_7 (struct mlxsw_sp*,size_t) ;
 int FUNC_8 (struct mlxsw_sp*,size_t,size_t,unsigned int,size_t) ;
 int FUNC_9 (struct mlxsw_sp*,size_t,unsigned int) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_core *VAR_5, u8 VAR_6,
          unsigned int VAR_7,
          struct netlink_ext_ack *VAR_8)
{
 struct mlxsw_sp *VAR_9 = FUNC_4(VAR_5);
 u8 VAR_10, VAR_11, VAR_12;
 struct mlxsw_sp_port *VAR_13;
 u8 VAR_14, VAR_15, VAR_16;
 int VAR_17;
 int VAR_18;

 if (!FUNC_1(VAR_5, VAR_2) ||
     !FUNC_1(VAR_5, VAR_3))
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_5, VAR_2);
 VAR_11 = FUNC_0(VAR_5, VAR_3);

 VAR_13 = VAR_9->ports[VAR_6];
 if (!VAR_13) {
  FUNC_3(VAR_9->bus_info->dev, "Port number \"%d\" does not exist\n",
   VAR_6);
  FUNC_2(VAR_8, "Port number does not exist");
  return -VAR_0;
 }

 VAR_14 = VAR_13->mapping.module;
 VAR_15 = VAR_13->mapping.width;

 if (VAR_7 != 2 && VAR_7 != 4) {
  FUNC_10(VAR_13->dev, "Port can only be split into 2 or 4 ports\n");
  FUNC_2(VAR_8, "Port can only be split into 2 or 4 ports");
  return -VAR_0;
 }

 if (VAR_15 != VAR_4) {
  FUNC_10(VAR_13->dev, "Port cannot be split further\n");
  FUNC_2(VAR_8, "Port cannot be split further");
  return -VAR_0;
 }


 if (VAR_7 == 2) {
  VAR_12 = VAR_11;
  VAR_16 = VAR_6;
  if (VAR_9->ports[VAR_16 + VAR_11]) {
   FUNC_10(VAR_13->dev, "Invalid split configuration\n");
   FUNC_2(VAR_8, "Invalid split configuration");
   return -VAR_0;
  }
 } else {
  VAR_12 = VAR_10;
  VAR_16 = FUNC_5(VAR_6);
  if (VAR_9->ports[VAR_16 + 1] ||
      VAR_9->ports[VAR_16 + 3]) {
   FUNC_10(VAR_13->dev, "Invalid split configuration\n");
   FUNC_2(VAR_8, "Invalid split configuration");
   return -VAR_0;
  }
 }

 for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
  if (FUNC_6(VAR_9, VAR_16 + VAR_17 * VAR_12))
   FUNC_7(VAR_9, VAR_16 + VAR_17 * VAR_12);

 VAR_18 = FUNC_8(VAR_9, VAR_16, VAR_14, VAR_7,
      VAR_12);
 if (VAR_18) {
  FUNC_3(VAR_9->bus_info->dev, "Failed to create split ports\n");
  goto err_port_split_create;
 }

 return 0;

err_port_split_create:
 FUNC_9(VAR_9, VAR_16, VAR_7);
 return VAR_18;
}
