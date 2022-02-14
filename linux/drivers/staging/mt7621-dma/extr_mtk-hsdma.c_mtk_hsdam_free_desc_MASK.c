
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_hsdma_chan {int * rx_ring; int * tx_ring; int desc_addr; } ;
struct TYPE_2__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_hsdam_engine *VAR_1,
    struct mtk_hsdma_chan *VAR_2)
{
 if (VAR_2->tx_ring) {
  FUNC_0(VAR_1->ddev.dev,
    2 * VAR_0 * sizeof(*VAR_2->tx_ring),
    VAR_2->tx_ring, VAR_2->desc_addr);
  VAR_2->tx_ring = ((void*)0);
  VAR_2->rx_ring = ((void*)0);
 }
}
