
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus_region {scalar_t__ start; scalar_t__ end; } ;



__attribute__((used)) static bool FUNC_0(struct pci_bus_region *VAR_0,
       struct pci_bus_region *VAR_1)
{
 return VAR_0->start <= VAR_1->start && VAR_0->end >= VAR_1->end;
}
