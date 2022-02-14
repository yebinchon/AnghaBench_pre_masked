
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_np {int np_transport; } ;
struct iscsi_conn_ops {int dummy; } ;
struct iscsi_conn {int conn_transport; struct iscsi_conn* conn_ops; int conn_cpumask; int nopin_timer; int nopin_response_timer; int state_lock; int response_queue_lock; int nopin_timer_lock; int immed_queue_lock; int conn_usage_lock; int cmd_lock; int rx_login_comp; int tx_half_close_comp; int rx_half_close_comp; int conn_logout_comp; int conn_waiting_on_uc_comp; int conn_wait_rcfr_comp; int conn_wait_comp; int conn_post_wait_comp; int response_queue_list; int immed_queue_list; int conn_cmd_list; int conn_list; int queues_wq; int conn_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct iscsi_conn*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_conn*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static struct iscsi_conn *FUNC_12(struct iscsi_np *VAR_4)
{
 struct iscsi_conn *VAR_5;

 VAR_5 = FUNC_6(sizeof(struct iscsi_conn), VAR_0);
 if (!VAR_5) {
  FUNC_8("Could not allocate memory for new connection\n");
  return ((void*)0);
 }
 FUNC_7("Moving to TARG_CONN_STATE_FREE.\n");
 VAR_5->conn_state = VAR_1;

 FUNC_2(&VAR_5->queues_wq);
 FUNC_0(&VAR_5->conn_list);
 FUNC_0(&VAR_5->conn_cmd_list);
 FUNC_0(&VAR_5->immed_queue_list);
 FUNC_0(&VAR_5->response_queue_list);
 FUNC_1(&VAR_5->conn_post_wait_comp);
 FUNC_1(&VAR_5->conn_wait_comp);
 FUNC_1(&VAR_5->conn_wait_rcfr_comp);
 FUNC_1(&VAR_5->conn_waiting_on_uc_comp);
 FUNC_1(&VAR_5->conn_logout_comp);
 FUNC_1(&VAR_5->rx_half_close_comp);
 FUNC_1(&VAR_5->tx_half_close_comp);
 FUNC_1(&VAR_5->rx_login_comp);
 FUNC_9(&VAR_5->cmd_lock);
 FUNC_9(&VAR_5->conn_usage_lock);
 FUNC_9(&VAR_5->immed_queue_lock);
 FUNC_9(&VAR_5->nopin_timer_lock);
 FUNC_9(&VAR_5->response_queue_lock);
 FUNC_9(&VAR_5->state_lock);

 FUNC_10(&VAR_5->nopin_response_timer,
      VAR_2, 0);
 FUNC_10(&VAR_5->nopin_timer, VAR_3, 0);

 if (FUNC_3(VAR_5, VAR_4->np_transport) < 0)
  goto free_conn;

 VAR_5->conn_ops = FUNC_6(sizeof(struct iscsi_conn_ops), VAR_0);
 if (!VAR_5->conn_ops) {
  FUNC_8("Unable to allocate memory for struct iscsi_conn_ops.\n");
  goto put_transport;
 }

 if (!FUNC_11(&VAR_5->conn_cpumask, VAR_0)) {
  FUNC_8("Unable to allocate conn->conn_cpumask\n");
  goto free_conn_ops;
 }

 return VAR_5;

free_conn_ops:
 FUNC_5(VAR_5->conn_ops);
put_transport:
 FUNC_4(VAR_5->conn_transport);
free_conn:
 FUNC_5(VAR_5);
 return ((void*)0);
}
