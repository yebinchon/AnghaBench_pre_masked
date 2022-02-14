
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (int *,char*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_1, VAR_0, &VAR_2);
 FUNC_1(&VAR_1->dev, "PCI_CFG_HFS_2", VAR_0, VAR_2);

 return (VAR_2 & 0x600) == 0x200;
}
