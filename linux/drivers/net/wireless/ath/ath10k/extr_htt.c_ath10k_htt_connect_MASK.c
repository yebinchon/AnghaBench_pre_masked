
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_htt {int eid; TYPE_1__* ar; } ;
struct TYPE_4__ {int ep_rx_complete; int ep_tx_complete; } ;
struct ath10k_htc_svc_conn_resp {int eid; int service_id; TYPE_2__ ep_ops; } ;
struct ath10k_htc_svc_conn_req {int eid; int service_id; TYPE_2__ ep_ops; } ;
typedef int conn_resp ;
typedef int conn_req ;
struct TYPE_3__ {int htc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ath10k_htc_svc_conn_resp*,struct ath10k_htc_svc_conn_resp*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath10k_htc_svc_conn_resp*,int ,int) ;

int FUNC_2(struct ath10k_htt *VAR_3)
{
 struct ath10k_htc_svc_conn_req VAR_4;
 struct ath10k_htc_svc_conn_resp VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 VAR_4.ep_ops.ep_tx_complete = VAR_2;
 VAR_4.ep_ops.ep_rx_complete = VAR_1;


 VAR_4.service_id = VAR_0;

 VAR_6 = FUNC_0(&VAR_3->ar->htc, &VAR_4,
         &VAR_5);

 if (VAR_6)
  return VAR_6;

 VAR_3->eid = VAR_5.eid;

 return 0;
}
