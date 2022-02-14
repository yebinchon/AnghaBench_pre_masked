
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iscsi_session {int session_wait_comp; int sleep_on_sess_wait_comp; int conn_lock; int session_continuation; int session_state; int session_logout; int session_fall_back_to_erl0; int session_reinstatement; int session_stop_active; int nconn; TYPE_1__* sess_ops; int sid; } ;
struct iscsi_conn {scalar_t__ conn_state; scalar_t__ conn_logout_reason; TYPE_2__* conn_transport; scalar_t__ sock; scalar_t__ conn_rx_hash; scalar_t__ conn_tx_hash; int state_lock; int connection_reinstatement; int conn_post_wait_comp; int conn_wait_rcfr_comp; int connection_wait_rcfr; int conn_wait_comp; int sleep_on_conn_wait_comp; int connection_recovery; int conn_list; int conn_logout_remove; int bitmap_id; scalar_t__ rx_thread; int rx_thread_active; scalar_t__ tx_thread; int tx_thread_active; int conn_logout_comp; int cid; struct iscsi_session* sess; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_8__ {int comm; } ;
struct TYPE_7__ {int ts_bitmap_lock; int ts_bitmap; } ;
struct TYPE_6__ {int (* iscsit_free_conn ) (struct iscsi_conn*) ;int (* iscsit_wait_conn ) (struct iscsi_conn*) ;int rdma_shutdown; } ;
struct TYPE_5__ {int ErrorRecoveryLevel; int InitiatorName; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;
 struct crypto_ahash* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct crypto_ahash*) ;
 TYPE_4__* VAR_9 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct iscsi_conn*) ;
 int FUNC_11 (struct iscsi_conn*) ;
 int FUNC_12 (struct iscsi_conn*) ;
 int FUNC_13 (struct iscsi_session*) ;
 int FUNC_14 (struct iscsi_conn*) ;
 int FUNC_15 (struct iscsi_session*) ;
 int FUNC_16 (struct iscsi_conn*) ;
 int FUNC_17 (struct iscsi_conn*) ;
 int FUNC_18 (struct iscsi_conn*) ;
 TYPE_3__* VAR_10 ;
 int FUNC_19 (struct iscsi_conn*) ;
 int FUNC_20 (struct iscsi_conn*) ;
 int FUNC_21 (struct iscsi_session*) ;
 int FUNC_22 (struct iscsi_conn*) ;
 int FUNC_23 (struct iscsi_conn*) ;
 int FUNC_24 (struct iscsi_session*,int ,int ) ;
 int FUNC_25 (struct iscsi_conn*) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 (int ,scalar_t__,int) ;
 int FUNC_30 (scalar_t__) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int ,int ) ;
 int FUNC_36 (struct iscsi_conn*) ;
 int FUNC_37 (struct iscsi_conn*) ;
 int FUNC_38 (int *) ;

int FUNC_39(
 struct iscsi_conn *VAR_11)
{
 int VAR_12 = (VAR_11->conn_state == VAR_6);
 struct iscsi_session *VAR_13 = VAR_11->sess;

 FUNC_28("Closing iSCSI connection CID %hu on SID:"
  " %u\n", VAR_11->cid, VAR_13->sid);
 if (!VAR_11->conn_transport->rdma_shutdown)
  FUNC_6(&VAR_11->conn_logout_comp);

 if (!FUNC_35(VAR_9->comm, VAR_2)) {
  if (VAR_11->tx_thread &&
      FUNC_5(&VAR_11->tx_thread_active, 1, 0)) {
   FUNC_29(VAR_4, VAR_11->tx_thread, 1);
   FUNC_26(VAR_11->tx_thread);
  }
 } else if (!FUNC_35(VAR_9->comm, VAR_3)) {
  if (VAR_11->rx_thread &&
      FUNC_5(&VAR_11->rx_thread_active, 1, 0)) {
   FUNC_29(VAR_4, VAR_11->rx_thread, 1);
   FUNC_26(VAR_11->rx_thread);
  }
 }

 FUNC_31(&VAR_10->ts_bitmap_lock);
 FUNC_4(VAR_10->ts_bitmap, VAR_11->bitmap_id,
         FUNC_9(1));
 FUNC_33(&VAR_10->ts_bitmap_lock);

 FUNC_25(VAR_11);
 FUNC_22(VAR_11);
 FUNC_23(VAR_11);

 if (VAR_11->conn_transport->iscsit_wait_conn)
  VAR_11->conn_transport->iscsit_wait_conn(VAR_11);
 if (FUNC_2(&VAR_11->connection_recovery)) {
  FUNC_16(VAR_11);
  FUNC_19(VAR_11);
 } else {
  FUNC_12(VAR_11);
  FUNC_20(VAR_11);
 }
 FUNC_18(VAR_11);






