
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; } ;



__attribute__((used)) static inline bool FUNC_0(struct pci_dev *VAR_0)
{
 if (VAR_0->revision == 5)
  return 1;
 return 0;
}
