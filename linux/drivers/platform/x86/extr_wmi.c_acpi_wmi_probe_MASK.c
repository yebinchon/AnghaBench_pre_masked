
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct device*) ;
 struct device* FUNC_12 (int *,int *,int ,int *,char*,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct device*,struct acpi_device*) ;
 int FUNC_15 (char*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct acpi_device *VAR_7;
 struct device *VAR_8;
 acpi_status VAR_9;
 int VAR_10;

 VAR_7 = FUNC_0(&VAR_6->dev);
 if (!VAR_7) {
  FUNC_9(&VAR_6->dev, "ACPI companion is missing\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_5(VAR_7->handle,
          VAR_0,
          &VAR_3,
          ((void*)0), ((void*)0));
 if (FUNC_1(VAR_9)) {
  FUNC_9(&VAR_6->dev, "Error installing EC region handler\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_6(VAR_7->handle,
          VAR_1,
          VAR_4,
          ((void*)0));
 if (FUNC_1(VAR_9)) {
  FUNC_9(&VAR_6->dev, "Error installing notify handler\n");
  VAR_10 = -VAR_2;
  goto err_remove_ec_handler;
 }

 VAR_8 = FUNC_12(&VAR_5, &VAR_6->dev, FUNC_3(0, 0),
        ((void*)0), "wmi_bus-%s", FUNC_10(&VAR_6->dev));
 if (FUNC_2(VAR_8)) {
  VAR_10 = FUNC_4(VAR_8);
  goto err_remove_notify_handler;
 }
 FUNC_11(&VAR_6->dev, VAR_8);

 VAR_10 = FUNC_14(VAR_8, VAR_7);
 if (VAR_10) {
  FUNC_15("Failed to parse WDG method\n");
  goto err_remove_busdev;
 }

 return 0;

err_remove_busdev:
 FUNC_13(&VAR_5, FUNC_3(0, 0));

err_remove_notify_handler:
 FUNC_8(VAR_7->handle, VAR_1,
       VAR_4);

err_remove_ec_handler:
 FUNC_7(VAR_7->handle,
       VAR_0,
       &VAR_3);

 return VAR_10;
}
