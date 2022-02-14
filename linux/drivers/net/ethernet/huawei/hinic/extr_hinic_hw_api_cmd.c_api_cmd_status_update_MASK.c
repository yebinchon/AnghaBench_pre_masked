
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_api_cmd_status {int status; int header; } ;
struct hinic_api_cmd_chain {scalar_t__ cons_idx; struct hinic_api_cmd_status* wb_status; struct hinic_hwif* hwif; } ;
typedef enum hinic_api_cmd_chain_type { ____Placeholder_hinic_api_cmd_chain_type } hinic_api_cmd_chain_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static void FUNC_5(struct hinic_api_cmd_chain *VAR_4)
{
 enum hinic_api_cmd_chain_type VAR_5;
 struct hinic_api_cmd_status *VAR_6;
 struct hinic_hwif *VAR_7 = VAR_4->hwif;
 struct pci_dev *VAR_8 = VAR_7->pdev;
 u64 VAR_9;
 u32 VAR_10;

 VAR_6 = VAR_4->wb_status;
 VAR_9 = FUNC_3(VAR_6->header);

 VAR_10 = FUNC_2(VAR_6->status);
 if (FUNC_0(VAR_10, VAR_1)) {
  FUNC_4(&VAR_8->dev, "API CMD status: Xor check error\n");
  return;
 }

 VAR_5 = FUNC_1(VAR_9, VAR_0);
 if (VAR_5 >= VAR_3) {
  FUNC_4(&VAR_8->dev, "unknown API CMD Chain %d\n", VAR_5);
  return;
 }

 VAR_4->cons_idx = FUNC_0(VAR_10, VAR_2);
}
