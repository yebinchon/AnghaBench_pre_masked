
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;
struct acpi_device {int handle; } ;
typedef int pci_power_t ;


 struct acpi_device* FUNC_0 (int *) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct acpi_device*,int const) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct pci_dev*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_5, pci_power_t VAR_6)
{
 struct acpi_device *VAR_7 = FUNC_0(&VAR_5->dev);
 static const u8 VAR_8[] = {
  [132] = 137,
  [131] = 136,
  [130] = 135,
  [128] = 133,
  [129] = 134,
 };
 int VAR_9 = -VAR_1;


 if (!VAR_7 || FUNC_2(VAR_7->handle, "_EJ0"))
  return -VAR_2;

 switch (VAR_6) {
 case 129:
  if (FUNC_4(&VAR_5->dev, VAR_4) ==
    VAR_3) {
   VAR_9 = -VAR_0;
   break;
  }

 case 132:
 case 131:
 case 130:
 case 128:
  VAR_9 = FUNC_1(VAR_7, VAR_8[VAR_6]);
 }

 if (!VAR_9)
  FUNC_5(VAR_5, "power state changed by ACPI to %s\n",
    FUNC_3(VAR_8[VAR_6]));

 return VAR_9;
}
