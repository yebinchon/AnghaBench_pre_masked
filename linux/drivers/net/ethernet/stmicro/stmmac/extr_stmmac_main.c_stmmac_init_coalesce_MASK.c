
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {int txtimer; } ;
struct stmmac_priv {struct stmmac_tx_queue* tx_queue; int rx_coal_frames; int tx_coal_timer; int tx_coal_frames; TYPE_1__* plat; } ;
struct TYPE_2__ {size_t tx_queues_to_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_4)
{
 u32 VAR_5 = VAR_4->plat->tx_queues_to_use;
 u32 VAR_6;

 VAR_4->tx_coal_frames = VAR_2;
 VAR_4->tx_coal_timer = VAR_0;
 VAR_4->rx_coal_frames = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  struct stmmac_tx_queue *VAR_7 = &VAR_4->tx_queue[VAR_6];

  FUNC_0(&VAR_7->txtimer, VAR_3, 0);
 }
}
