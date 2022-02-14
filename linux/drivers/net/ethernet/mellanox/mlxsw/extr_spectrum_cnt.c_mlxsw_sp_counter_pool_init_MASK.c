
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_counter_sub_pool {int size; int bank_count; unsigned int base_index; } ;
struct mlxsw_sp_counter_pool {unsigned int pool_size; struct mlxsw_sp_counter_sub_pool* sub_pools; void* usage; } ;
struct mlxsw_sp {struct mlxsw_sp_counter_pool* counter_pool; int core; } ;


 int FUNC_0 (struct mlxsw_sp_counter_sub_pool*) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct mlxsw_sp_counter_pool*) ;
 void* FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 struct mlxsw_sp_counter_sub_pool* VAR_5 ;
 int FUNC_7 (struct mlxsw_sp*) ;

int FUNC_8(struct mlxsw_sp *VAR_6)
{
 struct mlxsw_sp_counter_sub_pool *VAR_7;
 struct mlxsw_sp_counter_pool *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_6->core, VAR_0))
  return -VAR_1;

 VAR_12 = FUNC_6(VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->pool_size = FUNC_2(VAR_6->core, VAR_0);
 VAR_10 = FUNC_1(VAR_8->pool_size) * sizeof(unsigned long);

 VAR_8->usage = FUNC_5(VAR_10, VAR_3);
 if (!VAR_8->usage) {
  VAR_12 = -VAR_2;
  goto err_usage_alloc;
 }

 VAR_8->sub_pools = VAR_5;



 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  VAR_7 = &VAR_8->sub_pools[VAR_11];
  VAR_7->size = VAR_7->bank_count *
     VAR_4;
  VAR_7->base_index = VAR_9;
  VAR_9 += VAR_7->size;

  if (VAR_7->base_index + VAR_7->size > VAR_8->pool_size)
   VAR_7->size = VAR_8->pool_size - VAR_7->base_index;
 }

 VAR_6->counter_pool = VAR_8;
 return 0;

err_usage_alloc:
 FUNC_4(VAR_8);
 return VAR_12;
}
