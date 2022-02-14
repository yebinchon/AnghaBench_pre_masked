
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct stmmac_priv {TYPE_1__* plat; int hw; int tx_path_in_lpi_mode; struct stmmac_tx_queue* tx_queue; } ;
struct TYPE_2__ {size_t tx_queues_to_use; int en_tx_lpi_clockgating; } ;


 int FUNC_0 (struct stmmac_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct stmmac_priv *VAR_0)
{
 u32 VAR_1 = VAR_0->plat->tx_queues_to_use;
 u32 VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct stmmac_tx_queue *VAR_3 = &VAR_0->tx_queue[VAR_2];

  if (VAR_3->dirty_tx != VAR_3->cur_tx)
   return;
 }


 if (!VAR_0->tx_path_in_lpi_mode)
  FUNC_0(VAR_0, VAR_0->hw,
    VAR_0->plat->en_tx_lpi_clockgating);
}
