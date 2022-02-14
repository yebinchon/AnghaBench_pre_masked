
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct resource {int flags; } ;
struct pci_dev {int bus; struct resource* resource; scalar_t__ io_window_1k; } ;
struct pci_bus_region {int start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int ,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_6)
{
 struct resource *VAR_7;
 struct pci_bus_region VAR_8;
 unsigned long VAR_9;
 u8 VAR_10, VAR_11;
 u16 VAR_12;
 u32 VAR_13;

 VAR_9 = VAR_5;
 if (VAR_6->io_window_1k)
  VAR_9 = VAR_2;


 VAR_7 = &VAR_6->resource[VAR_1 + 0];
 FUNC_4(VAR_6->bus, &VAR_8, VAR_7);
 if (VAR_7->flags & VAR_0) {
  FUNC_1(VAR_6, VAR_3, &VAR_12);
  VAR_10 = (VAR_8.start >> 8) & VAR_9;
  VAR_11 = (VAR_8.end >> 8) & VAR_9;
  VAR_12 = ((u16) VAR_11 << 8) | VAR_10;

  VAR_13 = (VAR_8.end & 0xffff0000) | (VAR_8.start >> 16);
  FUNC_0(VAR_6, "  bridge window %pR\n", VAR_7);
 } else {

  VAR_13 = 0;
  VAR_12 = 0x00f0;
 }

 FUNC_2(VAR_6, VAR_4, 0x0000ffff);

 FUNC_3(VAR_6, VAR_3, VAR_12);

 FUNC_2(VAR_6, VAR_4, VAR_13);
}
