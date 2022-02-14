
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct acpi_device {struct platform_device* driver_data; int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct acpi_device*) ;
 struct platform_device* FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_5)
{
 struct platform_device *VAR_6;
 acpi_status VAR_7;

 if (!FUNC_4(VAR_5))
  return -VAR_1;

 if (FUNC_2(VAR_5))
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_5->handle, VAR_2,
         VAR_3, VAR_4);
 if (FUNC_0(VAR_7))
  return -VAR_1;


 VAR_6 = FUNC_5(VAR_0, 0, VAR_4,
         FUNC_1(VAR_4));
 VAR_5->driver_data = VAR_6;

 return 0;
}
