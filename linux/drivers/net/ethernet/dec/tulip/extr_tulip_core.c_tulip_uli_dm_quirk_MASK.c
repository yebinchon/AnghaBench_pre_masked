
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int vendor; int device; } ;



__attribute__((used)) static int FUNC_0(struct pci_dev *VAR_0)
{
 if (VAR_0->vendor == 0x1282 && VAR_0->device == 0x9102)
  return 1;
 return 0;
}
