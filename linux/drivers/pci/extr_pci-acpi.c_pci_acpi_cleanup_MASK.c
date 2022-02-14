
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ bridge_d3; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ valid; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ wakeup; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct acpi_device*,struct device*) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct acpi_device*) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_0(VAR_0);
 struct pci_dev *VAR_2 = FUNC_5(VAR_0);

 if (!VAR_1)
  return;

 FUNC_4(VAR_1);
 if (VAR_1->wakeup.flags.valid) {
  FUNC_1(VAR_1, VAR_0);
  if (VAR_2->bridge_d3)
   FUNC_3(VAR_0);

  FUNC_2(VAR_0, 0);
 }
}
