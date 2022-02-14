
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; int revision; int no_msi; scalar_t__ is_hotplug_bridge; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_1)
{
 if (VAR_1->is_hotplug_bridge &&
     (VAR_1->device != VAR_0 ||
      VAR_1->revision <= 1))
  VAR_1->no_msi = 1;
}
