
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_2)
{
 acpi_status VAR_3;
 u64 VAR_4;






 VAR_3 = FUNC_1(VAR_2, "_STA", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_3)) {
  FUNC_2("ACPI call to query Bluetooth presence failed\n");
  return -VAR_1;
 }

 if (!VAR_4) {
  FUNC_3("Bluetooth device not present\n");
  return -VAR_0;
 }

 return 0;
}
