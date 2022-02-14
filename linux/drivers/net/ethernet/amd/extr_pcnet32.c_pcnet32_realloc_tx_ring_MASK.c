
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcnet32_tx_head {int dummy; } ;
struct pcnet32_private {int tx_ring_size; int tx_mod_mask; unsigned int tx_len_bits; int pci_dev; struct sk_buff** tx_skbuff; struct sk_buff** tx_dma_addr; struct sk_buff* tx_ring_dma_addr; struct pcnet32_tx_head* tx_ring; } ;
struct net_device {int dummy; } ;
typedef struct sk_buff* dma_addr_t ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 void* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct sk_buff**) ;
 int FUNC_3 (int ,int,struct pcnet32_tx_head*,struct sk_buff*) ;
 struct pcnet32_tx_head* FUNC_4 (int ,int,struct sk_buff**) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
        struct pcnet32_private *VAR_2,
        unsigned int VAR_3)
{
 dma_addr_t VAR_4;
 dma_addr_t *VAR_5;
 struct pcnet32_tx_head *VAR_6;
 struct sk_buff **VAR_7;
 unsigned int VAR_8 = FUNC_0(VAR_3);

 FUNC_5(VAR_1);

 VAR_6 =
  FUNC_4(VAR_2->pci_dev,
          sizeof(struct pcnet32_tx_head) * VAR_8,
          &VAR_4);
 if (VAR_6 == ((void*)0))
  return;

 VAR_5 = FUNC_1(VAR_8, sizeof(dma_addr_t), VAR_0);
 if (!VAR_5)
  goto free_new_tx_ring;

 VAR_7 = FUNC_1(VAR_8, sizeof(struct sk_buff *), VAR_0);
 if (!VAR_7)
  goto free_new_lists;

 FUNC_2(VAR_2->tx_skbuff);
 FUNC_2(VAR_2->tx_dma_addr);
 FUNC_3(VAR_2->pci_dev,
       sizeof(struct pcnet32_tx_head) * VAR_2->tx_ring_size,
       VAR_2->tx_ring, VAR_2->tx_ring_dma_addr);

 VAR_2->tx_ring_size = VAR_8;
 VAR_2->tx_mod_mask = VAR_2->tx_ring_size - 1;
 VAR_2->tx_len_bits = (VAR_3 << 12);
 VAR_2->tx_ring = VAR_6;
 VAR_2->tx_ring_dma_addr = VAR_4;
 VAR_2->tx_dma_addr = VAR_5;
 VAR_2->tx_skbuff = VAR_7;
 return;

free_new_lists:
 FUNC_2(VAR_5);
free_new_tx_ring:
 FUNC_3(VAR_2->pci_dev,
       sizeof(struct pcnet32_tx_head) * VAR_8,
       VAR_6,
       VAR_4);
}
