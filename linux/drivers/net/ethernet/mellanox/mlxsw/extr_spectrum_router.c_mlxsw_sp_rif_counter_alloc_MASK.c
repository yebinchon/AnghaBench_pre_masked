
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rif {int rif_index; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int ,unsigned int*) ;
 int FUNC_1 (struct mlxsw_sp*,int ,unsigned int) ;
 int FUNC_2 (struct mlxsw_sp*,unsigned int) ;
 int FUNC_3 (struct mlxsw_sp*,int ,unsigned int,int,int) ;
 int FUNC_4 (struct mlxsw_sp_rif*,int,int) ;
 unsigned int* FUNC_5 (struct mlxsw_sp_rif*,int) ;

int FUNC_6(struct mlxsw_sp *VAR_2,
          struct mlxsw_sp_rif *VAR_3,
          enum mlxsw_sp_rif_counter_dir VAR_4)
{
 unsigned int *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_2, VAR_1,
         VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_2, *VAR_5);
 if (VAR_6)
  goto err_counter_clear;

 VAR_6 = FUNC_3(VAR_2, VAR_3->rif_index,
     *VAR_5, 1, VAR_4);
 if (VAR_6)
  goto err_counter_edit;
 FUNC_4(VAR_3, VAR_4, 1);
 return 0;

err_counter_edit:
err_counter_clear:
 FUNC_1(VAR_2, VAR_1,
         *VAR_5);
 return VAR_6;
}
