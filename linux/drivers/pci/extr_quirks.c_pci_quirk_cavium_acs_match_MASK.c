
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_1)
{






 return (FUNC_0(VAR_1) &&
  (FUNC_1(VAR_1) == VAR_0) &&
  ((VAR_1->device & 0xf800) == 0xa000));
}
