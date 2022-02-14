
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int class; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct pci_dev *VAR_1)
{
 return (VAR_1->class >> 8) == VAR_0;
}
