
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
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static acpi_status FUNC_5(acpi_handle VAR_2,
         u32 VAR_3,
         void *VAR_4,
         void **VAR_5)
{
 struct acpi_device *VAR_6, **VAR_7;

 if (FUNC_0(VAR_2, &VAR_6))
  return VAR_0;

 VAR_7 = VAR_4;

 if (FUNC_4(FUNC_1(VAR_6), VAR_1,
     FUNC_3(VAR_1)))
  return VAR_0;

 if (*VAR_7) {
  FUNC_2("duplicate entry %s\n", VAR_1);
  return VAR_0;
 }

 *VAR_7 = VAR_6;

 return VAR_0;
}
