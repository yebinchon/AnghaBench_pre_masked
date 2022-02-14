
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef enum pcie_link_width { ____Placeholder_pcie_link_width } pcie_link_width ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;

u32 FUNC_3(struct pci_dev *VAR_2, enum pci_bus_speed *VAR_3,
      enum pcie_link_width *VAR_4)
{
 *VAR_3 = FUNC_1(VAR_2);
 *VAR_4 = FUNC_2(VAR_2);

 if (*VAR_3 == VAR_1 || *VAR_4 == VAR_0)
  return 0;

 return *VAR_4 * FUNC_0(*VAR_3);
}
