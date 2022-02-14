
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b44 {int flags; int * tx_ring; int tx_ring_dma; TYPE_1__* sdev; int * rx_ring; int rx_ring_dma; int * tx_buffers; int * rx_buffers; } ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct b44 *VAR_5)
{
 FUNC_2(VAR_5->rx_buffers);
 VAR_5->rx_buffers = ((void*)0);
 FUNC_2(VAR_5->tx_buffers);
 VAR_5->tx_buffers = ((void*)0);
 if (VAR_5->rx_ring) {
  if (VAR_5->flags & VAR_0) {
   FUNC_1(VAR_5->sdev->dma_dev, VAR_5->rx_ring_dma,
      VAR_3, VAR_2);
   FUNC_2(VAR_5->rx_ring);
  } else
   FUNC_0(VAR_5->sdev->dma_dev, VAR_3,
       VAR_5->rx_ring, VAR_5->rx_ring_dma);
  VAR_5->rx_ring = ((void*)0);
  VAR_5->flags &= ~VAR_0;
 }
 if (VAR_5->tx_ring) {
  if (VAR_5->flags & VAR_1) {
   FUNC_1(VAR_5->sdev->dma_dev, VAR_5->tx_ring_dma,
      VAR_3, VAR_4);
   FUNC_2(VAR_5->tx_ring);
  } else
   FUNC_0(VAR_5->sdev->dma_dev, VAR_3,
       VAR_5->tx_ring, VAR_5->tx_ring_dma);
  VAR_5->tx_ring = ((void*)0);
  VAR_5->flags &= ~VAR_1;
 }
}
