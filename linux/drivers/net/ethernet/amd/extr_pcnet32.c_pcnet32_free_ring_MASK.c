
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_tx_head {int dummy; } ;
struct pcnet32_rx_head {int dummy; } ;
struct pcnet32_private {int tx_ring_size; int rx_ring_size; int * rx_ring; int rx_ring_dma_addr; int pci_dev; int * tx_ring; int tx_ring_dma_addr; int * rx_dma_addr; int * tx_dma_addr; int * rx_skbuff; int * tx_skbuff; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct pcnet32_private *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tx_skbuff);
 VAR_1->tx_skbuff = ((void*)0);

 FUNC_0(VAR_1->rx_skbuff);
 VAR_1->rx_skbuff = ((void*)0);

 FUNC_0(VAR_1->tx_dma_addr);
 VAR_1->tx_dma_addr = ((void*)0);

 FUNC_0(VAR_1->rx_dma_addr);
 VAR_1->rx_dma_addr = ((void*)0);

 if (VAR_1->tx_ring) {
  FUNC_2(VAR_1->pci_dev,
        sizeof(struct pcnet32_tx_head) *
        VAR_1->tx_ring_size, VAR_1->tx_ring,
        VAR_1->tx_ring_dma_addr);
  VAR_1->tx_ring = ((void*)0);
 }

 if (VAR_1->rx_ring) {
  FUNC_2(VAR_1->pci_dev,
        sizeof(struct pcnet32_rx_head) *
        VAR_1->rx_ring_size, VAR_1->rx_ring,
        VAR_1->rx_ring_dma_addr);
  VAR_1->rx_ring = ((void*)0);
 }
}
