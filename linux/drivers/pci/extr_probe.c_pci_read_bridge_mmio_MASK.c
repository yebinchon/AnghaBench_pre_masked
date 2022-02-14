
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {unsigned long start; unsigned long end; } ;
struct pci_bus {struct resource** resource; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (int ,struct resource*,struct pci_bus_region*) ;

__attribute__((used)) static void FUNC_3(struct pci_bus *VAR_5)
{
 struct pci_dev *VAR_6 = VAR_5->self;
 u16 VAR_7, VAR_8;
 unsigned long VAR_9, VAR_10;
 struct pci_bus_region VAR_11;
 struct resource *VAR_12;

 VAR_12 = VAR_5->resource[1];
 FUNC_1(VAR_6, VAR_1, &VAR_7);
 FUNC_1(VAR_6, VAR_2, &VAR_8);
 VAR_9 = ((unsigned long) VAR_7 & VAR_3) << 16;
 VAR_10 = ((unsigned long) VAR_8 & VAR_3) << 16;
 if (VAR_9 <= VAR_10) {
  VAR_12->flags = (VAR_7 & VAR_4) | VAR_0;
  VAR_11.start = VAR_9;
  VAR_11.end = VAR_10 + 0xfffff;
  FUNC_2(VAR_6->bus, VAR_12, &VAR_11);
  FUNC_0(VAR_6, "  bridge window %pR\n", VAR_12);
 }
}
