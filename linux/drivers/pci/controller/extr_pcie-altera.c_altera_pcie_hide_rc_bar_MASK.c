
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_bus*) ;

__attribute__((used)) static bool FUNC_1(struct pci_bus *VAR_1, unsigned int VAR_2,
        int VAR_3)
{
 if (FUNC_0(VAR_1) && (VAR_2 == 0) &&
     (VAR_3 == VAR_0))
  return 1;

 return 0;
}
