
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct alcor_pci_priv {int pdev_cap_off; int parent_cap_off; int pdev_aspm_cap; int parent_aspm_cap; int ext_config_dev_aspm; int dev; struct pci_dev* parent_pdev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 void* FUNC_0 (struct alcor_pci_priv*,struct pci_dev*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct alcor_pci_priv *VAR_1)
{
 struct pci_dev *VAR_2;
 int VAR_3;
 u32 VAR_4;

 VAR_1->pdev_cap_off = FUNC_0(VAR_1, VAR_1->pdev);
 VAR_1->parent_cap_off = FUNC_0(VAR_1,
        VAR_1->parent_pdev);

 if ((VAR_1->pdev_cap_off == 0) || (VAR_1->parent_cap_off == 0)) {
  FUNC_1(VAR_1->dev, "pci_cap_off: %x, parent_cap_off: %x\n",
   VAR_1->pdev_cap_off, VAR_1->parent_cap_off);
  return;
 }


 VAR_2 = VAR_1->pdev;
 VAR_3 = VAR_1->pdev_cap_off + VAR_0;
 FUNC_2(VAR_2, VAR_3, &VAR_4);
 VAR_1->pdev_aspm_cap = (u8)(VAR_4 >> 10) & 0x03;

 VAR_2 = VAR_1->parent_pdev;
 VAR_3 = VAR_1->parent_cap_off + VAR_0;
 FUNC_2(VAR_2, VAR_3, &VAR_4);
 VAR_1->parent_aspm_cap = (u8)(VAR_4 >> 10) & 0x03;

 if (VAR_1->pdev_aspm_cap != VAR_1->parent_aspm_cap) {
  u8 VAR_5;

  FUNC_1(VAR_1->dev, "pdev_aspm_cap: %x, parent_aspm_cap: %x\n",
   VAR_1->pdev_aspm_cap, VAR_1->parent_aspm_cap);
  VAR_5 = VAR_1->pdev_aspm_cap & VAR_1->parent_aspm_cap;
  VAR_1->pdev_aspm_cap = VAR_5;
  VAR_1->parent_aspm_cap = VAR_5;
 }

 FUNC_1(VAR_1->dev, "ext_config_dev_aspm: %x, pdev_aspm_cap: %x\n",
  VAR_1->ext_config_dev_aspm, VAR_1->pdev_aspm_cap);
 VAR_1->ext_config_dev_aspm &= VAR_1->pdev_aspm_cap;
}
