
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; int bus; struct resource* resource; } ;
struct pci_bus_region {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (int ,struct pci_bus_region*,struct resource*) ;

int FUNC_3(struct pci_dev *VAR_4)
{
 struct resource *VAR_5 = &VAR_4->resource[VAR_3];
 struct pci_bus_region VAR_6;
 u32 VAR_7;

 if (!VAR_5->flags)
  return -1;


 if (VAR_5->flags & VAR_0)
  return 0;






 FUNC_2(VAR_4->bus, &VAR_6, VAR_5);
 FUNC_0(VAR_4, VAR_4->rom_base_reg, &VAR_7);
 VAR_7 &= ~VAR_2;
 VAR_7 |= VAR_6.start | VAR_1;
 FUNC_1(VAR_4, VAR_4->rom_base_reg, VAR_7);
 return 0;
}
