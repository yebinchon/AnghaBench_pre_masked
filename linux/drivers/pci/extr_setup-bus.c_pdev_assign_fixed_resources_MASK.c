
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ parent; } ;
struct pci_dev {struct pci_bus* bus; struct resource* resource; } ;
struct pci_bus {struct pci_bus* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_bus*,struct resource*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct pci_bus *VAR_6;
  struct resource *VAR_7 = &VAR_4->resource[VAR_5];

  if (VAR_7->parent || !(VAR_7->flags & VAR_2) ||
      !(VAR_7->flags & (VAR_0 | VAR_1)))
   continue;

  VAR_6 = VAR_4->bus;
  while (VAR_6 && !VAR_7->parent) {
   FUNC_0(VAR_6, VAR_7);
   VAR_6 = VAR_6->parent;
  }
 }
}
