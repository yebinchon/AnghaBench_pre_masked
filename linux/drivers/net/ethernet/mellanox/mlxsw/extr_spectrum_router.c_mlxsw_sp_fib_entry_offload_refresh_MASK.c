
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_entry {int dummy; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;




 int FUNC_0 (struct mlxsw_sp_fib_entry*) ;
 void FUNC_1 (struct mlxsw_sp_fib_entry*) ;
 int FUNC_2 (struct mlxsw_sp_fib_entry*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp_fib_entry *VAR_0,
       enum mlxsw_reg_ralue_op VAR_1, int VAR_2)
{
 switch (VAR_1) {
 case 129:
  return FUNC_1(VAR_0);
 case 128:
  if (VAR_2)
   return;
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_0);
  else
   FUNC_1(VAR_0);
  return;
 default:
  return;
 }
}
