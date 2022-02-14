
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif_subport {int ref_count; } ;
struct mlxsw_sp_rif {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif_subport* FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp_rif *VAR_0)
{
 struct mlxsw_sp_rif_subport *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!FUNC_2(&VAR_1->ref_count))
  return;

 FUNC_0(VAR_0);
}
