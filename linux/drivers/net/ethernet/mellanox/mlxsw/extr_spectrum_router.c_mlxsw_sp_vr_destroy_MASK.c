
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_vr {int * fib4; int * fib6; int ** mr_table; } ;
struct mlxsw_sp {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_vr *VAR_3)
{
 FUNC_1(VAR_3->mr_table[VAR_1]);
 VAR_3->mr_table[VAR_1] = ((void*)0);
 FUNC_1(VAR_3->mr_table[VAR_0]);
 VAR_3->mr_table[VAR_0] = ((void*)0);
 FUNC_0(VAR_2, VAR_3->fib6);
 VAR_3->fib6 = ((void*)0);
 FUNC_0(VAR_2, VAR_3->fib4);
 VAR_3->fib4 = ((void*)0);
}
