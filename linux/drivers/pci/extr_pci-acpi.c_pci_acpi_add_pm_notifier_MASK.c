
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (struct acpi_device*,int *,int ) ;
 int VAR_0 ;

acpi_status FUNC_1(struct acpi_device *VAR_1,
         struct pci_dev *VAR_2)
{
 return FUNC_0(VAR_1, &VAR_2->dev, VAR_0);
}
