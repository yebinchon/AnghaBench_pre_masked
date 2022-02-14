
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static acpi_status
FUNC_5(acpi_handle VAR_3, u32 VAR_4,
     void *VAR_5, void **VAR_6)
{
 struct acpi_device *VAR_7;
 bool *VAR_8 = VAR_5;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_9)
  return VAR_2;

 if (FUNC_4(FUNC_2(VAR_7), VAR_0))
  return VAR_2;

 if (!FUNC_3(VAR_7))
  return VAR_2;

 if (FUNC_1(VAR_7))
  return VAR_2;

 *VAR_8 = 1;
 return VAR_1;
}
