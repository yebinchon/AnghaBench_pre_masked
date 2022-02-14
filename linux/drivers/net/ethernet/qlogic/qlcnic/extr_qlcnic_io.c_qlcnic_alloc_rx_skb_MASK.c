
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct qlcnic_rx_buffer {int dma; struct sk_buff* skb; } ;
struct qlcnic_host_rds_ring {int dma_size; int skb_size; } ;
struct TYPE_2__ {int rx_dma_map_error; int skb_alloc_failure; } ;
struct qlcnic_adapter {TYPE_1__ stats; int netdev; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_3,
          struct qlcnic_host_rds_ring *VAR_4,
          struct qlcnic_rx_buffer *VAR_5)
{
 struct sk_buff *VAR_6;
 dma_addr_t VAR_7;
 struct pci_dev *VAR_8 = VAR_3->pdev;

 VAR_6 = FUNC_1(VAR_3->netdev, VAR_4->skb_size);
 if (!VAR_6) {
  VAR_3->stats.skb_alloc_failure++;
  return -VAR_0;
 }

 FUNC_4(VAR_6, VAR_1);
 VAR_7 = FUNC_3(VAR_8, VAR_6->data,
        VAR_4->dma_size, VAR_2);

 if (FUNC_2(VAR_8, VAR_7)) {
  VAR_3->stats.rx_dma_map_error++;
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 VAR_5->skb = VAR_6;
 VAR_5->dma = VAR_7;

 return 0;
}
