
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 VAR_1->dev_flags |= VAR_0;
 FUNC_0(VAR_1, "Disable Relaxed Ordering Attributes to avoid PCIe Completion erratum\n");
}
