
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ bridge_d3; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int valid; } ;
struct TYPE_4__ {TYPE_1__ flags; } ;
struct acpi_device {TYPE_2__ wakeup; int handle; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct acpi_device*,struct device*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct acpi_device*,struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_dev* FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_8(VAR_0);
 struct acpi_device *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return;

 FUNC_6(VAR_1, VAR_2->handle);
 FUNC_7(VAR_1);

 FUNC_5(VAR_2, VAR_1);
 if (!VAR_2->wakeup.flags.valid)
  return;

 FUNC_3(VAR_0, 1);






 if (VAR_1->bridge_d3)
  FUNC_4(VAR_0);

 FUNC_2(VAR_1, 0);
 FUNC_1(VAR_2, VAR_0);
}
