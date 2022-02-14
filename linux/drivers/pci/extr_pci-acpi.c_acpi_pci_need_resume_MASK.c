
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_5__ {int dsw_present; } ;
struct TYPE_6__ {TYPE_1__ flags; } ;
struct TYPE_7__ {scalar_t__ valid; } ;
struct TYPE_8__ {int prepare_count; TYPE_3__ flags; } ;
struct acpi_device {TYPE_2__ power; TYPE_4__ wakeup; } ;


 struct acpi_device* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_5(struct pci_dev *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_0(&VAR_1->dev);
 if (FUNC_4(VAR_1) && FUNC_2() != VAR_0)
  return 1;

 if (!VAR_2 || !FUNC_1(VAR_2))
  return 0;

 if (VAR_2->wakeup.flags.valid &&
     FUNC_3(&VAR_1->dev) != !!VAR_2->wakeup.prepare_count)
  return 1;

 if (FUNC_2() == VAR_0)
  return 0;

 return !!VAR_2->power.flags.dsw_present;
}
