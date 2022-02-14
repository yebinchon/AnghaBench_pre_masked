
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_tx_ring {struct mtk_tx_buf* buf; struct mtk_tx_dma* dma; } ;
struct mtk_tx_dma {int dummy; } ;
struct mtk_tx_buf {int dummy; } ;



__attribute__((used)) static inline struct mtk_tx_buf *FUNC_0(struct mtk_tx_ring *VAR_0,
          struct mtk_tx_dma *VAR_1)
{
 int VAR_2 = VAR_1 - VAR_0->dma;

 return &VAR_0->buf[VAR_2];
}
