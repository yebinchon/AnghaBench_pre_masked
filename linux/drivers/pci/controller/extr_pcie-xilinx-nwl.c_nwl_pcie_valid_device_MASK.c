
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {scalar_t__ number; struct nwl_pcie* sysdata; } ;
struct nwl_pcie {scalar_t__ root_busno; } ;


 int FUNC_0 (struct nwl_pcie*) ;

__attribute__((used)) static bool FUNC_1(struct pci_bus *VAR_0, unsigned int VAR_1)
{
 struct nwl_pcie *VAR_2 = VAR_0->sysdata;


 if (VAR_0->number != VAR_2->root_busno) {
  if (!FUNC_0(VAR_2))
   return 0;
 }


 if (VAR_0->number == VAR_2->root_busno && VAR_1 > 0)
  return 0;

 return 1;
}
