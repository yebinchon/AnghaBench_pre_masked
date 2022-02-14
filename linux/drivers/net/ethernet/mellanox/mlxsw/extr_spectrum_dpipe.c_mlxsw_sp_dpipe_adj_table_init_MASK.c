
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devlink*,int ,int *,struct mlxsw_sp*,int) ;
 int FUNC_1 (struct devlink*,int ,int ,int ) ;
 int FUNC_2 (struct devlink*,int ) ;
 int VAR_3 ;
 struct devlink* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_4)
{
 struct devlink *VAR_5 = FUNC_3(VAR_4->core);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5,
        VAR_0,
        &VAR_3,
        VAR_4, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5,
            VAR_0,
            VAR_2,
            VAR_1);
 if (VAR_6)
  goto err_resource_set;

 return 0;

err_resource_set:
 FUNC_2(VAR_5,
           VAR_0);
 return VAR_6;
}
