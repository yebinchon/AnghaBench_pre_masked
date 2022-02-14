
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; } ;
struct pci_dev {int bus; } ;
struct pci_bus_region {int end; int start; } ;
struct pci_bus {struct resource** resource; struct resource busn_res; struct pci_dev* self; } ;


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
 int FUNC_0 (struct pci_dev*,char*,struct resource*) ;
 int FUNC_1 (struct pci_dev*,int ,int ) ;
 int FUNC_2 (int ,struct pci_bus_region*,struct resource*) ;

void FUNC_3(struct pci_bus *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_10->self;
 struct resource *VAR_12;
 struct pci_bus_region VAR_13;

 FUNC_0(VAR_11, "CardBus bridge to %pR\n",
   &VAR_10->busn_res);

 VAR_12 = VAR_10->resource[0];
 FUNC_2(VAR_11->bus, &VAR_13, VAR_12);
 if (VAR_12->flags & VAR_0) {




  FUNC_0(VAR_11, "  bridge window %pR\n", VAR_12);
  FUNC_1(VAR_11, VAR_2,
     VAR_13.start);
  FUNC_1(VAR_11, VAR_4,
     VAR_13.end);
 }

 VAR_12 = VAR_10->resource[1];
 FUNC_2(VAR_11->bus, &VAR_13, VAR_12);
 if (VAR_12->flags & VAR_0) {
  FUNC_0(VAR_11, "  bridge window %pR\n", VAR_12);
  FUNC_1(VAR_11, VAR_3,
     VAR_13.start);
  FUNC_1(VAR_11, VAR_5,
     VAR_13.end);
 }

 VAR_12 = VAR_10->resource[2];
 FUNC_2(VAR_11->bus, &VAR_13, VAR_12);
 if (VAR_12->flags & VAR_1) {
  FUNC_0(VAR_11, "  bridge window %pR\n", VAR_12);
  FUNC_1(VAR_11, VAR_6,
     VAR_13.start);
  FUNC_1(VAR_11, VAR_8,
     VAR_13.end);
 }

 VAR_12 = VAR_10->resource[3];
 FUNC_2(VAR_11->bus, &VAR_13, VAR_12);
 if (VAR_12->flags & VAR_1) {
  FUNC_0(VAR_11, "  bridge window %pR\n", VAR_12);
  FUNC_1(VAR_11, VAR_7,
     VAR_13.start);
  FUNC_1(VAR_11, VAR_9,
     VAR_13.end);
 }
}
