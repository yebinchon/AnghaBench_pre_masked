
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_tx_dma {int dummy; } ;
struct mtk_eth {int scratch_head; int * rx_ring; scalar_t__ hwlro; int rx_ring_qdma; scalar_t__ phy_scratch_ring; int * scratch_ring; int dev; scalar_t__* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_eth*) ;
 int FUNC_3 (struct mtk_eth*,int *) ;
 int FUNC_4 (struct mtk_eth*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct mtk_eth *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->netdev[VAR_4])
   FUNC_5(VAR_3->netdev[VAR_4]);
 if (VAR_3->scratch_ring) {
  FUNC_0(VAR_3->dev,
      VAR_0 * sizeof(struct mtk_tx_dma),
      VAR_3->scratch_ring,
      VAR_3->phy_scratch_ring);
  VAR_3->scratch_ring = ((void*)0);
  VAR_3->phy_scratch_ring = 0;
 }
 FUNC_4(VAR_3);
 FUNC_3(VAR_3, &VAR_3->rx_ring[0]);
 FUNC_3(VAR_3, &VAR_3->rx_ring_qdma);

 if (VAR_3->hwlro) {
  FUNC_2(VAR_3);
  for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++)
   FUNC_3(VAR_3, &VAR_3->rx_ring[VAR_4]);
 }

 FUNC_1(VAR_3->scratch_head);
}
