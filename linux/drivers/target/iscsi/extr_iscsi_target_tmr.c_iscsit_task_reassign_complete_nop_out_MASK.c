
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tmr_req {struct iscsi_cmd* ref_cmd; } ;
struct iscsi_conn_recovery {int dummy; } ;
struct iscsi_conn {int cmd_lock; int conn_cmd_list; int sess; } ;
struct iscsi_cmd {int i_state; int i_conn_node; scalar_t__ exp_stat_sn; scalar_t__ stat_sn; struct iscsi_conn_recovery* cr; int init_task_tag; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int ) ;
 int FUNC_1 (struct iscsi_cmd*,struct iscsi_conn_recovery*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
 struct iscsi_tmr_req *VAR_1,
 struct iscsi_conn *VAR_2)
{
 struct iscsi_cmd *VAR_3 = VAR_1->ref_cmd;
 struct iscsi_conn_recovery *VAR_4;

 if (!VAR_3->cr) {
  FUNC_3("struct iscsi_conn_recovery pointer for ITT: 0x%08x"
   " is NULL!\n", VAR_3->init_task_tag);
  return -1;
 }
 VAR_4 = VAR_3->cr;






 VAR_3->stat_sn = VAR_3->exp_stat_sn = 0;

 FUNC_1(VAR_3, VAR_4, VAR_2->sess);

 FUNC_4(&VAR_2->cmd_lock);
 FUNC_2(&VAR_3->i_conn_node, &VAR_2->conn_cmd_list);
 FUNC_5(&VAR_2->cmd_lock);

 VAR_3->i_state = VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_3->i_state);
 return 0;
}
