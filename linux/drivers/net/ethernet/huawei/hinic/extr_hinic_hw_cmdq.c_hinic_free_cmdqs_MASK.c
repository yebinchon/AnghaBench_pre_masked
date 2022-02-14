
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_func_to_io {int ceqs; } ;
struct hinic_cmdqs {int cmdq_buf_pool; int saved_wqs; int cmdq_pages; int * cmdq; struct hinic_hwif* hwif; } ;
typedef enum hinic_cmdq_type { ____Placeholder_hinic_cmdq_type } hinic_cmdq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hinic_func_to_io* FUNC_0 (struct hinic_cmdqs*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;

void FUNC_6(struct hinic_cmdqs *VAR_3)
{
 struct hinic_func_to_io *VAR_4 = FUNC_0(VAR_3);
 struct hinic_hwif *VAR_5 = VAR_3->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 enum hinic_cmdq_type VAR_7;

 FUNC_4(&VAR_4->ceqs, VAR_0);

 VAR_7 = VAR_1;
 for (; VAR_7 < VAR_2; VAR_7++)
  FUNC_3(&VAR_3->cmdq[VAR_7]);

 FUNC_5(&VAR_3->cmdq_pages, VAR_3->saved_wqs,
       VAR_2);

 FUNC_1(&VAR_6->dev, VAR_3->saved_wqs);

 FUNC_2(VAR_3->cmdq_buf_pool);
}
