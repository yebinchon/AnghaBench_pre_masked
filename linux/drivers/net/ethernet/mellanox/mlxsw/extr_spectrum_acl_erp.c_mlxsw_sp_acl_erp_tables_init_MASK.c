
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_erp_core {int erp_tables; int bf; void* num_erp_banks; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int,int) ;
 int VAR_5 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mlxsw_sp*,void*) ;
 int FUNC_10 (struct mlxsw_sp*,struct mlxsw_sp_acl_erp_core*) ;

__attribute__((used)) static int FUNC_11(struct mlxsw_sp *VAR_6,
     struct mlxsw_sp_acl_erp_core *VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;

 if (!FUNC_2(VAR_6->core, VAR_1) ||
     !FUNC_2(VAR_6->core, VAR_0))
  return -VAR_2;
 VAR_8 = FUNC_1(VAR_6->core,
         VAR_1);
 VAR_7->num_erp_banks = FUNC_1(VAR_6->core,
           VAR_0);

 VAR_7->erp_tables = FUNC_5(0, -1);
 if (!VAR_7->erp_tables)
  return -VAR_3;
 FUNC_7(VAR_7->erp_tables, VAR_5, ((void*)0));

 VAR_9 = FUNC_4(VAR_7->erp_tables,
      VAR_4, VAR_8,
      -1);
 if (VAR_9)
  goto err_gen_pool_add;

 VAR_7->bf = FUNC_9(VAR_6, VAR_7->num_erp_banks);
 if (FUNC_0(VAR_7->bf)) {
  VAR_9 = FUNC_3(VAR_7->bf);
  goto err_bf_init;
 }


 VAR_9 = FUNC_10(VAR_6, VAR_7);
 if (VAR_9)
  goto err_erp_tables_sizes_query;

 return 0;

err_erp_tables_sizes_query:
 FUNC_8(VAR_7->bf);
err_bf_init:
err_gen_pool_add:
 FUNC_6(VAR_7->erp_tables);
 return VAR_9;
}
