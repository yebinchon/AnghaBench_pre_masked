
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcnet32_tx_head {int dummy; } ;
struct pcnet32_rx_head {int dummy; } ;
struct pcnet32_private {int tx_ring_size; int rx_ring_size; void* rx_skbuff; void* tx_skbuff; void* rx_dma_addr; void* tx_dma_addr; int * rx_ring; int rx_ring_dma_addr; int pci_dev; int * tx_ring; int tx_ring_dma_addr; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int,int ) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcnet32_private*,int ,struct net_device*,char*) ;
 void* FUNC_3 (int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, const char *VAR_4)
{
 struct pcnet32_private *VAR_5 = FUNC_1(VAR_3);

 VAR_5->tx_ring = FUNC_3(VAR_5->pci_dev,
        sizeof(struct pcnet32_tx_head) *
        VAR_5->tx_ring_size,
        &VAR_5->tx_ring_dma_addr);
 if (VAR_5->tx_ring == ((void*)0)) {
  FUNC_2(VAR_5, VAR_2, VAR_3, "Consistent memory allocation failed\n");
  return -VAR_0;
 }

 VAR_5->rx_ring = FUNC_3(VAR_5->pci_dev,
        sizeof(struct pcnet32_rx_head) *
        VAR_5->rx_ring_size,
        &VAR_5->rx_ring_dma_addr);
 if (VAR_5->rx_ring == ((void*)0)) {
  FUNC_2(VAR_5, VAR_2, VAR_3, "Consistent memory allocation failed\n");
  return -VAR_0;
 }

 VAR_5->tx_dma_addr = FUNC_0(VAR_5->tx_ring_size, sizeof(dma_addr_t),
      VAR_1);
 if (!VAR_5->tx_dma_addr)
  return -VAR_0;

 VAR_5->rx_dma_addr = FUNC_0(VAR_5->rx_ring_size, sizeof(dma_addr_t),
      VAR_1);
 if (!VAR_5->rx_dma_addr)
  return -VAR_0;

 VAR_5->tx_skbuff = FUNC_0(VAR_5->tx_ring_size, sizeof(struct sk_buff *),
    VAR_1);
 if (!VAR_5->tx_skbuff)
  return -VAR_0;

 VAR_5->rx_skbuff = FUNC_0(VAR_5->rx_ring_size, sizeof(struct sk_buff *),
    VAR_1);
 if (!VAR_5->rx_skbuff)
  return -VAR_0;

 return 0;
}
