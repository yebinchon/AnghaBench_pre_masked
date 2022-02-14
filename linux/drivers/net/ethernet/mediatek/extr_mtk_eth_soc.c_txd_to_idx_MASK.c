
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_tx_ring {scalar_t__ dma; } ;
struct mtk_tx_dma {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct mtk_tx_ring *VAR_0, struct mtk_tx_dma *VAR_1)
{
 return ((void *)VAR_1 - (void *)VAR_0->dma) / sizeof(*VAR_1);
}
