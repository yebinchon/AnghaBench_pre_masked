
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt {scalar_t__ num_pending_mgmt_tx; int tx_lock; struct ath10k* ar; } ;
struct TYPE_2__ {scalar_t__ max_probe_resp_desc_thres; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct ath10k_htt *VAR_1, bool VAR_2,
       bool VAR_3)
{
 struct ath10k *VAR_4 = VAR_1->ar;

 FUNC_0(&VAR_1->tx_lock);

 if (!VAR_2 || !VAR_4->hw_params.max_probe_resp_desc_thres)
  return 0;

 if (VAR_3 &&
     VAR_4->hw_params.max_probe_resp_desc_thres < VAR_1->num_pending_mgmt_tx)
  return -VAR_0;

 VAR_1->num_pending_mgmt_tx++;

 return 0;
}
