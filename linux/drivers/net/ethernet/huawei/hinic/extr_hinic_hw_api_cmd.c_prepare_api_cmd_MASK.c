
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {size_t prod_idx; int chain_type; struct hinic_api_cmd_cell_ctxt* cell_ctxt; struct hinic_hwif* hwif; struct hinic_api_cmd_cell* curr_node; } ;
struct hinic_api_cmd_cell_ctxt {int api_cmd_vaddr; } ;
struct hinic_api_cmd_cell {int desc; } ;
typedef enum hinic_node_id { ____Placeholder_hinic_node_id } hinic_node_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int*) ;

__attribute__((used)) static void FUNC_6(struct hinic_api_cmd_chain *VAR_9,
       enum hinic_node_id VAR_10,
       void *VAR_11, u16 VAR_12)
{
 struct hinic_api_cmd_cell *VAR_13 = VAR_9->curr_node;
 struct hinic_api_cmd_cell_ctxt *VAR_14;
 struct hinic_hwif *VAR_15 = VAR_9->hwif;
 struct pci_dev *VAR_16 = VAR_15->pdev;

 VAR_14 = &VAR_9->cell_ctxt[VAR_9->prod_idx];

 switch (VAR_9->chain_type) {
 case 128:
  VAR_13->desc = FUNC_0(VAR_6, VAR_1) |
        FUNC_0(VAR_0, VAR_5) |
        FUNC_0(VAR_4, VAR_3);
  break;

 default:
  FUNC_3(&VAR_16->dev, "unknown Chain type\n");
  return;
 }

 VAR_13->desc |= FUNC_0(VAR_10, VAR_2) |
        FUNC_0(FUNC_1(VAR_12), VAR_7);

 VAR_13->desc |= FUNC_0(FUNC_5(&VAR_13->desc),
          VAR_8);


 VAR_13->desc = FUNC_2(VAR_13->desc);

 FUNC_4(VAR_14->api_cmd_vaddr, VAR_11, VAR_12);
}
