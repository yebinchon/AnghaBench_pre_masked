
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {size_t cell_size; int chain_type; struct hinic_api_cmd_cell_ctxt* cell_ctxt; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_cell_ctxt {scalar_t__ api_cmd_vaddr; int cell_paddr; struct hinic_api_cmd_cell* cell_vaddr; } ;
struct hinic_api_cmd_cell {int dummy; } ;
typedef int dma_addr_t ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,size_t,struct hinic_api_cmd_cell*,int ) ;
 int FUNC_2 (struct hinic_api_cmd_chain*,int) ;

__attribute__((used)) static void FUNC_3(struct hinic_api_cmd_chain *VAR_0,
     int VAR_1)
{
 struct hinic_api_cmd_cell_ctxt *VAR_2;
 struct hinic_hwif *VAR_3 = VAR_0->hwif;
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct hinic_api_cmd_cell *VAR_5;
 dma_addr_t VAR_6;
 size_t VAR_7;

 VAR_2 = &VAR_0->cell_ctxt[VAR_1];

 VAR_5 = VAR_2->cell_vaddr;
 VAR_6 = VAR_2->cell_paddr;
 VAR_7 = VAR_0->cell_size;

 if (VAR_2->api_cmd_vaddr) {
  switch (VAR_0->chain_type) {
  case 128:
   FUNC_2(VAR_0, VAR_1);
   break;
  default:
   FUNC_0(&VAR_4->dev, "Unsupported API CMD chain type\n");
   break;
  }

  FUNC_1(&VAR_4->dev, VAR_7, VAR_5,
      VAR_6);
 }
}
