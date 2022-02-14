
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int state; } ;
struct acpi_device {TYPE_1__ power; } ;
typedef int const pci_power_t ;


 struct acpi_device* FUNC_0 (int *) ;





 int VAR_0 ;





 int const VAR_1 ;
 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static pci_power_t FUNC_2(struct pci_dev *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(&VAR_2->dev);
 static const pci_power_t VAR_4[] = {
  [137] = 132,
  [136] = 131,
  [135] = 130,
  [133] = 128,
  [134] = 129,
 };
 int VAR_5;

 if (!VAR_3 || !FUNC_1(VAR_3))
  return VAR_1;

 VAR_5 = VAR_3->power.state;
 if (VAR_5 == VAR_0)
  return VAR_1;

 return VAR_4[VAR_5];
}
