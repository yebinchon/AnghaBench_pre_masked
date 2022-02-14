
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {struct hinic_hwif* hwif; } ;


 int FUNC_0 (struct hinic_api_cmd_chain*) ;
 int FUNC_1 (struct hinic_api_cmd_chain*) ;
 int FUNC_2 (struct hinic_api_cmd_chain*) ;
 int FUNC_3 (struct hinic_api_cmd_chain*) ;
 int FUNC_4 (struct hinic_api_cmd_chain*) ;
 int FUNC_5 (struct hinic_api_cmd_chain*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct hinic_api_cmd_chain *VAR_0)
{
 struct hinic_hwif *VAR_1 = VAR_0->hwif;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;

 FUNC_0(VAR_0);

 FUNC_5(VAR_0);

 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3) {
  FUNC_6(&VAR_2->dev, "Failed to restart API CMD HW\n");
  return VAR_3;
 }

 FUNC_1(VAR_0);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
