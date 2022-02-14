
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {int start; int end; } ;
struct pci_bus {struct resource** resource; struct pci_dev* self; } ;
typedef int pci_bus_addr_t ;


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
 int FUNC_0 (struct pci_dev*,char*,unsigned long long) ;
 int FUNC_1 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (int ,struct resource*,struct pci_bus_region*) ;

__attribute__((used)) static void FUNC_5(struct pci_bus *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->self;
 u16 VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 pci_bus_addr_t VAR_16, VAR_17;
 struct pci_bus_region VAR_18;
 struct resource *VAR_19;

 VAR_19 = VAR_10->resource[2];
 FUNC_3(VAR_11, VAR_5, &VAR_12);
 FUNC_3(VAR_11, VAR_6, &VAR_13);
 VAR_14 = (VAR_12 & VAR_7) << 16;
 VAR_15 = (VAR_13 & VAR_7) << 16;

 if ((VAR_12 & VAR_9) == VAR_8) {
  u32 VAR_20, VAR_21;

  FUNC_2(VAR_11, VAR_3, &VAR_20);
  FUNC_2(VAR_11, VAR_4, &VAR_21);






  if (VAR_20 <= VAR_21) {
   VAR_14 |= (u64) VAR_20 << 32;
   VAR_15 |= (u64) VAR_21 << 32;
  }
 }

 VAR_16 = (pci_bus_addr_t) VAR_14;
 VAR_17 = (pci_bus_addr_t) VAR_15;

 if (VAR_16 != VAR_14) {
  FUNC_0(VAR_11, "can't handle bridge window above 4GB (bus address %#010llx)\n",
   (unsigned long long) VAR_14);
  return;
 }

 if (VAR_16 <= VAR_17) {
  VAR_19->flags = (VAR_12 & VAR_9) |
      VAR_0 | VAR_2;
  if (VAR_19->flags & VAR_8)
   VAR_19->flags |= VAR_1;
  VAR_18.start = VAR_16;
  VAR_18.end = VAR_17 + 0xfffff;
  FUNC_4(VAR_11->bus, VAR_19, &VAR_18);
  FUNC_1(VAR_11, "  bridge window %pR\n", VAR_19);
 }
}
