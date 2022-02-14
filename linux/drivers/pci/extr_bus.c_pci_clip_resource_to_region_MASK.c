
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct pci_bus_region {scalar_t__ start; scalar_t__ end; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,struct resource*,struct pci_bus_region*) ;
 int FUNC_1 (struct pci_bus*,struct pci_bus_region*,struct resource*) ;

__attribute__((used)) static void FUNC_2(struct pci_bus *VAR_0,
     struct resource *VAR_1,
     struct pci_bus_region *VAR_2)
{
 struct pci_bus_region VAR_3;

 FUNC_1(VAR_0, &VAR_3, VAR_1);
 if (VAR_3.start < VAR_2->start)
  VAR_3.start = VAR_2->start;
 if (VAR_3.end > VAR_2->end)
  VAR_3.end = VAR_2->end;

 if (VAR_3.end < VAR_3.start)
  VAR_1->end = VAR_1->start - 1;
 else
  FUNC_0(VAR_0, VAR_1, &VAR_3);
}
