
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct tc_cls_matchall_offload {TYPE_2__* rule; int cookie; TYPE_1__ common; } ;
struct mlxsw_sp_port_mall_mirror_tc_entry {int dummy; } ;
struct mlxsw_sp_port_mall_tc_entry {int list; int type; struct mlxsw_sp_port_mall_mirror_tc_entry mirror; int cookie; } ;
struct mlxsw_sp_port {int mall_tc_list; int dev; } ;
struct flow_action_entry {scalar_t__ id; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {struct flow_action_entry* entries; } ;
struct TYPE_5__ {TYPE_3__ action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp_port_mall_tc_entry*) ;
 struct mlxsw_sp_port_mall_tc_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct mlxsw_sp_port*,struct mlxsw_sp_port_mall_mirror_tc_entry*,struct flow_action_entry*,int) ;
 int FUNC_6 (struct mlxsw_sp_port*,struct tc_cls_matchall_offload*,struct flow_action_entry*,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp_port *VAR_8,
       struct tc_cls_matchall_offload *VAR_9,
       bool VAR_10)
{
 struct mlxsw_sp_port_mall_tc_entry *VAR_11;
 __be16 VAR_12 = VAR_9->common.protocol;
 struct flow_action_entry *VAR_13;
 int VAR_14;

 if (!FUNC_0(&VAR_9->rule->action)) {
  FUNC_7(VAR_8->dev, "only singular actions are supported\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return -VAR_0;
 VAR_11->cookie = VAR_9->cookie;

 VAR_13 = &VAR_9->rule->action.entries[0];

 if (VAR_13->id == VAR_3 && VAR_12 == FUNC_1(VAR_2)) {
  struct mlxsw_sp_port_mall_mirror_tc_entry *VAR_15;

  VAR_11->type = VAR_6;
  VAR_15 = &VAR_11->mirror;
  VAR_14 = FUNC_5(VAR_8,
           VAR_15, VAR_13,
           VAR_10);
 } else if (VAR_13->id == VAR_4 &&
     VAR_12 == FUNC_1(VAR_2)) {
  VAR_11->type = VAR_7;
  VAR_14 = FUNC_6(VAR_8, VAR_9,
           VAR_13, VAR_10);
 } else {
  VAR_14 = -VAR_1;
 }

 if (VAR_14)
  goto err_add_action;

 FUNC_4(&VAR_11->list, &VAR_8->mall_tc_list);
 return 0;

err_add_action:
 FUNC_2(VAR_11);
 return VAR_14;
}
