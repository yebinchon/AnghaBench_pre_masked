
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct devlink_port {int type; } ;
struct mlxsw_core_port {struct devlink_port devlink_port; } ;
struct mlxsw_core {struct mlxsw_core_port* ports; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;



enum devlink_port_type FUNC_0(struct mlxsw_core *VAR_0,
      u8 VAR_1)
{
 struct mlxsw_core_port *VAR_2 =
     &VAR_0->ports[VAR_1];
 struct devlink_port *VAR_3 = &VAR_2->devlink_port;

 return VAR_3->type;
}
