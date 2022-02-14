
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_ops {int dummy; } ;
struct pci_bus_ops {struct pci_ops* ops; struct pci_bus* bus; int list; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pci_bus_ops *VAR_0,
        struct pci_bus *VAR_1,
        struct pci_ops *VAR_2)
{
 FUNC_0(&VAR_0->list);
 VAR_0->bus = VAR_1;
 VAR_0->ops = VAR_2;
}
