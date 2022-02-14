
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans_rxq_dma_data {scalar_t__ fr_bd_wid; int ur_bd_cb; int urbd_stts_wrptr; int fr_bd_cb; } ;
struct iwl_trans_pcie {TYPE_1__* rxq; } ;
struct iwl_trans {int num_rx_queues; } ;
struct TYPE_2__ {int used_bd_dma; int rb_stts_dma; int bd_dma; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;

__attribute__((used)) static int FUNC_1(struct iwl_trans *VAR_1, int VAR_2,
           struct iwl_trans_rxq_dma_data *VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->num_rx_queues || !VAR_4->rxq)
  return -VAR_0;

 VAR_3->fr_bd_cb = VAR_4->rxq[VAR_2].bd_dma;
 VAR_3->urbd_stts_wrptr = VAR_4->rxq[VAR_2].rb_stts_dma;
 VAR_3->ur_bd_cb = VAR_4->rxq[VAR_2].used_bd_dma;
 VAR_3->fr_bd_wid = 0;

 return 0;
}
