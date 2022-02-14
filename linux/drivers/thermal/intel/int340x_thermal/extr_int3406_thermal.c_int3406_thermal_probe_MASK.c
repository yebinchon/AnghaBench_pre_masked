
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct int3406_thermal_data {int br; int cooling_dev; struct backlight_device* raw_bd; scalar_t__ handle; } ;
struct backlight_device {int dummy; } ;
struct acpi_device {int handle; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int ,int ,int ,struct int3406_thermal_data*) ;
 int FUNC_5 (struct acpi_device*,int *,int *) ;
 struct backlight_device* FUNC_6 (int ) ;
 struct int3406_thermal_data* FUNC_7 (int *,int,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct int3406_thermal_data*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct int3406_thermal_data*) ;
 int FUNC_11 (int ,struct int3406_thermal_data*,int *) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct acpi_device *VAR_8 = FUNC_0(&VAR_7->dev);
 struct int3406_thermal_data *VAR_9;
 struct backlight_device *VAR_10;
 int VAR_11;

 if (!FUNC_1(&VAR_7->dev))
  return -VAR_2;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_3;
 VAR_9->handle = FUNC_1(&VAR_7->dev);

 VAR_10 = FUNC_6(VAR_1);
 if (!VAR_10)
  return -VAR_2;
 VAR_9->raw_bd = VAR_10;

 VAR_11 = FUNC_5(FUNC_0(&VAR_7->dev), &VAR_9->br, ((void*)0));
 if (VAR_11)
  return VAR_11;

 FUNC_8(VAR_9);

 VAR_9->cooling_dev = FUNC_11(FUNC_3(VAR_8),
        VAR_9, &VAR_6);
 if (FUNC_2(VAR_9->cooling_dev))
  goto err;

 VAR_11 = FUNC_4(VAR_8->handle, VAR_0,
       VAR_5, VAR_9);
 if (VAR_11)
  goto err_cdev;

 FUNC_10(VAR_7, VAR_9);

 return 0;

err_cdev:
 FUNC_12(VAR_9->cooling_dev);
err:
 FUNC_9(VAR_9->br);
 return -VAR_2;
}
