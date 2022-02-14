
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_1)
{
 acpi_status VAR_2;

 VAR_2 = FUNC_1(VAR_1, "AUSB", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_2)) {
  FUNC_2("Could not attach USB Bluetooth device\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_1(VAR_1, "BTPO", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_2)) {
  FUNC_2("Could not power ON Bluetooth device\n");
  return -VAR_0;
 }

 return 0;
}
