
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_chain {int chain_type; int cons_idx; int prod_idx; struct hinic_hwif* hwif; } ;


 int VAR_0 ;

 int FUNC_0 (struct hinic_api_cmd_chain*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct hinic_api_cmd_chain*) ;

__attribute__((used)) static int FUNC_3(struct hinic_api_cmd_chain *VAR_1)
{
 struct hinic_hwif *VAR_2 = VAR_1->hwif;
 struct pci_dev *VAR_3 = VAR_2->pdev;
 u32 VAR_4;

 switch (VAR_1->chain_type) {
 case 128:
  VAR_1->cons_idx = FUNC_2(VAR_1);
  VAR_4 = VAR_1->prod_idx;


  if (VAR_1->cons_idx == FUNC_0(VAR_1, VAR_4 + 1)) {
   FUNC_1(&VAR_3->dev, "API CMD chain %d is busy\n",
    VAR_1->chain_type);
   return -VAR_0;
  }
  break;

 default:
  FUNC_1(&VAR_3->dev, "Unknown API CMD Chain type\n");
  break;
 }

 return 0;
}
