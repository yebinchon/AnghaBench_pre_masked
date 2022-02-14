
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_counter_sub_pool {void* entry_size; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct mlxsw_sp_counter_sub_pool* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_6)
{
 struct mlxsw_sp_counter_sub_pool *VAR_7;


 VAR_7 = &VAR_5[VAR_3];
 if (!FUNC_1(VAR_6->core, VAR_0))
  return -VAR_2;
 VAR_7->entry_size = FUNC_0(VAR_6->core,
        VAR_0);

 VAR_7 = &VAR_5[VAR_4];
 if (!FUNC_1(VAR_6->core, VAR_1))
  return -VAR_2;
 VAR_7->entry_size = FUNC_0(VAR_6->core,
        VAR_1);
 return 0;
}
