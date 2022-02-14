
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {scalar_t__ pcie_mpss; scalar_t__ is_hotplug_bridge; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1, void *VAR_2)
{
 u8 *VAR_3 = VAR_2;

 if (!FUNC_0(VAR_1))
  return 0;
 if (VAR_1->is_hotplug_bridge &&
     FUNC_1(VAR_1) != VAR_0)
  *VAR_3 = 0;

 if (*VAR_3 > VAR_1->pcie_mpss)
  *VAR_3 = VAR_1->pcie_mpss;

 return 0;
}
