
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {scalar_t__ vu32; } ;
struct mlxsw_core {int dummy; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct devlink*,int ,union devlink_param_value) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mlxsw_core*) ;
 int FUNC_4 (struct mlxsw_core*) ;
 struct devlink* FUNC_5 (struct mlxsw_core*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_core *VAR_2)
{
 struct devlink *VAR_3 = FUNC_5(VAR_2);
 union devlink_param_value VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_1,
          FUNC_0(VAR_1));
 if (VAR_5)
  goto err_devlink_params_register;

 VAR_4.vu32 = 0;
 FUNC_1(VAR_3,
        VAR_0,
        VAR_4);
 return 0;

err_devlink_params_register:
 FUNC_4(VAR_2);
 return VAR_5;
}
