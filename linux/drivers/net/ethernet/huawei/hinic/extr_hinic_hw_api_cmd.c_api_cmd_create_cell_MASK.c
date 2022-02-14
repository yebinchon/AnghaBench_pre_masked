
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {int chain_type; int cell_size; struct hinic_api_cmd_cell* head_node; void* head_cell_paddr; struct hinic_api_cmd_cell_ctxt* cell_ctxt; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_cell_ctxt {void* cell_paddr; struct hinic_api_cmd_cell* cell_vaddr; } ;
struct TYPE_2__ {scalar_t__ hw_wb_resp_paddr; } ;
struct hinic_api_cmd_cell {int next_cell_paddr; TYPE_1__ read; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct hinic_api_cmd_chain*,struct hinic_api_cmd_cell*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*) ;
 struct hinic_api_cmd_cell* FUNC_3 (int *,int ,void**,int ) ;
 int FUNC_4 (int *,int ,struct hinic_api_cmd_cell*,void*) ;

__attribute__((used)) static int FUNC_5(struct hinic_api_cmd_chain *VAR_3,
          int VAR_4,
          struct hinic_api_cmd_cell *VAR_5,
          struct hinic_api_cmd_cell **VAR_6)
{
 struct hinic_api_cmd_cell_ctxt *VAR_7;
 struct hinic_hwif *VAR_8 = VAR_3->hwif;
 struct pci_dev *VAR_9 = VAR_8->pdev;
 struct hinic_api_cmd_cell *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(&VAR_9->dev, VAR_3->cell_size, &VAR_11,
      VAR_2);
 if (!VAR_10) {
  FUNC_2(&VAR_9->dev, "Failed to allocate dma API CMD cell\n");
  return -VAR_1;
 }

 VAR_10->read.hw_wb_resp_paddr = 0;

 VAR_7 = &VAR_3->cell_ctxt[VAR_4];
 VAR_7->cell_vaddr = VAR_10;
 VAR_7->cell_paddr = VAR_11;

 if (!VAR_5) {
  VAR_3->head_cell_paddr = VAR_11;
  VAR_3->head_node = VAR_10;
 } else {

  VAR_5->next_cell_paddr = FUNC_1(VAR_11);
 }

 switch (VAR_3->chain_type) {
 case 128:
  VAR_12 = FUNC_0(VAR_3, VAR_10, VAR_4);
  if (VAR_12) {
   FUNC_2(&VAR_9->dev, "Failed to allocate cmd buffer\n");
   goto err_alloc_cmd_buf;
  }
  break;

 default:
  FUNC_2(&VAR_9->dev, "Unsupported API CMD chain type\n");
  VAR_12 = -VAR_0;
  goto err_alloc_cmd_buf;
 }

 *VAR_6 = VAR_10;
 return 0;

err_alloc_cmd_buf:
 FUNC_4(&VAR_9->dev, VAR_3->cell_size, VAR_10, VAR_11);
 return VAR_12;
}
