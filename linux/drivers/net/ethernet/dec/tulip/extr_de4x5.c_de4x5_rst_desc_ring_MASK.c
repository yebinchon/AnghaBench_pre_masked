
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_6__ {scalar_t__ save_cnt; } ;
struct de4x5_private {int rxRingSize; int txRingSize; TYPE_3__ cache; TYPE_2__* tx_ring; TYPE_1__* rx_ring; scalar_t__ tx_old; scalar_t__ tx_new; scalar_t__ rx_old; scalar_t__ rx_new; scalar_t__ dma_rings; } ;
struct de4x5_desc {int dummy; } ;
typedef int s32 ;
struct TYPE_5__ {void* status; } ;
struct TYPE_4__ {void* status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_6)
{
    struct de4x5_private *VAR_7 = FUNC_2(VAR_6);
    u_long VAR_8 = VAR_6->base_addr;
    int VAR_9;
    s32 VAR_10;

    if (VAR_7->cache.save_cnt) {
 VAR_5;
 FUNC_3(VAR_7->dma_rings, VAR_0);
 FUNC_3(VAR_7->dma_rings + VAR_2 * sizeof(struct de4x5_desc),
      VAR_1);

 VAR_7->rx_new = VAR_7->rx_old = 0;
 VAR_7->tx_new = VAR_7->tx_old = 0;

 for (VAR_9 = 0; VAR_9 < VAR_7->rxRingSize; VAR_9++) {
     VAR_7->rx_ring[VAR_9].status = FUNC_1(VAR_3);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->txRingSize; VAR_9++) {
     VAR_7->tx_ring[VAR_9].status = FUNC_1(0);
 }

 FUNC_0();
 VAR_7->cache.save_cnt--;
 VAR_4;
    }
}
