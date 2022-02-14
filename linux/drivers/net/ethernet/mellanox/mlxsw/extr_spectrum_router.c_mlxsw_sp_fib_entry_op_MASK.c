
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*,int) ;
 int FUNC_1 (struct mlxsw_sp_fib_entry*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_fib_entry *VAR_1,
     enum mlxsw_reg_ralue_op VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_1(VAR_1, VAR_2, VAR_3);

 return VAR_3;
}
