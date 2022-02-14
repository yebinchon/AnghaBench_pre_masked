
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_rx_ring {int dma_size; TYPE_1__* dma; int phys; int * data; int buf_size; } ;
struct mtk_eth {int dev; } ;
struct TYPE_2__ {int rxd1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mtk_eth *VAR_1, struct mtk_rx_ring *VAR_2)
{
 int VAR_3;

 if (VAR_2->data && VAR_2->dma) {
  for (VAR_3 = 0; VAR_3 < VAR_2->dma_size; VAR_3++) {
   if (!VAR_2->data[VAR_3])
    continue;
   if (!VAR_2->dma[VAR_3].rxd1)
    continue;
   FUNC_1(VAR_1->dev,
      VAR_2->dma[VAR_3].rxd1,
      VAR_2->buf_size,
      VAR_0);
   FUNC_3(VAR_2->data[VAR_3]);
  }
  FUNC_2(VAR_2->data);
  VAR_2->data = ((void*)0);
 }

 if (VAR_2->dma) {
  FUNC_0(VAR_1->dev,
      VAR_2->dma_size * sizeof(*VAR_2->dma),
      VAR_2->dma,
      VAR_2->phys);
  VAR_2->dma = ((void*)0);
 }
}
