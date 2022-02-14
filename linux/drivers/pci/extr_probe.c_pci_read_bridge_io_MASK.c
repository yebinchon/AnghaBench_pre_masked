
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef scalar_t__ u16 ;
struct resource {unsigned long flags; } ;
struct pci_dev {int bus; scalar_t__ io_window_1k; } ;
struct pci_bus_region {unsigned long start; unsigned long end; } ;
struct pci_bus {struct resource** resource; struct pci_dev* self; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,unsigned long*) ;
 int FUNC_2 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_3 (int ,struct resource*,struct pci_bus_region*) ;

__attribute__((used)) static void FUNC_4(struct pci_bus *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->self;
 u8 VAR_11, VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16;
 struct pci_bus_region VAR_17;
 struct resource *VAR_18;

 VAR_13 = VAR_6;
 VAR_14 = 0x1000;
 if (VAR_10->io_window_1k) {

  VAR_13 = VAR_1;
  VAR_14 = 0x400;
 }

 VAR_18 = VAR_9->resource[0];
 FUNC_1(VAR_10, VAR_2, &VAR_11);
 FUNC_1(VAR_10, VAR_4, &VAR_12);
 VAR_15 = (VAR_11 & VAR_13) << 8;
 VAR_16 = (VAR_12 & VAR_13) << 8;

 if ((VAR_11 & VAR_8) == VAR_7) {
  u16 VAR_19, VAR_20;

  FUNC_2(VAR_10, VAR_3, &VAR_19);
  FUNC_2(VAR_10, VAR_5, &VAR_20);
  VAR_15 |= ((unsigned long) VAR_19 << 16);
  VAR_16 |= ((unsigned long) VAR_20 << 16);
 }

 if (VAR_15 <= VAR_16) {
  VAR_18->flags = (VAR_11 & VAR_8) | VAR_0;
  VAR_17.start = VAR_15;
  VAR_17.end = VAR_16 + VAR_14 - 1;
  FUNC_3(VAR_10->bus, VAR_18, &VAR_17);
  FUNC_0(VAR_10, "  bridge window %pR\n", VAR_18);
 }
}
