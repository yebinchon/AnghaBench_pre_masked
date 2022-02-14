
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ bus; int devfn; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct pci_dev *VAR_0, struct pci_dev *VAR_1)
{
 if (FUNC_1(VAR_0->bus) == FUNC_1(VAR_1->bus)
     && VAR_0->bus == VAR_1->bus && FUNC_0(VAR_0->devfn) == FUNC_0(VAR_1->devfn))
  return 1;

 return 0;
}
