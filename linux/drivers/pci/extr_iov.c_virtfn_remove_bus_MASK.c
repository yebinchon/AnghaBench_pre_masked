
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int devices; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct pci_bus*) ;

__attribute__((used)) static void FUNC_2(struct pci_bus *VAR_0, struct pci_bus *VAR_1)
{
 if (VAR_0 != VAR_1 && FUNC_0(&VAR_1->devices))
  FUNC_1(VAR_1);
}
