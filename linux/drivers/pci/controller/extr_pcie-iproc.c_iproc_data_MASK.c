
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {struct iproc_pcie* sysdata; } ;
struct iproc_pcie {int dummy; } ;



__attribute__((used)) static inline struct iproc_pcie *FUNC_0(struct pci_bus *VAR_0)
{
 struct iproc_pcie *VAR_1 = VAR_0->sysdata;
 return VAR_1;
}
