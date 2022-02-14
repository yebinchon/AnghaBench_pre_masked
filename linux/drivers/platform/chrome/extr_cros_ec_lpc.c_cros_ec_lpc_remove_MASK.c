
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cros_ec_device {int dummy; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct cros_ec_device*) ;
 struct cros_ec_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct cros_ec_device *VAR_3 = FUNC_3(VAR_2);
 struct acpi_device *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->dev);
 if (VAR_4)
  FUNC_1(VAR_4->handle, VAR_0,
        VAR_1);

 return FUNC_2(VAR_3);
}
