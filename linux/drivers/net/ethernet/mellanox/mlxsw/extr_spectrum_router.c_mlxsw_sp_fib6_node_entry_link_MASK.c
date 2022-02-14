
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib6_entry {int common; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_fib6_entry*,int*) ;
 int FUNC_1 (struct mlxsw_sp_fib6_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,int *) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_fib6_entry *VAR_1,
      bool *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, &VAR_1->common);
 if (VAR_3)
  goto err_fib_node_entry_add;

 return 0;

err_fib_node_entry_add:
 FUNC_1(VAR_1);
 return VAR_3;
}
