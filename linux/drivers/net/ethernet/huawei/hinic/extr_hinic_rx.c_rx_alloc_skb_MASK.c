
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct pci_dev {int dev; } ;
struct hinic_rxq {TYPE_1__* rq; int netdev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int buf_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 struct hinic_dev* FUNC_6 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct hinic_rxq *VAR_1,
        dma_addr_t *VAR_2)
{
 struct hinic_dev *VAR_3 = FUNC_6(VAR_1->netdev);
 struct hinic_hwdev *VAR_4 = VAR_3->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct sk_buff *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_1->netdev, VAR_1->rq->buf_sz);
 if (!VAR_7) {
  FUNC_5(VAR_1->netdev, "Failed to allocate Rx SKB\n");
  return ((void*)0);
 }

 VAR_8 = FUNC_2(&VAR_6->dev, VAR_7->data, VAR_1->rq->buf_sz,
         VAR_0);
 VAR_9 = FUNC_3(&VAR_6->dev, VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "Failed to map Rx DMA, err = %d\n", VAR_9);
  goto err_rx_map;
 }

 *VAR_2 = VAR_8;
 return VAR_7;

err_rx_map:
 FUNC_1(VAR_7);
 return ((void*)0);
}
