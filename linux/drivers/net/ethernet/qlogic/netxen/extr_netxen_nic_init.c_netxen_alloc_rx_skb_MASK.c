
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct pci_dev {int dummy; } ;
struct nx_host_rds_ring {int dma_size; int skb_size; } ;
struct netxen_rx_buffer {int state; int dma; struct sk_buff* skb; } ;
struct TYPE_2__ {int cut_through; } ;
struct netxen_adapter {TYPE_1__ ahw; int netdev; struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_5(struct netxen_adapter *VAR_2,
  struct nx_host_rds_ring *VAR_3,
  struct netxen_rx_buffer *VAR_4)
{
 struct sk_buff *VAR_5;
 dma_addr_t VAR_6;
 struct pci_dev *VAR_7 = VAR_2->pdev;

 VAR_4->skb = FUNC_1(VAR_2->netdev, VAR_3->skb_size);
 if (!VAR_4->skb)
  return 1;

 VAR_5 = VAR_4->skb;

 if (!VAR_2->ahw.cut_through)
  FUNC_4(VAR_5, 2);

 VAR_6 = FUNC_3(VAR_7, VAR_5->data,
   VAR_3->dma_size, VAR_1);

 if (FUNC_2(VAR_7, VAR_6)) {
  FUNC_0(VAR_5);
  VAR_4->skb = ((void*)0);
  return 1;
 }

 VAR_4->skb = VAR_5;
 VAR_4->dma = VAR_6;
 VAR_4->state = VAR_0;

 return 0;
}
