
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tmr_req {struct iscsi_cmd* ref_cmd; } ;
struct iscsi_conn_recovery {int dummy; } ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; int sess; } ;
struct TYPE_2__ {int se_cmd_flags; } ;
struct iscsi_cmd {int init_task_tag; int data_direction; int i_state; TYPE_1__ se_cmd; int i_conn_node; scalar_t__ exp_stat_sn; scalar_t__ stat_sn; struct iscsi_conn_recovery* cr; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_tmr_req*) ;
 int FUNC_2 (struct iscsi_cmd*,struct iscsi_tmr_req*) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_tmr_req*) ;
 int FUNC_4 (struct iscsi_cmd*,struct iscsi_conn_recovery*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
 struct iscsi_tmr_req *VAR_2,
 struct iscsi_conn *VAR_3)
{
 struct iscsi_cmd *VAR_4 = VAR_2->ref_cmd;
 struct iscsi_conn_recovery *VAR_5;

 if (!VAR_4->cr) {
  FUNC_6("struct iscsi_conn_recovery pointer for ITT: 0x%08x"
   " is NULL!\n", VAR_4->init_task_tag);
  return -1;
 }
 VAR_5 = VAR_4->cr;






 VAR_4->stat_sn = VAR_4->exp_stat_sn = 0;

 FUNC_4(VAR_4, VAR_5, VAR_3->sess);

 FUNC_7(&VAR_3->cmd_lock);
 FUNC_5(&VAR_4->i_conn_node, &VAR_3->conn_cmd_list);
 FUNC_8(&VAR_3->cmd_lock);

 if (VAR_4->se_cmd.se_cmd_flags & VAR_1) {
  VAR_4->i_state = VAR_0;
  FUNC_0(VAR_4, VAR_3, VAR_4->i_state);
  return 0;
 }

 switch (VAR_4->data_direction) {
 case 128:
  return FUNC_3(VAR_4, VAR_2);
 case 130:
  return FUNC_2(VAR_4, VAR_2);
 case 129:
  return FUNC_1(VAR_4, VAR_2);
 default:
  FUNC_6("Unknown cmd->data_direction: 0x%02x\n",
    VAR_4->data_direction);
  return -1;
 }

 return 0;
}
