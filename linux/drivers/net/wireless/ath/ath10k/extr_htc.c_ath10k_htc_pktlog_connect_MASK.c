
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ep_tx_credits; int ep_rx_complete; int * ep_tx_complete; } ;
struct ath10k_htc_svc_conn_resp {int service_id; TYPE_1__ ep_ops; } ;
struct ath10k_htc_svc_conn_req {int service_id; TYPE_1__ ep_ops; } ;
struct ath10k {int htc; } ;
typedef int conn_resp ;
typedef int conn_req ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ath10k_htc_svc_conn_resp*,struct ath10k_htc_svc_conn_resp*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k_htc_svc_conn_resp*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2)
{
 struct ath10k_htc_svc_conn_resp VAR_3;
 struct ath10k_htc_svc_conn_req VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_4.ep_ops.ep_tx_complete = ((void*)0);
 VAR_4.ep_ops.ep_rx_complete = VAR_1;
 VAR_4.ep_ops.ep_tx_credits = ((void*)0);


 VAR_4.service_id = VAR_0;
 VAR_5 = FUNC_0(&VAR_2->htc, &VAR_4, &VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_2, "failed to connect to PKTLOG service: %d\n",
       VAR_5);
  return VAR_5;
 }

 return 0;
}
