
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b44 {int flags; int rx_pending; int tx_ring_dma; TYPE_1__* sdev; int rx_ring_dma; int tx_ring; int rx_ring; } ;
struct TYPE_2__ {int dma_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct b44*,int,int) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct b44 *VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_7);

 FUNC_3(VAR_7->rx_ring, 0, VAR_2);
 FUNC_3(VAR_7->tx_ring, 0, VAR_3);

 if (VAR_7->flags & VAR_0)
  FUNC_2(VAR_7->sdev->dma_dev, VAR_7->rx_ring_dma,
        VAR_5, VAR_4);

 if (VAR_7->flags & VAR_1)
  FUNC_2(VAR_7->sdev->dma_dev, VAR_7->tx_ring_dma,
        VAR_5, VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_7->rx_pending; VAR_8++) {
  if (FUNC_0(VAR_7, -1, VAR_8) < 0)
   break;
 }
}
