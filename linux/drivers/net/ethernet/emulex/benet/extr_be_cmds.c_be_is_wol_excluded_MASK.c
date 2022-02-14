
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; } ;
struct be_adapter {struct pci_dev* pdev; } ;






 scalar_t__ FUNC_0 (struct be_adapter*) ;

__attribute__((used)) static bool FUNC_1(struct be_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 if (FUNC_0(VAR_0))
  return 1;

 switch (VAR_1->subsystem_device) {
 case 131:
 case 130:
 case 129:
 case 128:
  return 1;
 default:
  return 0;
 }
}
