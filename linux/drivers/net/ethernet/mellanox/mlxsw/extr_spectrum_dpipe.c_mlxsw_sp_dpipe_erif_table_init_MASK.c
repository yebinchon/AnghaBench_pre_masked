
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,int ,int *,struct mlxsw_sp*,int) ;
 int VAR_1 ;
 struct devlink* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_2)
{
 struct devlink *VAR_3 = FUNC_1(VAR_2->core);

 return FUNC_0(VAR_3,
         VAR_0,
         &VAR_1,
         VAR_2, 0);
}
