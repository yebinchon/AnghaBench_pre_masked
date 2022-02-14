
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain_attr {int chain_type; int cell_size; int num_cells; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_chain {int dummy; } ;
struct hinic_api_cmd_cell {int dummy; } ;
typedef enum hinic_api_cmd_chain_type { ____Placeholder_hinic_api_cmd_chain_type } hinic_api_cmd_chain_type ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct hinic_api_cmd_chain*) ;
 int FUNC_2 (struct hinic_api_cmd_chain*) ;
 struct hinic_api_cmd_chain* FUNC_3 (struct hinic_api_cmd_chain_attr*) ;
 int FUNC_4 (struct hinic_api_cmd_chain*) ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6(struct hinic_api_cmd_chain **VAR_3,
         struct hinic_hwif *VAR_4)
{
 enum hinic_api_cmd_chain_type VAR_5, VAR_6;
 struct hinic_api_cmd_chain_attr VAR_7;
 struct pci_dev *VAR_8 = VAR_4->pdev;
 size_t VAR_9;
 int VAR_10;

 VAR_9 = sizeof(struct hinic_api_cmd_cell);

 VAR_7.hwif = VAR_4;
 VAR_7.num_cells = VAR_0;
 VAR_7.cell_size = FUNC_0(VAR_9);

 VAR_6 = VAR_2;
 for ( ; VAR_6 < VAR_1; VAR_6++) {
  VAR_7.chain_type = VAR_6;

  if (VAR_6 != VAR_2)
   continue;

  VAR_3[VAR_6] = FUNC_3(&VAR_7);
  if (FUNC_1(VAR_3[VAR_6])) {
   FUNC_5(&VAR_8->dev, "Failed to create chain %d\n",
    VAR_6);
   VAR_10 = FUNC_2(VAR_3[VAR_6]);
   goto err_create_chain;
  }
 }

 return 0;

err_create_chain:
 VAR_5 = VAR_2;
 for ( ; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_5 != VAR_2)
   continue;

  FUNC_4(VAR_3[VAR_5]);
 }

 return VAR_10;
}
