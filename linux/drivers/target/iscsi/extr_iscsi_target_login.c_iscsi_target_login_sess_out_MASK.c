
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct se_portal_group {int session_lock; } ;
struct iscsi_np {int dummy; } ;
struct iscsi_conn {TYPE_2__* conn_transport; int * sock; int * param_list; scalar_t__ conn_rx_hash; scalar_t__ conn_tx_hash; TYPE_3__* sess; TYPE_1__* tpg; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_8__ {scalar_t__ session_state; int conn_lock; int session_continuation; struct TYPE_8__* sess_ops; int session_index; int se_sess; } ;
struct TYPE_7__ {int (* iscsit_free_conn ) (struct iscsi_conn*) ;int (* iscsit_wait_conn ) (struct iscsi_conn*) ;} ;
struct TYPE_6__ {struct se_portal_group tpg_se_tpg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 struct crypto_ahash* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct iscsi_np*) ;
 int FUNC_7 (struct iscsi_conn*) ;
 int FUNC_8 (struct iscsi_conn*,int ,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct iscsi_conn*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (char*) ;
 int VAR_3 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct iscsi_conn*) ;
 int FUNC_18 (struct iscsi_conn*) ;
 int FUNC_19 (int ) ;

void FUNC_20(struct iscsi_conn *VAR_4,
  struct iscsi_np *VAR_5, bool VAR_6, bool VAR_7)
{
 if (!VAR_7)
  goto old_sess_out;

 FUNC_13("iSCSI Login negotiation failed.\n");
 FUNC_8(VAR_4, VAR_1,
       VAR_0);
 if (!VAR_6 || !VAR_4->sess)
  goto old_sess_out;

 FUNC_19(VAR_4->sess->se_sess);
 FUNC_4(&VAR_3, VAR_4->sess->session_index);
 FUNC_12(VAR_4->sess->sess_ops);
 FUNC_12(VAR_4->sess);
 VAR_4->sess = ((void*)0);

old_sess_out:
 FUNC_6(VAR_5);




 if (!VAR_6 && VAR_4->sess) {
  FUNC_15(&VAR_4->sess->conn_lock);
  if (VAR_4->sess->session_state == VAR_2) {
   struct se_portal_group *VAR_8 =
     &VAR_4->tpg->tpg_se_tpg;

   FUNC_1(&VAR_4->sess->session_continuation, 0);
   FUNC_16(&VAR_4->sess->conn_lock);
   FUNC_15(&VAR_8->session_lock);
   FUNC_11(VAR_4->sess);
   FUNC_16(&VAR_8->session_lock);
  } else
   FUNC_16(&VAR_4->sess->conn_lock);
  FUNC_9(VAR_4->sess);
 }

 FUNC_0(VAR_4->conn_tx_hash);
 if (VAR_4->conn_rx_hash) {
  struct crypto_ahash *VAR_9;

  VAR_9 = FUNC_2(VAR_4->conn_rx_hash);
  FUNC_0(VAR_4->conn_rx_hash);
  FUNC_3(VAR_9);
 }

 if (VAR_4->param_list) {
  FUNC_5(VAR_4->param_list);
  VAR_4->param_list = ((void*)0);
 }
 FUNC_7(VAR_4);

 if (VAR_4->sock) {
  FUNC_14(VAR_4->sock);
  VAR_4->sock = ((void*)0);
 }

 if (VAR_4->conn_transport->iscsit_wait_conn)
  VAR_4->conn_transport->iscsit_wait_conn(VAR_4);

 if (VAR_4->conn_transport->iscsit_free_conn)
  VAR_4->conn_transport->iscsit_free_conn(VAR_4);

 FUNC_10(VAR_4);
}
