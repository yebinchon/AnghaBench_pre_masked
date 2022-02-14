
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib {int ht; int node_list; int lpm_tree; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_fib*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_fib *VAR_1)
{
 FUNC_4(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1->lpm_tree);
 FUNC_0(!FUNC_2(&VAR_1->node_list));
 FUNC_5(&VAR_1->ht);
 FUNC_1(VAR_1);
}
