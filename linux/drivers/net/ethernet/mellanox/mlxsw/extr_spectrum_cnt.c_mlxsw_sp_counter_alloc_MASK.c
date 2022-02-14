
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_counter_sub_pool {unsigned int base_index; unsigned int size; unsigned int entry_size; } ;
struct mlxsw_sp_counter_pool {int usage; } ;
struct mlxsw_sp {struct mlxsw_sp_counter_pool* counter_pool; } ;
typedef enum mlxsw_sp_counter_sub_pool_id { ____Placeholder_mlxsw_sp_counter_sub_pool_id } mlxsw_sp_counter_sub_pool_id ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 unsigned int FUNC_1 (int ,unsigned int,unsigned int) ;
 struct mlxsw_sp_counter_sub_pool* VAR_1 ;

int FUNC_2(struct mlxsw_sp *VAR_2,
      enum mlxsw_sp_counter_sub_pool_id VAR_3,
      unsigned int *VAR_4)
{
 struct mlxsw_sp_counter_pool *VAR_5 = VAR_2->counter_pool;
 struct mlxsw_sp_counter_sub_pool *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = &VAR_1[VAR_3];
 VAR_8 = VAR_6->base_index + VAR_6->size;
 VAR_7 = VAR_6->base_index;

 VAR_7 = FUNC_1(VAR_5->usage, VAR_8, VAR_7);
 if (VAR_7 == VAR_8)
  return -VAR_0;



 if (VAR_7 + VAR_6->entry_size > VAR_8)
  return -VAR_0;
 for (VAR_9 = 0; VAR_9 < VAR_6->entry_size; VAR_9++)
  FUNC_0(VAR_7 + VAR_9, VAR_5->usage);

 *VAR_4 = VAR_7;
 return 0;
}
