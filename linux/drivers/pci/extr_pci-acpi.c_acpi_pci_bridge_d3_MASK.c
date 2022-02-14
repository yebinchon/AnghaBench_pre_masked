
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; int is_hotplug_bridge; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (int *) ;
 struct fwnode_handle* FUNC_1 (struct acpi_device*) ;
 struct acpi_device* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct fwnode_handle const*,char*,int*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static bool FUNC_6(struct pci_dev *VAR_0)
{
 const struct fwnode_handle *VAR_1;
 struct acpi_device *VAR_2;
 struct pci_dev *VAR_3;
 u8 VAR_4;

 if (!VAR_0->is_hotplug_bridge)
  return 0;





 VAR_3 = FUNC_5(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_0(&VAR_3->dev);
 if (VAR_3 == VAR_0) {




  if (!VAR_2 && !FUNC_4(VAR_3))
   VAR_2 = FUNC_2(&VAR_3->dev);
 }

 if (!VAR_2)
  return 0;

 VAR_1 = FUNC_1(VAR_2);
 if (FUNC_3(VAR_1, "HotPlugSupportInD3", &VAR_4))
  return 0;

 return VAR_4 == 1;
}
