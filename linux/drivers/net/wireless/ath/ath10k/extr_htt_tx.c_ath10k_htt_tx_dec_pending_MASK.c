
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {int num_pending_tx; int max_num_pending_tx; int ar; int tx_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ath10k_htt *VAR_1)
{
 FUNC_1(&VAR_1->tx_lock);

 VAR_1->num_pending_tx--;
 if (VAR_1->num_pending_tx == VAR_1->max_num_pending_tx - 1)
  FUNC_0(VAR_1->ar, VAR_0);
}
