
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_driver {int (* port_type_set ) (struct mlxsw_core*,int ,int) ;} ;
struct mlxsw_core_port {int local_port; } ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink_port {int devlink; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;


 int VAR_0 ;
 struct mlxsw_core_port* FUNC_0 (struct devlink_port*) ;
 struct mlxsw_core* FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_core*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct devlink_port *VAR_1,
           enum devlink_port_type VAR_2)
{
 struct mlxsw_core *VAR_3 = FUNC_1(VAR_1->devlink);
 struct mlxsw_driver *VAR_4 = VAR_3->driver;
 struct mlxsw_core_port *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_4->port_type_set)
  return -VAR_0;

 return VAR_4->port_type_set(VAR_3,
        VAR_5->local_port,
        VAR_2);
}
