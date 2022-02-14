
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_htt {int num_pending_mgmt_tx; TYPE_2__* ar; int tx_lock; } ;
struct TYPE_3__ {int max_probe_resp_desc_thres; } ;
struct TYPE_4__ {TYPE_1__ hw_params; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ath10k_htt *VAR_0)
{
 FUNC_0(&VAR_0->tx_lock);

 if (!VAR_0->ar->hw_params.max_probe_resp_desc_thres)
  return;

 VAR_0->num_pending_mgmt_tx--;
}
