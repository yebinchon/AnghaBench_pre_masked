
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_dev {int reset_type; int reset_pending; int hw; struct pci_dev* pdev; TYPE_1__* vport; } ;
struct TYPE_2__ {struct hnae3_handle nic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int const,int *) ;

__attribute__((used)) static void FUNC_8(struct hclge_dev *VAR_3)
{
 struct hnae3_handle *VAR_4 = &VAR_3->vport[0].nic;
 struct pci_dev *VAR_5 = VAR_3->pdev;
 u32 VAR_6;

 if (FUNC_2(VAR_4)) {
  FUNC_0(&VAR_5->dev, "Hardware reset not finish\n");
  FUNC_0(&VAR_5->dev, "func_rst_reg:0x%x, global_rst_reg:0x%x\n",
    FUNC_3(&VAR_3->hw, VAR_0),
    FUNC_3(&VAR_3->hw, VAR_2));
  return;
 }

 switch (VAR_3->reset_type) {
 case 128:
  VAR_6 = FUNC_3(&VAR_3->hw, VAR_2);
  FUNC_6(VAR_6, VAR_1, 1);
  FUNC_5(&VAR_3->hw, VAR_2, VAR_6);
  FUNC_0(&VAR_5->dev, "Global Reset requested\n");
  break;
 case 129:
  FUNC_0(&VAR_5->dev, "PF Reset requested\n");

  FUNC_7(129, &VAR_3->reset_pending);
  FUNC_4(VAR_3);
  break;
 case 130:
  FUNC_0(&VAR_5->dev, "FLR requested\n");

  FUNC_7(130, &VAR_3->reset_pending);
  FUNC_4(VAR_3);
  break;
 default:
  FUNC_1(&VAR_5->dev,
    "Unsupported reset type: %d\n", VAR_3->reset_type);
  break;
 }
}
