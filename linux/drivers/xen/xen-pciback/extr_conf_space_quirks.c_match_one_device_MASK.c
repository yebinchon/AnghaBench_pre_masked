
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; int class; int class_mask; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; int class; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline const struct pci_device_id *
FUNC_0(const struct pci_device_id *VAR_1, const struct pci_dev *VAR_2)
{
 if ((VAR_1->vendor == VAR_0 || VAR_1->vendor == VAR_2->vendor) &&
     (VAR_1->device == VAR_0 || VAR_1->device == VAR_2->device) &&
     (VAR_1->subvendor == VAR_0 ||
    VAR_1->subvendor == VAR_2->subsystem_vendor) &&
     (VAR_1->subdevice == VAR_0 ||
    VAR_1->subdevice == VAR_2->subsystem_device) &&
     !((VAR_1->class ^ VAR_2->class) & VAR_1->class_mask))
  return VAR_1;
 return ((void*)0);
}
