
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int cm_supported; int handle; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 char** VAR_2 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct eeepc_laptop *VAR_3, int VAR_4,
         acpi_handle *VAR_5)
{
 const char *VAR_6 = VAR_2[VAR_4];
 acpi_status VAR_7;

 if (VAR_6 == ((void*)0))
  return -VAR_1;
 if ((VAR_3->cm_supported & (0x1 << VAR_4)) == 0)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_3->handle, (char *)VAR_6,
     VAR_5);
 if (VAR_7 != VAR_0) {
  FUNC_1("Error finding %s\n", VAR_6);
  return -VAR_1;
 }
 return 0;
}
