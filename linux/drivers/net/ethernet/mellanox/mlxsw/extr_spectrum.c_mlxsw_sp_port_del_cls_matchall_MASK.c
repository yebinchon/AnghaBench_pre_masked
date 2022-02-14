
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cls_matchall_offload {int cookie; } ;
struct mlxsw_sp_port_mall_tc_entry {int type; int mirror; int list; } ;
struct mlxsw_sp_port {int dev; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_port_mall_tc_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlxsw_sp_port*,int *) ;
 int FUNC_4 (struct mlxsw_sp_port*) ;
 struct mlxsw_sp_port_mall_tc_entry* FUNC_5 (struct mlxsw_sp_port*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct mlxsw_sp_port *VAR_0,
        struct tc_cls_matchall_offload *VAR_1)
{
 struct mlxsw_sp_port_mall_tc_entry *VAR_2;

 VAR_2 = FUNC_5(VAR_0,
        VAR_1->cookie);
 if (!VAR_2) {
  FUNC_6(VAR_0->dev, "tc entry not found on port\n");
  return;
 }
 FUNC_2(&VAR_2->list);

 switch (VAR_2->type) {
 case 129:
  FUNC_3(VAR_0,
            &VAR_2->mirror);
  break;
 case 128:
  FUNC_4(VAR_0);
  break;
 default:
  FUNC_0(1);
 }

 FUNC_1(VAR_2);
}
