
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct resource {int flags; int name; } ;
struct pci_dev {int bus; struct resource* resource; } ;
struct pci_bus_region {unsigned int start; unsigned int end; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,char*,struct resource*,char const*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_4 (int ,struct resource*,struct pci_bus_region*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1, int VAR_2,
    unsigned VAR_3, int VAR_4, const char *VAR_5)
{
 u16 VAR_6;
 struct pci_bus_region VAR_7;
 struct resource *VAR_8 = VAR_1->resource + VAR_4;

 FUNC_3(VAR_1, VAR_2, &VAR_6);
 VAR_6 &= ~(VAR_3 - 1);

 if (!VAR_6)
  return;

 VAR_8->name = FUNC_2(VAR_1);
 VAR_8->flags = VAR_0;


 VAR_7.start = VAR_6;
 VAR_7.end = VAR_6 + VAR_3 - 1;
 FUNC_4(VAR_1->bus, VAR_8, &VAR_7);

 if (!FUNC_0(VAR_1, VAR_4))
  FUNC_1(VAR_1, "quirk: %pR claimed by %s\n", VAR_8, VAR_5);
}
