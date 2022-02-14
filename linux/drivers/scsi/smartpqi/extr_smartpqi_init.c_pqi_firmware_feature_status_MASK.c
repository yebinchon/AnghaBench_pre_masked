
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_firmware_feature {int feature_name; scalar_t__ enabled; int supported; } ;
struct pqi_ctrl_info {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_0,
 struct pqi_firmware_feature *VAR_1)
{
 if (!VAR_1->supported) {
  FUNC_1(&VAR_0->pci_dev->dev, "%s not supported by controller\n",
   VAR_1->feature_name);
  return;
 }

 if (VAR_1->enabled) {
  FUNC_1(&VAR_0->pci_dev->dev,
   "%s enabled\n", VAR_1->feature_name);
  return;
 }

 FUNC_0(&VAR_0->pci_dev->dev, "failed to enable %s\n",
  VAR_1->feature_name);
}
