
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rhine_skb_dma {int dma; int skb; } ;
struct rhine_private {TYPE_1__* rx_ring; int * rx_skbuff; int * rx_skbuff_dma; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct rhine_private *VAR_0,
        struct rhine_skb_dma *VAR_1, int VAR_2)
{
 VAR_0->rx_skbuff_dma[VAR_2] = VAR_1->dma;
 VAR_0->rx_skbuff[VAR_2] = VAR_1->skb;

 VAR_0->rx_ring[VAR_2].addr = FUNC_0(VAR_1->dma);
 FUNC_1();
}
