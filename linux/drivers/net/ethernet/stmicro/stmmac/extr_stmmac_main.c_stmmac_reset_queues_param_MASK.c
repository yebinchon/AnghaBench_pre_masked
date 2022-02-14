
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {scalar_t__ mss; scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct stmmac_rx_queue {scalar_t__ dirty_rx; scalar_t__ cur_rx; } ;
struct stmmac_priv {struct stmmac_tx_queue* tx_queue; struct stmmac_rx_queue* rx_queue; TYPE_1__* plat; } ;
struct TYPE_2__ {size_t rx_queues_to_use; size_t tx_queues_to_use; } ;



__attribute__((used)) static void FUNC_0(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_2 = VAR_0->plat->tx_queues_to_use;
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct stmmac_rx_queue *VAR_4 = &VAR_0->rx_queue[VAR_3];

  VAR_4->cur_rx = 0;
  VAR_4->dirty_rx = 0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct stmmac_tx_queue *VAR_5 = &VAR_0->tx_queue[VAR_3];

  VAR_5->cur_tx = 0;
  VAR_5->dirty_tx = 0;
  VAR_5->mss = 0;
 }
}
