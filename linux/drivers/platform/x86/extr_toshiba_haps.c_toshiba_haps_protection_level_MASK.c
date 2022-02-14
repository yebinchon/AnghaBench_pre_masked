
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(acpi_handle VAR_1, int VAR_2)
{
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_1, "PTLV", VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_3("Error while setting the protection level\n");
  return -VAR_0;
 }

 FUNC_2("HDD protection level set to: %d\n", VAR_2);

 return 0;
}
