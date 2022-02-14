
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_listener {int is_ctrl; int trap_group; int trap_id; int unreg_action; int is_event; } ;
struct mlxsw_core {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_core*,struct mlxsw_listener const*,void*) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct mlxsw_core*,int ,char*) ;

void FUNC_4(struct mlxsw_core *VAR_2,
    const struct mlxsw_listener *VAR_3,
    void *VAR_4)
{
 char VAR_5[VAR_0];

 if (!VAR_3->is_event) {
  FUNC_2(VAR_5, VAR_3->unreg_action,
        VAR_3->trap_id, VAR_3->trap_group,
        VAR_3->is_ctrl);
  FUNC_3(VAR_2, FUNC_0(VAR_1), VAR_5);
 }

 FUNC_1(VAR_2, VAR_3, VAR_4);
}
