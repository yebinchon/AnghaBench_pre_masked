
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_counter_sub_pool {int entry_size; } ;
struct mlxsw_sp_counter_pool {unsigned int pool_size; int usage; } ;
struct mlxsw_sp {struct mlxsw_sp_counter_pool* counter_pool; } ;
typedef enum mlxsw_sp_counter_sub_pool_id { ____Placeholder_mlxsw_sp_counter_sub_pool_id } mlxsw_sp_counter_sub_pool_id ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 struct mlxsw_sp_counter_sub_pool* VAR_0 ;

void FUNC_2(struct mlxsw_sp *VAR_1,
      enum mlxsw_sp_counter_sub_pool_id VAR_2,
      unsigned int VAR_3)
{
 struct mlxsw_sp_counter_pool *VAR_4 = VAR_1->counter_pool;
 struct mlxsw_sp_counter_sub_pool *VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_3 >= VAR_4->pool_size))
  return;
 VAR_5 = &VAR_0[VAR_2];
 for (VAR_6 = 0; VAR_6 < VAR_5->entry_size; VAR_6++)
  FUNC_1(VAR_3 + VAR_6, VAR_4->usage);
}
