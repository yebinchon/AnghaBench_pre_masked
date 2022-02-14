
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct alcor_pci_priv {int pdev_cap_off; int parent_cap_off; int pdev_aspm_cap; int ext_config_dev_aspm; struct pci_dev* pdev; struct pci_dev* parent_pdev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct alcor_pci_priv *VAR_1, u8 VAR_2)
{
 struct pci_dev *VAR_3;
 u8 VAR_4, VAR_5;
 int VAR_6;
 u32 VAR_7;

 if ((!VAR_1->pdev_cap_off) || (!VAR_1->parent_cap_off)) {
  FUNC_0(VAR_1->dev, "pci_cap_off: %x, parent_cap_off: %x\n",
   VAR_1->pdev_cap_off, VAR_1->parent_cap_off);
  return;
 }

 if (!VAR_1->pdev_aspm_cap)
  return;

 VAR_4 = 0;
 if (VAR_2) {
  VAR_4 = VAR_1->ext_config_dev_aspm;

  if (!VAR_4) {
   FUNC_0(VAR_1->dev, "aspm_ctrl == 0\n");
   return;
  }
 }

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {

  if (VAR_5) {
   VAR_3 = VAR_1->parent_pdev;
   VAR_6 = VAR_1->parent_cap_off
    + VAR_0;
  } else {
   VAR_3 = VAR_1->pdev;
   VAR_6 = VAR_1->pdev_cap_off
    + VAR_0;
  }

  FUNC_1(VAR_3, VAR_6, &VAR_7);
  VAR_7 &= (~0x03);
  VAR_7 |= (VAR_4 & VAR_1->pdev_aspm_cap);
  FUNC_2(VAR_3, VAR_6, (u8)VAR_7);
 }

}
