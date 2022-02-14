
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp_rif {int rif_index; } ;
struct mlxsw_sp_fib_entry {TYPE_1__* nh_group; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralue_trap_action { ____Placeholder_mlxsw_reg_ralue_trap_action } mlxsw_reg_ralue_trap_action ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;
struct TYPE_2__ {struct mlxsw_sp_rif* nh_rif; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,struct mlxsw_sp_fib_entry*,int) ;
 scalar_t__ FUNC_4 (struct mlxsw_sp_fib_entry*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_5,
           struct mlxsw_sp_fib_entry *VAR_6,
           enum mlxsw_reg_ralue_op VAR_7)
{
 struct mlxsw_sp_rif *VAR_8 = VAR_6->nh_group->nh_rif;
 enum mlxsw_reg_ralue_trap_action VAR_9;
 char VAR_10[VAR_0];
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;

 if (FUNC_4(VAR_6)) {
  VAR_9 = VAR_1;
  VAR_12 = VAR_8->rif_index;
 } else {
  VAR_9 = VAR_2;
  VAR_11 = VAR_3;
 }

 FUNC_3(VAR_10, VAR_6, VAR_7);
 FUNC_1(VAR_10, VAR_9, VAR_11,
           VAR_12);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_4), VAR_10);
}
