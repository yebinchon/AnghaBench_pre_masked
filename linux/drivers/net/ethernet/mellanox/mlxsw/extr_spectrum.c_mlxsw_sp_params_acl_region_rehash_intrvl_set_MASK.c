
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_2__ {int vu32; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;


 struct mlxsw_core* FUNC_0 (struct devlink*) ;
 struct mlxsw_sp* FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static int
FUNC_3(struct devlink *VAR_0, u32 VAR_1,
          struct devlink_param_gset_ctx *VAR_2)
{
 struct mlxsw_core *VAR_3 = FUNC_0(VAR_0);
 struct mlxsw_sp *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_4, VAR_2->val.vu32);
}
