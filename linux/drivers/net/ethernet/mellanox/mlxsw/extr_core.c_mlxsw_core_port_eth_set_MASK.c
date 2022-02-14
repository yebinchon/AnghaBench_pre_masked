
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;
struct mlxsw_core_port {void* port_driver_priv; struct devlink_port devlink_port; } ;
struct mlxsw_core {struct mlxsw_core_port* ports; } ;


 int FUNC_0 (struct devlink_port*,struct net_device*) ;

void FUNC_1(struct mlxsw_core *VAR_0, u8 VAR_1,
        void *VAR_2, struct net_device *VAR_3)
{
 struct mlxsw_core_port *VAR_4 =
     &VAR_0->ports[VAR_1];
 struct devlink_port *VAR_5 = &VAR_4->devlink_port;

 VAR_4->port_driver_priv = VAR_2;
 FUNC_0(VAR_5, VAR_3);
}
