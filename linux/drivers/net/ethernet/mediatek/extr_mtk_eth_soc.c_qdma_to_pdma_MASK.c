
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_tx_ring {int dma_pdma; int dma; } ;
struct mtk_tx_dma {int dummy; } ;



__attribute__((used)) static struct mtk_tx_dma *FUNC_0(struct mtk_tx_ring *VAR_0,
           struct mtk_tx_dma *VAR_1)
{
 return VAR_0->dma_pdma - VAR_0->dma + VAR_1;
}
