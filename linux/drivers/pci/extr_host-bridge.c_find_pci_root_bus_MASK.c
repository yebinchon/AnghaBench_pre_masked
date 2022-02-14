
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {struct pci_bus* parent; } ;



__attribute__((used)) static struct pci_bus *FUNC_0(struct pci_bus *VAR_0)
{
 while (VAR_0->parent)
  VAR_0 = VAR_0->parent;

 return VAR_0;
}
