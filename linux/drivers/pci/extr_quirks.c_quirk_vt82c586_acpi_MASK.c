
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int,int,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_1->revision & 0x10)
  FUNC_0(VAR_1, 0x48, 256, VAR_0,
    "vt82c586 ACPI");
}
