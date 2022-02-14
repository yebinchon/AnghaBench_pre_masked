
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(acpi_handle VAR_2, const char *VAR_3,
        acpi_handle *VAR_4)
{
 acpi_status VAR_5;

 if (VAR_3 == ((void*)0))
  return -VAR_1;

 if (VAR_4)
  VAR_5 = FUNC_0(VAR_2, (char *)VAR_3,
      VAR_4);
 else {
  acpi_handle VAR_6;

  VAR_5 = FUNC_0(VAR_2, (char *)VAR_3,
      &VAR_6);
 }

 if (VAR_5 != VAR_0) {
  if (VAR_4)
   FUNC_1("Error finding %s\n", VAR_3);
  return -VAR_1;
 }
 return 0;
}
