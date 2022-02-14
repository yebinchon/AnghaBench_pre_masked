
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int rif_index; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,int ,unsigned int) ;
 int FUNC_2 (struct mlxsw_sp*,int ,unsigned int,int,int) ;
 int FUNC_3 (struct mlxsw_sp_rif*,int) ;
 int FUNC_4 (struct mlxsw_sp_rif*,int,int) ;
 unsigned int* FUNC_5 (struct mlxsw_sp_rif*,int) ;

void FUNC_6(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_rif *VAR_2,
          enum mlxsw_sp_rif_counter_dir VAR_3)
{
 unsigned int *VAR_4;

 if (!FUNC_3(VAR_2, VAR_3))
  return;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (FUNC_0(!VAR_4))
  return;
 FUNC_2(VAR_1, VAR_2->rif_index,
      *VAR_4, 0, VAR_3);
 FUNC_1(VAR_1, VAR_0,
         *VAR_4);
 FUNC_4(VAR_2, VAR_3, 0);
}
