
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev {int rom_base_reg; int mmio_always_on; int bus; scalar_t__ is_virtfn; struct resource* resource; } ;
struct pci_bus_region {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct pci_dev*,char*,int,int,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (int ,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_13, int VAR_14)
{
 struct pci_bus_region VAR_15;
 bool VAR_16;
 u16 VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 int VAR_21;
 struct resource *VAR_22 = VAR_13->resource + VAR_14;


 if (VAR_13->is_virtfn)
  return;





 if (!VAR_22->flags)
  return;

 if (VAR_22->flags & VAR_4)
  return;






 if (VAR_22->flags & VAR_2)
  return;

 FUNC_5(VAR_13->bus, &VAR_15, VAR_22);
 VAR_18 = VAR_15.start;

 if (VAR_22->flags & VAR_0) {
  VAR_20 = (u32)VAR_6;
  VAR_18 |= VAR_22->flags & ~VAR_6;
 } else if (VAR_14 == VAR_12) {
  VAR_20 = VAR_11;
 } else {
  VAR_20 = (u32)VAR_7;
  VAR_18 |= VAR_22->flags & ~VAR_7;
 }

 if (VAR_14 < VAR_12) {
  VAR_21 = VAR_5 + 4 * VAR_14;
 } else if (VAR_14 == VAR_12) {






  if (!(VAR_22->flags & VAR_3))
   return;

  VAR_21 = VAR_13->rom_base_reg;
  VAR_18 |= VAR_10;
 } else
  return;






 VAR_16 = (VAR_22->flags & VAR_1) && !VAR_13->mmio_always_on;
 if (VAR_16) {
  FUNC_2(VAR_13, VAR_8, &VAR_17);
  FUNC_4(VAR_13, VAR_8,
          VAR_17 & ~VAR_9);
 }

 FUNC_3(VAR_13, VAR_21, VAR_18);
 FUNC_1(VAR_13, VAR_21, &VAR_19);

 if ((VAR_18 ^ VAR_19) & VAR_20) {
  FUNC_0(VAR_13, "BAR %d: error updating (%#08x != %#08x)\n",
   VAR_14, VAR_18, VAR_19);
 }

 if (VAR_22->flags & VAR_1) {
  VAR_18 = VAR_15.start >> 16 >> 16;
  FUNC_3(VAR_13, VAR_21 + 4, VAR_18);
  FUNC_1(VAR_13, VAR_21 + 4, &VAR_19);
  if (VAR_19 != VAR_18) {
   FUNC_0(VAR_13, "BAR %d: error updating (high %#08x != %#08x)\n",
    VAR_14, VAR_18, VAR_19);
  }
 }

 if (VAR_16)
  FUNC_4(VAR_13, VAR_8, VAR_17);
}
