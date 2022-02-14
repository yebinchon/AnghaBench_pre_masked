
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct int3402_thermal_data {int handle; int int340x_zone; } ;
struct acpi_device {int handle; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int ,struct int3402_thermal_data*) ;
 struct int3402_thermal_data* FUNC_5 (int *,int,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct acpi_device*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*,struct int3402_thermal_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct acpi_device *VAR_6 = FUNC_0(&VAR_5->dev);
 struct int3402_thermal_data *VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_6->handle, "_TMP"))
  return -VAR_1;

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->int340x_zone = FUNC_6(VAR_6, ((void*)0));
 if (FUNC_1(VAR_7->int340x_zone))
  return FUNC_2(VAR_7->int340x_zone);

 VAR_8 = FUNC_4(VAR_6->handle,
       VAR_0,
       VAR_4,
       VAR_7);
 if (VAR_8) {
  FUNC_7(VAR_7->int340x_zone);
  return VAR_8;
 }

 VAR_7->handle = VAR_6->handle;
 FUNC_8(VAR_5, VAR_7);

 return 0;
}
