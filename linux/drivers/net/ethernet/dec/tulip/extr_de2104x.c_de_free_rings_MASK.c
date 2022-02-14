
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct de_private {int * tx_ring; int * rx_ring; int ring_dma; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct de_private*) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2 (struct de_private *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_1->pdev, VAR_0, VAR_1->rx_ring, VAR_1->ring_dma);
 VAR_1->rx_ring = ((void*)0);
 VAR_1->tx_ring = ((void*)0);
}
