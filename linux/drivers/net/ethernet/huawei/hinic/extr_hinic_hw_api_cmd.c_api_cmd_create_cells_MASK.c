
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {int num_cells; int head_node; int curr_node; int head_cell_paddr; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_cell {int next_cell_paddr; } ;


 int FUNC_0 (struct hinic_api_cmd_chain*,int,struct hinic_api_cmd_cell*,struct hinic_api_cmd_cell**) ;
 int FUNC_1 (struct hinic_api_cmd_chain*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct hinic_api_cmd_chain *VAR_0)
{
 struct hinic_api_cmd_cell *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
 struct hinic_hwif *VAR_3 = VAR_0->hwif;
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_cells; VAR_6++) {
  VAR_5 = FUNC_0(VAR_0, VAR_6, VAR_2, &VAR_1);
  if (VAR_5) {
   FUNC_3(&VAR_4->dev, "Failed to create API CMD cell\n");
   goto err_create_cell;
  }

  VAR_2 = VAR_1;
 }


 VAR_1->next_cell_paddr = FUNC_2(VAR_0->head_cell_paddr);


 VAR_0->curr_node = VAR_0->head_node;
 return 0;

err_create_cell:
 FUNC_1(VAR_0, VAR_6);
 return VAR_5;
}
