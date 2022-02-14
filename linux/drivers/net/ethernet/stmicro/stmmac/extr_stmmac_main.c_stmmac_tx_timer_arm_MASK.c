
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_tx_queue {int txtimer; } ;
struct stmmac_priv {int tx_coal_timer; struct stmmac_tx_queue* tx_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0, u32 VAR_1)
{
 struct stmmac_tx_queue *VAR_2 = &VAR_0->tx_queue[VAR_1];

 FUNC_1(&VAR_2->txtimer, FUNC_0(VAR_0->tx_coal_timer));
}
