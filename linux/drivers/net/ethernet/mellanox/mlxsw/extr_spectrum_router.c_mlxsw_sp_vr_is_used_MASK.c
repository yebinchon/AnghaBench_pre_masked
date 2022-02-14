
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_vr {int * mr_table; int fib6; int fib4; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct mlxsw_sp_vr *VAR_2)
{
 return !!VAR_2->fib4 || !!VAR_2->fib6 ||
        !!VAR_2->mr_table[VAR_0] ||
        !!VAR_2->mr_table[VAR_1];
}