 if (FUNC_2(&VAR_11->conn_logout_remove)) {
  if (VAR_11->conn_logout_reason == VAR_1) {
   FUNC_14(VAR_11);
   FUNC_15(VAR_13);
  }
  if (VAR_11->conn_logout_reason == VAR_0)
   FUNC_14(VAR_11);

  FUNC_3(&VAR_11->conn_logout_remove, 0);
  FUNC_3(&VAR_13->session_reinstatement, 0);
  FUNC_3(&VAR_13->session_fall_back_to_erl0, 1);
 }

 FUNC_32(&VAR_13->conn_lock);
 FUNC_27(&VAR_11->conn_list);






 if (FUNC_2(&VAR_11->connection_recovery))
  FUNC_10(VAR_11);

 FUNC_34(&VAR_13->conn_lock);






 FUNC_32(&VAR_11->state_lock);
 if (FUNC_2(&VAR_11->sleep_on_conn_wait_comp)) {
  FUNC_34(&VAR_11->state_lock);
  FUNC_6(&VAR_11->conn_wait_comp);
  FUNC_38(&VAR_11->conn_post_wait_comp);
  FUNC_32(&VAR_11->state_lock);
 }







 if (FUNC_2(&VAR_11->connection_wait_rcfr)) {
  FUNC_34(&VAR_11->state_lock);
  FUNC_6(&VAR_11->conn_wait_rcfr_comp);
  FUNC_38(&VAR_11->conn_post_wait_comp);
  FUNC_32(&VAR_11->state_lock);
 }
 FUNC_3(&VAR_11->connection_reinstatement, 1);
 FUNC_34(&VAR_11->state_lock);





 FUNC_11(VAR_11);

 FUNC_0(VAR_11->conn_tx_hash);
 if (VAR_11->conn_rx_hash) {
  struct crypto_ahash *VAR_14;

  VAR_14 = FUNC_7(VAR_11->conn_rx_hash);
  FUNC_0(VAR_11->conn_rx_hash);
  FUNC_8(VAR_14);
 }

 if (VAR_11->sock)
  FUNC_30(VAR_11->sock);

 if (VAR_11->conn_transport->iscsit_free_conn)
  VAR_11->conn_transport->iscsit_free_conn(VAR_11);

 FUNC_28("Moving to TARG_CONN_STATE_FREE.\n");
 VAR_11->conn_state = VAR_5;
 FUNC_17(VAR_11);

 FUNC_32(&VAR_13->conn_lock);
 FUNC_1(&VAR_13->nconn);
 FUNC_28("Decremented iSCSI connection count to %hu from node:"
  " %s\n", FUNC_2(&VAR_13->nconn),
  VAR_13->sess_ops->InitiatorName);




 if ((VAR_13->sess_ops->ErrorRecoveryLevel != 2) && !VAR_12 &&
      !FUNC_2(&VAR_13->session_logout))
  FUNC_3(&VAR_13->session_fall_back_to_erl0, 1);







 if (FUNC_2(&VAR_13->nconn)) {
  if (!FUNC_2(&VAR_13->session_reinstatement) &&
      !FUNC_2(&VAR_13->session_fall_back_to_erl0)) {
   FUNC_34(&VAR_13->conn_lock);
   return 0;
  }
  if (!FUNC_2(&VAR_13->session_stop_active)) {
   FUNC_3(&VAR_13->session_stop_active, 1);
   FUNC_34(&VAR_13->conn_lock);
   FUNC_24(VAR_13, 0, 0);
   return 0;
  }
  FUNC_34(&VAR_13->conn_lock);
  return 0;
 }
 if (!FUNC_2(&VAR_13->session_reinstatement) &&
      FUNC_2(&VAR_13->session_fall_back_to_erl0)) {
  FUNC_34(&VAR_13->conn_lock);
  FUNC_13(VAR_13);

  return 0;
 } else if (FUNC_2(&VAR_13->session_logout)) {
  FUNC_28("Moving to TARG_SESS_STATE_FREE.\n");
  VAR_13->session_state = VAR_8;
  FUNC_34(&VAR_13->conn_lock);

  if (FUNC_2(&VAR_13->sleep_on_sess_wait_comp))
   FUNC_6(&VAR_13->session_wait_comp);

  return 0;
 } else {
  FUNC_28("Moving to TARG_SESS_STATE_FAILED.\n");
  VAR_13->session_state = VAR_7;

  if (!FUNC_2(&VAR_13->session_continuation)) {
   FUNC_34(&VAR_13->conn_lock);
   FUNC_21(VAR_13);
  } else
   FUNC_34(&VAR_13->conn_lock);

  if (FUNC_2(&VAR_13->sleep_on_sess_wait_comp))
   FUNC_6(&VAR_13->session_wait_comp);

  return 0;
 }
}
