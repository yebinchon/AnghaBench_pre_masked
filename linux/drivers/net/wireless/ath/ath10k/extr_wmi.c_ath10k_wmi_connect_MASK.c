
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ep_tx_credits; int ep_rx_complete; int ep_tx_complete; } ;
struct ath10k_htc_svc_conn_resp {int eid; int service_id; TYPE_1__ ep_ops; } ;
struct ath10k_htc_svc_conn_req {int eid; int service_id; TYPE_1__ ep_ops; } ;
struct TYPE_4__ {int eid; struct ath10k_htc_svc_conn_resp svc_map; } ;
struct ath10k {TYPE_2__ wmi; int htc; } ;
typedef int conn_resp ;
typedef int conn_req ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ath10k_htc_svc_conn_resp*,struct ath10k_htc_svc_conn_resp*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ath10k_htc_svc_conn_resp*,int ,int) ;

int FUNC_3(struct ath10k *VAR_4)
{
 int VAR_5;
 struct ath10k_htc_svc_conn_req VAR_6;
 struct ath10k_htc_svc_conn_resp VAR_7;

 FUNC_2(&VAR_4->wmi.svc_map, 0, sizeof(VAR_4->wmi.svc_map));

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));


 VAR_6.ep_ops.ep_tx_complete = VAR_1;
 VAR_6.ep_ops.ep_rx_complete = VAR_3;
 VAR_6.ep_ops.ep_tx_credits = VAR_2;


 VAR_6.service_id = VAR_0;

 VAR_5 = FUNC_0(&VAR_4->htc, &VAR_6, &VAR_7);
 if (VAR_5) {
  FUNC_1(VAR_4, "failed to connect to WMI CONTROL service status: %d\n",
       VAR_5);
  return VAR_5;
 }

 VAR_4->wmi.eid = VAR_7.eid;
 return 0;
}
