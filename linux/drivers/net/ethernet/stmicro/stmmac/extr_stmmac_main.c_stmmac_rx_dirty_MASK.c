
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_rx_queue {scalar_t__ dirty_rx; scalar_t__ cur_rx; } ;
struct stmmac_priv {struct stmmac_rx_queue* rx_queue; } ;


 size_t VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct stmmac_priv *VAR_1, u32 VAR_2)
{
 struct stmmac_rx_queue *VAR_3 = &VAR_1->rx_queue[VAR_2];
 u32 VAR_4;

 if (VAR_3->dirty_rx <= VAR_3->cur_rx)
  VAR_4 = VAR_3->cur_rx - VAR_3->dirty_rx;
 else
  VAR_4 = VAR_0 - VAR_3->dirty_rx + VAR_3->cur_rx;

 return VAR_4;
}
