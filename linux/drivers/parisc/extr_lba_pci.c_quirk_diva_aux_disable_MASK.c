
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subsystem_vendor; int subsystem_device; scalar_t__ device; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_1->subsystem_vendor != VAR_0 ||
     VAR_1->subsystem_device != 0x1291)
  return;

 FUNC_0(&VAR_1->dev, "Hiding Diva built-in AUX serial device");
 VAR_1->device = 0;
}
