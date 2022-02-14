
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ep_rx_complete; int ep_tx_complete; } ;
struct ath10k_htc_svc_conn_resp {int service_id; int max_send_queue_depth; TYPE_1__ ep_ops; } ;
struct ath10k_htc_svc_conn_req {int service_id; int max_send_queue_depth; TYPE_1__ ep_ops; } ;
struct ath10k_htc {int ctl_resp; struct ath10k* ar; int tx_lock; } ;
struct ath10k {struct ath10k_htc htc; } ;
typedef int conn_resp ;
typedef int conn_req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k_htc*,struct ath10k_htc_svc_conn_resp*,struct ath10k_htc_svc_conn_resp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath10k_htc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ath10k_htc_svc_conn_resp*,int ,int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ath10k *VAR_4)
{
 int VAR_5;
 struct ath10k_htc *VAR_6 = &VAR_4->htc;
 struct ath10k_htc_svc_conn_req VAR_7;
 struct ath10k_htc_svc_conn_resp VAR_8;

 FUNC_5(&VAR_6->tx_lock);

 FUNC_2(VAR_6);

 VAR_6->ar = VAR_4;


 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 VAR_7.ep_ops.ep_tx_complete = VAR_3;
 VAR_7.ep_ops.ep_rx_complete = VAR_2;
 VAR_7.max_send_queue_depth = VAR_1;
 VAR_7.service_id = VAR_0;


 VAR_5 = FUNC_1(VAR_6, &VAR_7, &VAR_8);
 if (VAR_5) {
  FUNC_0(VAR_4, "could not connect to htc service (%d)\n",
      VAR_5);
  return VAR_5;
 }

 FUNC_3(&VAR_6->ctl_resp);

 return 0;
}
