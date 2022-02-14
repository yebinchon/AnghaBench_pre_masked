
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_node {struct mlxsw_sp_fib* fib; } ;
struct mlxsw_sp_fib {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*) ;
 int FUNC_1 (struct mlxsw_sp_fib*,struct mlxsw_sp_fib_node*) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0,
       struct mlxsw_sp_fib_node *VAR_1)
{
 struct mlxsw_sp_fib *VAR_2 = VAR_1->fib;

 FUNC_0(VAR_0, VAR_1);
 VAR_1->fib = ((void*)0);
 FUNC_1(VAR_2, VAR_1);
}
