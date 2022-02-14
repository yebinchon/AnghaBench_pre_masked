
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_0(&VAR_0->dev);
 return VAR_1 ? FUNC_1(VAR_1) : 0;
}
