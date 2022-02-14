
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_rx_ring {int calc_idx_update; TYPE_1__* dma; int dma_size; int calc_idx; } ;
struct mtk_eth {struct mtk_rx_ring* rx_ring; int hwlro; } ;
struct TYPE_2__ {int rxd2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct mtk_rx_ring *FUNC_1(struct mtk_eth *VAR_2)
{
 int VAR_3;
 struct mtk_rx_ring *VAR_4;
 int VAR_5;

 if (!VAR_2->hwlro)
  return &VAR_2->rx_ring[0];

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = &VAR_2->rx_ring[VAR_3];
  VAR_5 = FUNC_0(VAR_4->calc_idx, VAR_4->dma_size);
  if (VAR_4->dma[VAR_5].rxd2 & VAR_1) {
   VAR_4->calc_idx_update = 1;
   return VAR_4;
  }
 }

 return ((void*)0);
}
