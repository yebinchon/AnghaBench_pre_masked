
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
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,int) ;
 int FUNC_2 (int ,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_3)
{
 struct resource *VAR_4;
 struct pci_bus_region VAR_5;
 u32 VAR_6;


 VAR_4 = &VAR_3->resource[VAR_1 + 1];
 FUNC_2(VAR_3->bus, &VAR_5, VAR_4);
 if (VAR_4->flags & VAR_0) {
  VAR_6 = (VAR_5.start >> 16) & 0xfff0;
  VAR_6 |= VAR_5.end & 0xfff00000;
  FUNC_0(VAR_3, "  bridge window %pR\n", VAR_4);
 } else {
  VAR_6 = 0x0000fff0;
 }
 FUNC_1(VAR_3, VAR_2, VAR_6);
}
