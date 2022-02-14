
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ice_pf*) ;
 scalar_t__ FUNC_2 (struct ice_pf*) ;
 int FUNC_3 (struct ice_pf*,int) ;
 struct ice_pf* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

int FUNC_6(struct pci_dev *VAR_2, int VAR_3)
{
 struct ice_pf *VAR_4 = FUNC_4(VAR_2);

 if (FUNC_2(VAR_4)) {
  FUNC_0(&VAR_4->pdev->dev,
   "SR-IOV cannot be configured - Device is in Safe Mode\n");
  return -VAR_1;
 }

 if (VAR_3)
  return FUNC_3(VAR_4, VAR_3);

 if (!FUNC_5(VAR_2)) {
  FUNC_1(VAR_4);
 } else {
  FUNC_0(&VAR_4->pdev->dev,
   "can't free VFs because some are assigned to VMs.\n");
  return -VAR_0;
 }

 return 0;
}
