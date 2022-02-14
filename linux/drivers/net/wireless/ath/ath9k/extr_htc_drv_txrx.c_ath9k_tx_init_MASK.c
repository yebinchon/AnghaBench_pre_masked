
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_failed; int data_vo_queue; int data_vi_queue; int data_bk_queue; int data_be_queue; int cab_ep_queue; int mgmt_ep_queue; } ;
struct ath9k_htc_priv {TYPE_1__ tx; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct ath9k_htc_priv *VAR_0)
{
 FUNC_0(&VAR_0->tx.mgmt_ep_queue);
 FUNC_0(&VAR_0->tx.cab_ep_queue);
 FUNC_0(&VAR_0->tx.data_be_queue);
 FUNC_0(&VAR_0->tx.data_bk_queue);
 FUNC_0(&VAR_0->tx.data_vi_queue);
 FUNC_0(&VAR_0->tx.data_vo_queue);
 FUNC_0(&VAR_0->tx.tx_failed);
 return 0;
}
