
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct devlink*,int ) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_rif*,int ) ;
 struct devlink* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp_rif *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_2->mlxsw_sp;
 struct devlink *VAR_4;

 VAR_4 = FUNC_2(VAR_3->core);
 if (!FUNC_0(VAR_4,
       VAR_0))
  return;
 FUNC_1(VAR_3, VAR_2, VAR_1);
}
