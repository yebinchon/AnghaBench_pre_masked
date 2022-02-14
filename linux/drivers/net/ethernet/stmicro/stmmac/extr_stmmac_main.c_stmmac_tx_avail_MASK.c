
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_tx_queue {scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;
struct stmmac_priv {struct stmmac_tx_queue* tx_queue; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct stmmac_priv *VAR_1, u32 VAR_2)
{
 struct stmmac_tx_queue *VAR_3 = &VAR_1->tx_queue[VAR_2];
 u32 VAR_4;

 if (VAR_3->dirty_tx > VAR_3->cur_tx)
  VAR_4 = VAR_3->dirty_tx - VAR_3->cur_tx - 1;
 else
  VAR_4 = VAR_0 - VAR_3->cur_tx + VAR_3->dirty_tx - 1;

 return VAR_4;
}
