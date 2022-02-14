
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
typedef enum pcie_link_width { ____Placeholder_pcie_link_width } pcie_link_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

enum pcie_link_width FUNC_1(struct pci_dev *VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_3, VAR_1, &VAR_4);
 if (VAR_4)
  return (VAR_4 & VAR_2) >> 4;

 return VAR_0;
}
