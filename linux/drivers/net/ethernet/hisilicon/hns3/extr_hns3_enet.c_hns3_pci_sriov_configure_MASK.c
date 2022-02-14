
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!(FUNC_3(VAR_2) && FUNC_0(VAR_0))) {
  FUNC_2(&VAR_2->dev, "Can not config SRIOV\n");
  return -VAR_1;
 }

 if (VAR_3) {
  VAR_4 = FUNC_5(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_1(&VAR_2->dev, "SRIOV enable failed %d\n", VAR_4);
  else
   return VAR_3;
 } else if (!FUNC_6(VAR_2)) {
  FUNC_4(VAR_2);
 } else {
  FUNC_2(&VAR_2->dev,
    "Unable to free VFs because some are assigned to VMs.\n");
 }

 return 0;
}
