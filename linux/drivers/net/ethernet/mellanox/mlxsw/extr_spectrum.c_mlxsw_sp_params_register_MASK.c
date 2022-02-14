
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union devlink_param_value {int vu8; } ;
struct mlxsw_core {int dummy; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct devlink*,int ,union devlink_param_value) ;
 int FUNC_2 (struct devlink*,int ,int ) ;
 int VAR_2 ;
 struct devlink* FUNC_3 (struct mlxsw_core*) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_3)
{
 struct devlink *VAR_4 = FUNC_3(VAR_3);
 union devlink_param_value VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_2,
          FUNC_0(VAR_2));
 if (VAR_6)
  return VAR_6;

 VAR_5.vu8 = VAR_0;
 FUNC_1(VAR_4,
        VAR_1,
        VAR_5);
 return 0;
}
