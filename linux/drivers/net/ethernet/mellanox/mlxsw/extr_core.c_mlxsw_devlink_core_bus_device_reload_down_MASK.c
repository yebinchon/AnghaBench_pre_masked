
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct mlxsw_core {TYPE_1__* bus; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 int FUNC_1 (struct mlxsw_core*,int) ;

__attribute__((used)) static int
FUNC_2(struct devlink *VAR_2,
       struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_core *VAR_4 = FUNC_0(VAR_2);

 if (!(VAR_4->bus->features & VAR_1))
  return -VAR_0;

 FUNC_1(VAR_4, 1);
 return 0;
}
