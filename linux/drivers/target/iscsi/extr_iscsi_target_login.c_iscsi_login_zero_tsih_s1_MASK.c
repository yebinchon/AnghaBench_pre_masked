
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int session_index; struct iscsi_session* sess_ops; int se_sess; int max_cmd_sn; int creation_time; int time2retain_timer; int ttt_lock; int session_usage_lock; int cr_i_lock; int cr_a_lock; int conn_lock; int cmdsn_mutex; int session_waiting_on_uc_comp; int session_wait_comp; int reinstatement_comp; int async_msg_comp; int cr_inactive_list; int cr_active_list; int sess_ooo_cmdsn_list; int sess_conn_list; int exp_cmd_sn; int isid; int init_task_tag; } ;
struct iscsi_sess_ops {int dummy; } ;
struct iscsi_login_req {int cmdsn; int isid; int itt; int cid; } ;
struct iscsi_conn {int * sess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct iscsi_session*,struct iscsi_conn*,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct iscsi_conn*,int ,int ) ;
 int FUNC_10 (struct iscsi_session*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,...) ;
 int VAR_6 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(
 struct iscsi_conn *VAR_7,
 unsigned char *VAR_8)
{
 struct iscsi_session *VAR_9 = ((void*)0);
 struct iscsi_login_req *VAR_10 = (struct iscsi_login_req *)VAR_8;
 int VAR_11;

 VAR_9 = FUNC_11(sizeof(struct iscsi_session), VAR_1);
 if (!VAR_9) {
  FUNC_9(VAR_7, VAR_3,
    VAR_2);
  FUNC_14("Could not allocate memory for session\n");
  return -VAR_0;
 }

 if (FUNC_8(VAR_9, VAR_7, VAR_10->cid))
  goto free_sess;

 VAR_9->init_task_tag = VAR_10->itt;
 FUNC_12(&VAR_9->isid, VAR_10->isid, 6);
 VAR_9->exp_cmd_sn = FUNC_3(VAR_10->cmdsn);
 FUNC_0(&VAR_9->sess_conn_list);
 FUNC_0(&VAR_9->sess_ooo_cmdsn_list);
 FUNC_0(&VAR_9->cr_active_list);
 FUNC_0(&VAR_9->cr_inactive_list);
 FUNC_7(&VAR_9->async_msg_comp);
 FUNC_7(&VAR_9->reinstatement_comp);
 FUNC_7(&VAR_9->session_wait_comp);
 FUNC_7(&VAR_9->session_waiting_on_uc_comp);
 FUNC_13(&VAR_9->cmdsn_mutex);
 FUNC_15(&VAR_9->conn_lock);
 FUNC_15(&VAR_9->cr_a_lock);
 FUNC_15(&VAR_9->cr_i_lock);
 FUNC_15(&VAR_9->session_usage_lock);
 FUNC_15(&VAR_9->ttt_lock);

 FUNC_16(&VAR_9->time2retain_timer,
      VAR_5, 0);

 VAR_11 = FUNC_5(&VAR_6, VAR_1);
 if (VAR_11 < 0) {
  FUNC_14("Session ID allocation failed %d\n", VAR_11);
  FUNC_9(VAR_7, VAR_3,
    VAR_2);
  goto free_sess;
 }

 VAR_9->session_index = VAR_11;
 VAR_9->creation_time = FUNC_4();




 FUNC_2(&VAR_9->max_cmd_sn, FUNC_3(VAR_10->cmdsn));

 VAR_9->sess_ops = FUNC_11(sizeof(struct iscsi_sess_ops), VAR_1);
 if (!VAR_9->sess_ops) {
  FUNC_9(VAR_7, VAR_3,
    VAR_2);
  FUNC_14("Unable to allocate memory for"
    " struct iscsi_sess_ops.\n");
  goto free_id;
 }

 VAR_9->se_sess = FUNC_17(VAR_4);
 if (FUNC_1(VAR_9->se_sess)) {
  FUNC_9(VAR_7, VAR_3,
    VAR_2);
  goto free_ops;
 }

 return 0;

free_ops:
 FUNC_10(VAR_9->sess_ops);
free_id:
 FUNC_6(&VAR_6, VAR_9->session_index);
free_sess:
 FUNC_10(VAR_9);
 VAR_7->sess = ((void*)0);
 return -VAR_0;
}
