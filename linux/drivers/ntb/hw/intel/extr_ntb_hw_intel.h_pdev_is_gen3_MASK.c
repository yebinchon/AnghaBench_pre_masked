
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_1)
{
 if (VAR_1->device == VAR_0)
  return 1;

 return 0;
}
