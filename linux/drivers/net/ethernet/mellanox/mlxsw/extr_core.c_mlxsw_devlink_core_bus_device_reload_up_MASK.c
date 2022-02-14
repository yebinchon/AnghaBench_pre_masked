
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct mlxsw_core {int bus_priv; int bus; int bus_info; } ;
struct devlink {int dummy; } ;


 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int ,int ,int ,int,struct devlink*) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_0,
     struct netlink_ext_ack *VAR_1)
{
 struct mlxsw_core *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->bus_info,
           VAR_2->bus,
           VAR_2->bus_priv, 1,
           VAR_0);
}
