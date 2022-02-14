
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_entry {int type; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int VAR_0 ;






 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_1,
       struct mlxsw_sp_fib_entry *VAR_2,
       enum mlxsw_reg_ralue_op VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  return FUNC_4(VAR_1, VAR_2, VAR_3);
 case 131:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_5(VAR_1, VAR_2, VAR_3);
 case 133:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 132:
  return FUNC_1(VAR_1,
       VAR_2, VAR_3);
 case 130:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 }
 return -VAR_0;
}
