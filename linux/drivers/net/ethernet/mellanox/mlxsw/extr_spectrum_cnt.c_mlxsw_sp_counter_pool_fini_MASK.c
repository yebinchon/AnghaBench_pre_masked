
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_counter_pool {scalar_t__ pool_size; struct mlxsw_sp_counter_pool* usage; } ;
struct mlxsw_sp {struct mlxsw_sp_counter_pool* counter_pool; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_counter_pool*,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp_counter_pool*) ;

void FUNC_3(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_counter_pool *VAR_1 = VAR_0->counter_pool;

 FUNC_0(FUNC_1(VAR_1->usage, VAR_1->pool_size) !=
          VAR_1->pool_size);
 FUNC_2(VAR_1->usage);
 FUNC_2(VAR_1);
}
