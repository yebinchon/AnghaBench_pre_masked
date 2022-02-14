
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_tx_ring {int * dma_pdma; int phys_pdma; int * dma; int phys; int * buf; } ;
struct mtk_eth {int dev; struct mtk_tx_ring tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mtk_eth*,int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_eth *VAR_1)
{
 struct mtk_tx_ring *VAR_2 = &VAR_1->tx_ring;
 int VAR_3;

 if (VAR_2->buf) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_2(VAR_1, &VAR_2->buf[VAR_3]);
  FUNC_1(VAR_2->buf);
  VAR_2->buf = ((void*)0);
 }

 if (VAR_2->dma) {
  FUNC_0(VAR_1->dev,
      VAR_0 * sizeof(*VAR_2->dma),
      VAR_2->dma,
      VAR_2->phys);
  VAR_2->dma = ((void*)0);
 }

 if (VAR_2->dma_pdma) {
  FUNC_0(VAR_1->dev,
      VAR_0 * sizeof(*VAR_2->dma_pdma),
      VAR_2->dma_pdma,
      VAR_2->phys_pdma);
  VAR_2->dma_pdma = ((void*)0);
 }
}
