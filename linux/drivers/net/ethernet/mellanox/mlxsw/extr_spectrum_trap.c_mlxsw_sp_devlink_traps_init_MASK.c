
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct devlink*,int ,scalar_t__,struct mlxsw_sp*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devlink* FUNC_3 (int ) ;

int FUNC_4(struct mlxsw_sp *VAR_4)
{
 struct devlink *VAR_5 = FUNC_3(VAR_4->core);

 if (FUNC_1(FUNC_0(VAR_1) !=
      FUNC_0(VAR_2)))
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_3,
          FUNC_0(VAR_3),
          VAR_4);
}
