
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epf_driver {scalar_t__ id_table; } ;
struct pci_epf {int name; } ;
struct device_driver {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__,struct pci_epf*) ;
 int FUNC_1 (int ,int ) ;
 struct pci_epf* FUNC_2 (struct device*) ;
 struct pci_epf_driver* FUNC_3 (struct device_driver*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct pci_epf *VAR_2 = FUNC_2(VAR_0);
 struct pci_epf_driver *VAR_3 = FUNC_3(VAR_1);

 if (VAR_3->id_table)
  return FUNC_0(VAR_3->id_table, VAR_2);

 return !FUNC_1(VAR_2->name, VAR_1->name);
}
