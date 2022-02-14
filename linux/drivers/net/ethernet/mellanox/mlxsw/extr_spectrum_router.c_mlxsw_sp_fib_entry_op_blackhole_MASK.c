
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_entry {int dummy; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralue_trap_action { ____Placeholder_mlxsw_reg_ralue_trap_action } mlxsw_reg_ralue_trap_action ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,struct mlxsw_sp_fib_entry*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_3,
        struct mlxsw_sp_fib_entry *VAR_4,
        enum mlxsw_reg_ralue_op VAR_5)
{
 enum mlxsw_reg_ralue_trap_action VAR_6;
 char VAR_7[VAR_0];

 VAR_6 = VAR_1;
 FUNC_3(VAR_7, VAR_4, VAR_5);
 FUNC_1(VAR_7, VAR_6, 0, 0);
 return FUNC_2(VAR_3->core, FUNC_0(VAR_2), VAR_7);
}
