
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_vr {struct mlxsw_sp_fib* fib6; struct mlxsw_sp_fib* fib4; } ;
struct mlxsw_sp_fib {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;





__attribute__((used)) static struct mlxsw_sp_fib *FUNC_0(const struct mlxsw_sp_vr *VAR_0,
         enum mlxsw_sp_l3proto VAR_1)
{
 switch (VAR_1) {
 case 129:
  return VAR_0->fib4;
 case 128:
  return VAR_0->fib6;
 }
 return ((void*)0);
}
