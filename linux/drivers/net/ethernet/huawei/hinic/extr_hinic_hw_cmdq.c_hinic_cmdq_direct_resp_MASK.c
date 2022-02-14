
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cmdqs {int * cmdq; struct hinic_hwif* hwif; } ;
struct hinic_cmdq_buf {int dummy; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct hinic_cmdq_buf*) ;
 int FUNC_1 (int *,int,int ,struct hinic_cmdq_buf*,int *) ;
 int FUNC_2 (int *,char*) ;

int FUNC_3(struct hinic_cmdqs *VAR_1,
      enum hinic_mod_type VAR_2, u8 VAR_3,
      struct hinic_cmdq_buf *VAR_4, u64 *VAR_5)
{
 struct hinic_hwif *VAR_6 = VAR_1->hwif;
 struct pci_dev *VAR_7 = VAR_6->pdev;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8) {
  FUNC_2(&VAR_7->dev, "Invalid CMDQ parameters\n");
  return VAR_8;
 }

 return FUNC_1(&VAR_1->cmdq[VAR_0],
      VAR_2, VAR_3, VAR_4, VAR_5);
}
