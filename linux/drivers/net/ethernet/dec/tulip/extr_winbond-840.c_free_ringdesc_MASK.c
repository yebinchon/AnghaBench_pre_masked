
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w840_tx_desc {int dummy; } ;
struct w840_rx_desc {int dummy; } ;
struct netdev_private {int ring_dma_addr; int rx_ring; int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct netdev_private *VAR_2)
{
 FUNC_0(VAR_2->pci_dev,
   sizeof(struct w840_rx_desc)*VAR_0 +
   sizeof(struct w840_tx_desc)*VAR_1,
   VAR_2->rx_ring, VAR_2->ring_dma_addr);

}
