
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sx_port {int dummy; } ;
struct mlxsw_sx {int core; TYPE_1__* bus_info; struct mlxsw_sx_port** ports; } ;
struct mlxsw_reg_info {int dummy; } ;
typedef enum mlxsw_reg_pude_oper_status { ____Placeholder_mlxsw_reg_pude_oper_status } mlxsw_reg_pude_oper_status ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (int ,size_t) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct mlxsw_sx_port*,int) ;
 int FUNC_5 (struct mlxsw_sx_port*,int) ;

__attribute__((used)) static void FUNC_6(const struct mlxsw_reg_info *VAR_2,
         char *VAR_3, void *VAR_4)
{
 struct mlxsw_sx *VAR_5 = VAR_4;
 struct mlxsw_sx_port *VAR_6;
 enum mlxsw_reg_pude_oper_status VAR_7;
 enum devlink_port_type VAR_8;
 u8 VAR_9;

 VAR_9 = FUNC_2(VAR_3);
 VAR_6 = VAR_5->ports[VAR_9];
 if (!VAR_6) {
  FUNC_0(VAR_5->bus_info->dev, "Port %d: Link event received for non-existent port\n",
    VAR_9);
  return;
 }

 VAR_7 = FUNC_3(VAR_3);
 VAR_8 = FUNC_1(VAR_5->core, VAR_9);
 if (VAR_8 == VAR_0)
  FUNC_4(VAR_6, VAR_7);
 else if (VAR_8 == VAR_1)
  FUNC_5(VAR_6, VAR_7);
}
