
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct pci_dev {int dummy; } ;
typedef enum pcie_link_width { ____Placeholder_pcie_link_width } pcie_link_width ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct pci_dev* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,size_t*) ;
 int* VAR_6 ;

u32 FUNC_3(struct pci_dev *VAR_7, struct pci_dev **VAR_8,
        enum pci_bus_speed *VAR_9,
        enum pcie_link_width *VAR_10)
{
 u16 VAR_11;
 enum pci_bus_speed VAR_12;
 enum pcie_link_width VAR_13;
 u32 VAR_14, VAR_15;

 if (VAR_9)
  *VAR_9 = VAR_5;
 if (VAR_10)
  *VAR_10 = VAR_0;

 VAR_14 = 0;

 while (VAR_7) {
  FUNC_2(VAR_7, VAR_1, &VAR_11);

  VAR_12 = VAR_6[VAR_11 & VAR_2];
  VAR_13 = (VAR_11 & VAR_3) >>
   VAR_4;

  VAR_15 = VAR_13 * FUNC_0(VAR_12);


  if (!VAR_14 || VAR_15 <= VAR_14) {
   VAR_14 = VAR_15;

   if (VAR_8)
    *VAR_8 = VAR_7;
   if (VAR_9)
    *VAR_9 = VAR_12;
   if (VAR_10)
    *VAR_10 = VAR_13;
  }

  VAR_7 = FUNC_1(VAR_7);
 }

 return VAR_14;
}
