
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_driver {int (* flash_update ) (struct mlxsw_core*,char const*,char const*,struct netlink_ext_ack*) ;} ;
struct mlxsw_core {struct mlxsw_driver* driver; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,char const*,char const*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(struct devlink *VAR_1,
          const char *VAR_2,
          const char *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_core *VAR_5 = FUNC_0(VAR_1);
 struct mlxsw_driver *VAR_6 = VAR_5->driver;

 if (!VAR_6->flash_update)
  return -VAR_0;
 return VAR_6->flash_update(VAR_5, VAR_2,
       VAR_3, VAR_4);
}
