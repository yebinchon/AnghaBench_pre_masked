
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {int chain_type; struct hinic_hwif* hwif; } ;


 int VAR_0 ;

 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hinic_api_cmd_chain*) ;

__attribute__((used)) static int FUNC_2(struct hinic_api_cmd_chain *VAR_1)
{
 struct hinic_hwif *VAR_2 = VAR_1->hwif;
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4;

 switch (VAR_1->chain_type) {
 case 128:
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4) {
   FUNC_0(&VAR_3->dev, "API CMD Poll status timeout\n");
   break;
  }
  break;

 default:
  FUNC_0(&VAR_3->dev, "unknown API CMD Chain type\n");
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
