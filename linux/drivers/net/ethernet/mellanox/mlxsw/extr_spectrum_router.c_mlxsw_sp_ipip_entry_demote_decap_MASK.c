
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_ipip_entry {struct mlxsw_sp_fib_entry* decap_fib_entry; } ;
struct mlxsw_sp_fib_entry {int type; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_ipip_entry *VAR_2)
{
 struct mlxsw_sp_fib_entry *VAR_3 = VAR_2->decap_fib_entry;

 FUNC_0(VAR_1, VAR_3);
 VAR_3->type = VAR_0;

 FUNC_1(VAR_1, VAR_3);
}
