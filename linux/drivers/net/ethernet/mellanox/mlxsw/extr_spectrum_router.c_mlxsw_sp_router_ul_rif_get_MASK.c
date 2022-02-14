
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_rif {int rif_index; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_rif*) ;
 int FUNC_2 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_3 (struct mlxsw_sp*,int ,int *) ;

int FUNC_4(struct mlxsw_sp *VAR_0, u32 VAR_1,
          u16 *VAR_2)
{
 struct mlxsw_sp_rif *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_3(VAR_0, VAR_1, ((void*)0));
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);
 *VAR_2 = VAR_3->rif_index;

 return 0;
}
