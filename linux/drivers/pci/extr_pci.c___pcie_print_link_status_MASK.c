
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef enum pcie_link_width { ____Placeholder_pcie_link_width } pcie_link_width ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,char*,int,int,int ,int,...) ;
 char* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct pci_dev**,int*,int*) ;
 int FUNC_4 (struct pci_dev*,int*,int*) ;

void FUNC_5(struct pci_dev *VAR_0, bool VAR_1)
{
 enum pcie_link_width VAR_2, VAR_3;
 enum pci_bus_speed VAR_4, VAR_5;
 struct pci_dev *VAR_6 = ((void*)0);
 u32 VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_0, &VAR_5, &VAR_3);
 VAR_7 = FUNC_3(VAR_0, &VAR_6, &VAR_4, &VAR_2);

 if (VAR_7 >= VAR_8 && VAR_1)
  FUNC_1(VAR_0, "%u.%03u Gb/s available PCIe bandwidth (%s x%d link)\n",
    VAR_8 / 1000, VAR_8 % 1000,
    FUNC_0(VAR_5), VAR_3);
 else if (VAR_7 < VAR_8)
  FUNC_1(VAR_0, "%u.%03u Gb/s available PCIe bandwidth, limited by %s x%d link at %s (capable of %u.%03u Gb/s with %s x%d link)\n",
    VAR_7 / 1000, VAR_7 % 1000,
    FUNC_0(VAR_4), VAR_2,
    VAR_6 ? FUNC_2(VAR_6) : "<unknown>",
    VAR_8 / 1000, VAR_8 % 1000,
    FUNC_0(VAR_5), VAR_3);
}
