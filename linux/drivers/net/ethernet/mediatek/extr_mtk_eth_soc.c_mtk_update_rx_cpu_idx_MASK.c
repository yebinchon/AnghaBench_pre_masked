
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_rx_ring {int calc_idx_update; int crx_idx_reg; int calc_idx; } ;
struct mtk_eth {struct mtk_rx_ring* rx_ring; int hwlro; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_eth*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_eth *VAR_1)
{
 struct mtk_rx_ring *VAR_2;
 int VAR_3;

 if (!VAR_1->hwlro) {
  VAR_2 = &VAR_1->rx_ring[0];
  FUNC_0(VAR_1, VAR_2->calc_idx, VAR_2->crx_idx_reg);
 } else {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   VAR_2 = &VAR_1->rx_ring[VAR_3];
   if (VAR_2->calc_idx_update) {
    VAR_2->calc_idx_update = 0;
    FUNC_0(VAR_1, VAR_2->calc_idx, VAR_2->crx_idx_reg);
   }
  }
 }
}
