
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_epc_features {int reserved_bar; } ;


 int FUNC_0 (int ) ;

unsigned int FUNC_1(const struct pci_epc_features
     *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_0(VAR_0->reserved_bar);
 if (VAR_1 > 5)
  return 0;

 return VAR_1;
}
