
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_sp_rif_counter_dir { ____Placeholder_mlxsw_sp_rif_counter_dir } mlxsw_sp_rif_counter_dir ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,unsigned int,int ) ;
 int FUNC_4 (struct mlxsw_sp_rif*,int) ;
 unsigned int* FUNC_5 (struct mlxsw_sp_rif*,int) ;
 int VAR_3 ;

int FUNC_6(struct mlxsw_sp *VAR_4,
       struct mlxsw_sp_rif *VAR_5,
       enum mlxsw_sp_rif_counter_dir VAR_6, u64 *VAR_7)
{
 char VAR_8[VAR_1];
 unsigned int *VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_5, VAR_6);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_9)
  return -VAR_0;
 FUNC_3(VAR_8, *VAR_9,
        VAR_2);
 VAR_11 = FUNC_1(VAR_4->core, FUNC_0(VAR_3), VAR_8);
 if (VAR_11)
  return VAR_11;
 *VAR_7 = FUNC_2(VAR_8);
 return 0;
}
