
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hw_wqe {int cmdq_wqe; } ;
struct hinic_cmdqs {struct hinic_hwif* hwif; struct hinic_cmdq* cmdq; } ;
struct hinic_cmdq_header {int saved_data; } ;
struct hinic_cmdq {int wq; } ;
typedef enum hinic_cmdq_type { ____Placeholder_hinic_cmdq_type } hinic_cmdq_type ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct hinic_cmdq_header* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct hinic_hw_wqe*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct hinic_cmdq*,int *) ;
 scalar_t__ FUNC_6 (struct hinic_cmdq*,int ,int *) ;
 int FUNC_7 (int *,char*) ;
 struct hinic_hw_wqe* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (struct hinic_cmdqs*,int ,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_5, u32 VAR_6)
{
 enum hinic_cmdq_type VAR_7 = FUNC_0(VAR_6, VAR_2);
 struct hinic_cmdqs *VAR_8 = (struct hinic_cmdqs *)VAR_5;
 struct hinic_cmdq *VAR_9 = &VAR_8->cmdq[VAR_7];
 struct hinic_cmdq_header *VAR_10;
 struct hinic_hw_wqe *VAR_11;
 int VAR_12, VAR_13 = 0;
 u32 VAR_14;
 u16 VAR_15;


 while ((VAR_11 = FUNC_8(VAR_9->wq, VAR_4, &VAR_15))) {
  if (FUNC_3(VAR_11))
   break;

  VAR_10 = FUNC_1(&VAR_11->cmdq_wqe);
  VAR_14 = FUNC_4(VAR_10->saved_data);

  if (FUNC_2(VAR_14, VAR_0)) {

   VAR_13 = 0;

   if (FUNC_5(VAR_9, &VAR_11->cmdq_wqe))
    break;
  } else {
   VAR_13 = 1;

   VAR_11 = FUNC_8(VAR_9->wq, VAR_3, &VAR_15);
   if (FUNC_3(VAR_11))
    break;

   if (FUNC_6(VAR_9, VAR_15, &VAR_11->cmdq_wqe))
    break;
  }
 }

 if (VAR_13) {
  struct hinic_hwif *VAR_16 = VAR_8->hwif;
  struct pci_dev *VAR_17 = VAR_16->pdev;

  VAR_12 = FUNC_9(VAR_8, VAR_1, VAR_7);
  if (VAR_12)
   FUNC_7(&VAR_17->dev, "Failed to set arm for CMDQ\n");
 }
}
