
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; scalar_t__ subsystem_device; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct pci_dev *VAR_1)
{
 return (VAR_1->revision < 8) &&
  (VAR_1->subsystem_device == VAR_0);
}
