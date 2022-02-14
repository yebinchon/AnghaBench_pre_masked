
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {scalar_t__ num_pending_tx; scalar_t__ max_num_pending_tx; int ar; int tx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ath10k_htt *VAR_2)
{
 FUNC_1(&VAR_2->tx_lock);

 if (VAR_2->num_pending_tx >= VAR_2->max_num_pending_tx)
  return -VAR_1;

 VAR_2->num_pending_tx++;
 if (VAR_2->num_pending_tx == VAR_2->max_num_pending_tx)
  FUNC_0(VAR_2->ar, VAR_0);

 return 0;
}
