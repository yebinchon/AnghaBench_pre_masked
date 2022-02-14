
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_core {unsigned int max_ports; TYPE_1__* driver; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int (* port_split ) (struct mlxsw_core*,unsigned int,unsigned int,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_core* FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct mlxsw_core*,unsigned int,unsigned int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct devlink *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4,
        struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_core *VAR_6 = FUNC_1(VAR_2);

 if (VAR_3 >= VAR_6->max_ports) {
  FUNC_0(VAR_5, "Port index exceeds maximum number of ports");
  return -VAR_0;
 }
 if (!VAR_6->driver->port_split)
  return -VAR_1;
 return VAR_6->driver->port_split(VAR_6, VAR_3, VAR_4,
           VAR_5);
}
