
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int bridge; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;

void FUNC_2(struct pci_bus *VAR_1)
{
 if (VAR_0 || !VAR_1->bridge)
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
