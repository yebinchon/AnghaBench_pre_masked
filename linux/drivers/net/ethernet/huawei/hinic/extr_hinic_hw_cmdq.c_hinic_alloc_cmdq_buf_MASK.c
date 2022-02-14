
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cmdqs {int cmdq_buf_pool; struct hinic_hwif* hwif; } ;
struct hinic_cmdq_buf {int buf; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(struct hinic_cmdqs *VAR_2,
    struct hinic_cmdq_buf *VAR_3)
{
 struct hinic_hwif *VAR_4 = VAR_2->hwif;
 struct pci_dev *VAR_5 = VAR_4->pdev;

 VAR_3->buf = FUNC_1(VAR_2->cmdq_buf_pool, VAR_1,
           &VAR_3->dma_addr);
 if (!VAR_3->buf) {
  FUNC_0(&VAR_5->dev, "Failed to allocate cmd from the pool\n");
  return -VAR_0;
 }

 return 0;
}
