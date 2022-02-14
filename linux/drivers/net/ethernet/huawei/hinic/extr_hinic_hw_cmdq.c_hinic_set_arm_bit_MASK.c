
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cmdqs {struct hinic_hwif* hwif; struct hinic_cmdq* cmdq; } ;
struct hinic_cmdq_arm_bit {int q_type; int q_id; } ;
struct hinic_cmdq {int dummy; } ;
typedef enum hinic_set_arm_qtype { ____Placeholder_hinic_set_arm_qtype } hinic_set_arm_qtype ;
typedef int arm_bit ;


 size_t VAR_0 ;
 int FUNC_0 (struct hinic_cmdq*,struct hinic_cmdq_arm_bit*,int) ;
 int FUNC_1 (int *,char*,int ) ;

int FUNC_2(struct hinic_cmdqs *VAR_1,
        enum hinic_set_arm_qtype VAR_2, u32 VAR_3)
{
 struct hinic_cmdq *VAR_4 = &VAR_1->cmdq[VAR_0];
 struct hinic_hwif *VAR_5 = VAR_1->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct hinic_cmdq_arm_bit VAR_7;
 int VAR_8;

 VAR_7.q_type = VAR_2;
 VAR_7.q_id = VAR_3;

 VAR_8 = FUNC_0(VAR_4, &VAR_7, sizeof(VAR_7));
 if (VAR_8) {
  FUNC_1(&VAR_6->dev, "Failed to set arm for qid %d\n", VAR_3);
  return VAR_8;
 }

 return 0;
}
