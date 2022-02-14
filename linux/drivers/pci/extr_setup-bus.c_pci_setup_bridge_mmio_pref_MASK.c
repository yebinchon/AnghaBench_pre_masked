
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int flags; } ;
struct pci_dev {int bus; struct resource* resource; } ;
struct pci_bus_region {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (int ,struct pci_bus_region*,struct resource*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_6)
{
 struct resource *VAR_7;
 struct pci_bus_region VAR_8;
 u32 VAR_9, VAR_10, VAR_11;






 FUNC_1(VAR_6, VAR_4, 0);


 VAR_10 = VAR_11 = 0;
 VAR_7 = &VAR_6->resource[VAR_2 + 2];
 FUNC_2(VAR_6->bus, &VAR_8, VAR_7);
 if (VAR_7->flags & VAR_1) {
  VAR_9 = (VAR_8.start >> 16) & 0xfff0;
  VAR_9 |= VAR_8.end & 0xfff00000;
  if (VAR_7->flags & VAR_0) {
   VAR_10 = FUNC_3(VAR_8.start);
   VAR_11 = FUNC_3(VAR_8.end);
  }
  FUNC_0(VAR_6, "  bridge window %pR\n", VAR_7);
 } else {
  VAR_9 = 0x0000fff0;
 }
 FUNC_1(VAR_6, VAR_5, VAR_9);


 FUNC_1(VAR_6, VAR_3, VAR_10);
 FUNC_1(VAR_6, VAR_4, VAR_11);
}
