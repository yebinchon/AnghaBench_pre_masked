
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; int bus; int devfn; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int,int ,int*) ;
 int FUNC_3 (int *,char*,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct pci_dev *VAR_1)
{
 u32 VAR_2;
 unsigned int VAR_3;





 VAR_3 = FUNC_0(FUNC_1(VAR_1->devfn), 0);
 FUNC_2(VAR_1->bus, VAR_3, VAR_0, &VAR_2);
 FUNC_3(&VAR_1->dev, "PCI_CFG_HFS_1", VAR_0, VAR_2);

 return (VAR_2 & 0xf0000) == 0xf0000;
}
