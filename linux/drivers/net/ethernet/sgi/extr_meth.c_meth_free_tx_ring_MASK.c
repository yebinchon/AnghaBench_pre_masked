
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meth_private {int tx_ring_dma; int tx_ring; TYPE_1__* pdev; int ** tx_skbs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct meth_private *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_2->tx_skbs[VAR_3]);
  VAR_2->tx_skbs[VAR_3] = ((void*)0);
 }
 FUNC_1(&VAR_2->pdev->dev, VAR_0, VAR_2->tx_ring,
                   VAR_2->tx_ring_dma);
}
