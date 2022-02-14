
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_info {int dummy; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ FUNC_2 (int ,struct acpi_device_info**) ;
 int FUNC_3 (struct acpi_device_info*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_3, const char *VAR_4,
      struct acpi_device_info **VAR_5)
{
 struct acpi_device_info *VAR_6, **VAR_7;
 acpi_handle VAR_8;
 acpi_status VAR_9;

 VAR_9 = FUNC_1(VAR_3, (char *)VAR_4, &VAR_8);
 if (VAR_9 == VAR_0)
  return -VAR_2;
 else if (FUNC_0(VAR_9))
  return -VAR_1;

 VAR_7 = VAR_5 ? VAR_5 : &VAR_6;
 VAR_9 = FUNC_2(VAR_8, VAR_7);
 if (FUNC_0(VAR_9))
  return -VAR_1;

 if (!VAR_5)
  FUNC_3(VAR_6);

 return 0;
}
