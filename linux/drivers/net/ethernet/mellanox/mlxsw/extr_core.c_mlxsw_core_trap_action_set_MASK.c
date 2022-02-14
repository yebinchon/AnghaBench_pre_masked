
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_listener {int is_ctrl; int trap_group; int trap_id; } ;
struct mlxsw_core {int dummy; } ;
typedef enum mlxsw_reg_hpkt_action { ____Placeholder_mlxsw_reg_hpkt_action } mlxsw_reg_hpkt_action ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ,int ,int ) ;
 int FUNC_2 (struct mlxsw_core*,int ,char*) ;

int FUNC_3(struct mlxsw_core *VAR_2,
          const struct mlxsw_listener *VAR_3,
          enum mlxsw_reg_hpkt_action VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, VAR_4, VAR_3->trap_id,
       VAR_3->trap_group, VAR_3->is_ctrl);
 return FUNC_2(VAR_2, FUNC_0(VAR_1), VAR_5);
}
