
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_0)
{
 acpi_status VAR_1;
 u64 VAR_2;





 VAR_1 = FUNC_1(VAR_0, "_STA", ((void*)0), &VAR_2);
 if (FUNC_0(VAR_1)) {
  FUNC_2("ACPI call to query HDD protection failed\n");
  return 0;
 }

 if (!VAR_2) {
  FUNC_3("HDD protection not available or using SSD\n");
  return 0;
 }

 return 1;
}
