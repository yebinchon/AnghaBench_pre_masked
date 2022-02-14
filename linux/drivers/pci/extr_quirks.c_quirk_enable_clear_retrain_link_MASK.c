
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int clear_retrain_link; } ;


 int FUNC_0 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 VAR_0->clear_retrain_link = 1;
 FUNC_0(VAR_0, "Enable PCIe Retrain Link quirk\n");
}
