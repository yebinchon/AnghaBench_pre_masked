
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_htt {int tx_mem_allocated; int pending_tx; int tx_lock; int max_num_pending_tx; struct ath10k* ar; } ;
struct TYPE_2__ {scalar_t__ dev_type; } ;
struct ath10k {TYPE_1__ bus_param; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 int VAR_4;

 FUNC_0(VAR_3, VAR_0, "htt tx max num pending tx %d\n",
     VAR_2->max_num_pending_tx);

 FUNC_4(&VAR_2->tx_lock);
 FUNC_3(&VAR_2->pending_tx);

 if (VAR_2->tx_mem_allocated)
  return 0;

 if (VAR_3->bus_param.dev_type == VAR_1)
  return 0;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto free_idr_pending_tx;

 VAR_2->tx_mem_allocated = 1;

 return 0;

free_idr_pending_tx:
 FUNC_2(&VAR_2->pending_tx);

 return VAR_4;
}
