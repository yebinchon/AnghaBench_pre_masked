
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain_attr {int num_cells; struct hinic_hwif* hwif; } ;
struct hinic_api_cmd_chain {int num_cells; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hinic_api_cmd_chain* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct hinic_api_cmd_chain*) ;
 int FUNC_2 (struct hinic_api_cmd_chain*,struct hinic_api_cmd_chain_attr*) ;
 int FUNC_3 (struct hinic_api_cmd_chain*) ;
 int FUNC_4 (struct hinic_api_cmd_chain*) ;
 int FUNC_5 (struct hinic_api_cmd_chain*,int ) ;
 int FUNC_6 (int *,char*) ;
 struct hinic_api_cmd_chain* FUNC_7 (int *,int,int ) ;

__attribute__((used)) static struct hinic_api_cmd_chain *
 FUNC_8(struct hinic_api_cmd_chain_attr *VAR_3)
{
 struct hinic_hwif *VAR_4 = VAR_3->hwif;
 struct pci_dev *VAR_5 = VAR_4->pdev;
 struct hinic_api_cmd_chain *VAR_6;
 int VAR_7;

 if (VAR_3->num_cells & (VAR_3->num_cells - 1)) {
  FUNC_6(&VAR_5->dev, "Invalid number of cells, must be power of 2\n");
  return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_7(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 if (VAR_7) {
  FUNC_6(&VAR_5->dev, "Failed to initialize chain\n");
  return FUNC_0(VAR_7);
 }

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7) {
  FUNC_6(&VAR_5->dev, "Failed to create cells for API CMD chain\n");
  goto err_create_cells;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7) {
  FUNC_6(&VAR_5->dev, "Failed to initialize chain HW\n");
  goto err_chain_hw_init;
 }

 return VAR_6;

err_chain_hw_init:
 FUNC_5(VAR_6, VAR_6->num_cells);

err_create_cells:
 FUNC_1(VAR_6);
 return FUNC_0(VAR_7);
}
