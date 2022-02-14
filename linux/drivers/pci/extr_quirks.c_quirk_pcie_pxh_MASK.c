
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int no_msi; } ;


 int FUNC_0 (struct pci_dev*,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{
 VAR_0->no_msi = 1;
 FUNC_0(VAR_0, "PXH quirk detected; SHPC device MSI disabled\n");
}
