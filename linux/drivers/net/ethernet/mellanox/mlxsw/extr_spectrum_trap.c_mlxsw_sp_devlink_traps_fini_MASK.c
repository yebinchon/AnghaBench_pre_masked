
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct devlink*,int ,int ) ;
 int VAR_0 ;
 struct devlink* FUNC_2 (int ) ;

void FUNC_3(struct mlxsw_sp *VAR_1)
{
 struct devlink *VAR_2 = FUNC_2(VAR_1->core);

 FUNC_1(VAR_2, VAR_0,
     FUNC_0(VAR_0));
}
