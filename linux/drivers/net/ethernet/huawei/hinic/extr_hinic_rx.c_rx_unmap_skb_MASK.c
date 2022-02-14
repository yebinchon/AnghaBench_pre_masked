
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hinic_rxq {TYPE_1__* rq; int netdev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int buf_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 struct hinic_dev* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hinic_rxq *VAR_1, dma_addr_t VAR_2)
{
 struct hinic_dev *VAR_3 = FUNC_1(VAR_1->netdev);
 struct hinic_hwdev *VAR_4 = VAR_3->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;

 FUNC_0(&VAR_6->dev, VAR_2, VAR_1->rq->buf_sz,
    VAR_0);
}
