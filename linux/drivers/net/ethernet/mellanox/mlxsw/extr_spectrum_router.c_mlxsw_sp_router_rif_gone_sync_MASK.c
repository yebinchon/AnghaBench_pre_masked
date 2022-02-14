
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int rif_index; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_rif*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_rif *VAR_1)
{
 FUNC_2(VAR_0, VAR_1->rif_index);
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1);
}
