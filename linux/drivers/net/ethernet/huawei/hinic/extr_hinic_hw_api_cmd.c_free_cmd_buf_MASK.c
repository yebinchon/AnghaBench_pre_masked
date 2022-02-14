
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {struct hinic_api_cmd_cell_ctxt* cell_ctxt; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_cell_ctxt {int api_cmd_paddr; int api_cmd_vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hinic_api_cmd_chain *VAR_1, int VAR_2)
{
 struct hinic_api_cmd_cell_ctxt *VAR_3;
 struct hinic_hwif *VAR_4 = VAR_1->hwif;
 struct pci_dev *VAR_5 = VAR_4->pdev;

 VAR_3 = &VAR_1->cell_ctxt[VAR_2];

 FUNC_0(&VAR_5->dev, VAR_0,
     VAR_3->api_cmd_vaddr,
     VAR_3->api_cmd_paddr);
}
