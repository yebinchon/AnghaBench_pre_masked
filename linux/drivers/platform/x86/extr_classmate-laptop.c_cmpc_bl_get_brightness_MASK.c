
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (int ,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_0)
{
 acpi_status VAR_1;
 acpi_handle VAR_2;
 unsigned long long VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = FUNC_2(VAR_2, &VAR_3);
 if (FUNC_0(VAR_1))
  return VAR_3;
 else
  return -1;
}
