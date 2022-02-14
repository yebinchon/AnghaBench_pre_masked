
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int __aer_firmware_first; scalar_t__ __aer_firmware_first_valid; } ;



__attribute__((used)) static inline int FUNC_0(struct pci_dev *VAR_0)
{
 if (VAR_0->__aer_firmware_first_valid)
  return VAR_0->__aer_firmware_first;
 return 0;
}
