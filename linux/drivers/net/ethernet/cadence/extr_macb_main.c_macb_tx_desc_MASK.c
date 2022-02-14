
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb_queue {struct macb_dma_desc* tx_ring; int bp; } ;
struct macb_dma_desc {int dummy; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static struct macb_dma_desc *FUNC_2(struct macb_queue *VAR_0,
       unsigned int VAR_1)
{
 VAR_1 = FUNC_1(VAR_0->bp, VAR_1);
 VAR_1 = FUNC_0(VAR_0->bp, VAR_1);
 return &VAR_0->tx_ring[VAR_1];
}
