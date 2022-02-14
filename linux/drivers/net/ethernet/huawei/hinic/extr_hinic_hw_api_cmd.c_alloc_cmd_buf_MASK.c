
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {int chain_type; struct hinic_api_cmd_cell_ctxt* cell_ctxt; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_cell_ctxt {int api_cmd_paddr; int * api_cmd_vaddr; } ;
struct TYPE_2__ {int hw_cmd_paddr; } ;
struct hinic_api_cmd_cell {TYPE_1__ write; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (struct hinic_api_cmd_chain*,int) ;

__attribute__((used)) static int FUNC_4(struct hinic_api_cmd_chain *VAR_4,
    struct hinic_api_cmd_cell *VAR_5, int VAR_6)
{
 struct hinic_api_cmd_cell_ctxt *VAR_7;
 struct hinic_hwif *VAR_8 = VAR_4->hwif;
 struct pci_dev *VAR_9 = VAR_8->pdev;
 dma_addr_t VAR_10;
 u8 *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_2(&VAR_9->dev, VAR_0,
           &VAR_10, VAR_3);
 if (!VAR_11) {
  FUNC_1(&VAR_9->dev, "Failed to allocate API CMD DMA memory\n");
  return -VAR_2;
 }

 VAR_7 = &VAR_4->cell_ctxt[VAR_6];

 VAR_7->api_cmd_vaddr = VAR_11;
 VAR_7->api_cmd_paddr = VAR_10;


 switch (VAR_4->chain_type) {
 case 128:

  VAR_5->write.hw_cmd_paddr = FUNC_0(VAR_10);
  break;

 default:
  FUNC_1(&VAR_9->dev, "Unsupported API CMD chain type\n");
  FUNC_3(VAR_4, VAR_6);
  VAR_12 = -VAR_1;
  break;
 }

 return VAR_12;
}
