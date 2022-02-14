
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_ctrl_info {int ctrl_id; TYPE_1__* pci_dev; } ;
typedef enum pqi_soft_reset_status { ____Placeholder_pqi_soft_reset_status } pqi_soft_reset_status ;
struct TYPE_2__ {int dev; } ;







 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_6(struct pqi_ctrl_info *VAR_0,
  enum pqi_soft_reset_status VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 131:

 case 128:
  FUNC_0(&VAR_0->pci_dev->dev,
   "resetting controller %u\n", VAR_0->ctrl_id);
  FUNC_5(VAR_0);

 case 130:
  VAR_2 = FUNC_1(VAR_0);
  FUNC_3(VAR_0);
  FUNC_0(&VAR_0->pci_dev->dev,
   "Online Firmware Activation for controller %u: %s\n",
   VAR_0->ctrl_id, VAR_2 == 0 ? "SUCCESS" : "FAILED");
  break;
 case 132:
  FUNC_2(VAR_0);
  FUNC_0(&VAR_0->pci_dev->dev,
   "Online Firmware Activation for controller %u: %s\n",
   VAR_0->ctrl_id, "ABORTED");
  break;
 case 129:
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
  break;
 }
}
