
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;

void FUNC_2(struct pci_dev *VAR_3)
{
 struct resource *VAR_4 = &VAR_3->resource[VAR_2];
 u32 VAR_5;

 if (VAR_4->flags & VAR_0)
  return;

 FUNC_0(VAR_3, VAR_3->rom_base_reg, &VAR_5);
 VAR_5 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_3->rom_base_reg, VAR_5);
}
