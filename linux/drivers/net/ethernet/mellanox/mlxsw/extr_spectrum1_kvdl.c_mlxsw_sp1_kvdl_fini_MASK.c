
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_kvdl {int dummy; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devlink*,int ) ;
 int FUNC_1 (struct mlxsw_sp1_kvdl*) ;
 struct devlink* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_4, void *VAR_5)
{
 struct devlink *VAR_6 = FUNC_2(VAR_4->core);
 struct mlxsw_sp1_kvdl *VAR_7 = VAR_5;

 FUNC_0(VAR_6,
         VAR_2);
 FUNC_0(VAR_6,
         VAR_1);
 FUNC_0(VAR_6,
         VAR_3);
 FUNC_0(VAR_6,
         VAR_0);
 FUNC_1(VAR_7);
}
