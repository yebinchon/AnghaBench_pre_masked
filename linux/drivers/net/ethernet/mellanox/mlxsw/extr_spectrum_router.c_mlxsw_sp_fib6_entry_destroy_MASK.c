
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib6_entry {int nrt6; int common; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp_fib6_entry*) ;
 int FUNC_2 (struct mlxsw_sp_fib6_entry*) ;
 int FUNC_3 (struct mlxsw_sp*,int *) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_fib6_entry *VAR_1)
{
 FUNC_3(VAR_0, &VAR_1->common);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->nrt6);
 FUNC_1(VAR_1);
}
