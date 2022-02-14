
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u32 ;
struct mlxsw_sp_fib_entry {int type; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_sp_fib_entry_type { ____Placeholder_mlxsw_sp_fib_entry_type } mlxsw_sp_fib_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*) ;
 struct mlxsw_sp_fib_entry* FUNC_1 (struct mlxsw_sp*,int ,int,union mlxsw_sp_l3addr const*,int) ;

void FUNC_2(struct mlxsw_sp *VAR_2, u32 VAR_3,
          enum mlxsw_sp_l3proto VAR_4,
          const union mlxsw_sp_l3addr *VAR_5)
{
 enum mlxsw_sp_fib_entry_type VAR_6 = VAR_0;
 struct mlxsw_sp_fib_entry *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3,
        VAR_4, VAR_5,
        VAR_6);
 if (!VAR_7)
  return;

 VAR_7->type = VAR_1;
 FUNC_0(VAR_2, VAR_7);
}
