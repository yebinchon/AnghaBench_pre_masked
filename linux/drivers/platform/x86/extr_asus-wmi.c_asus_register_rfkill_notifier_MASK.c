
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ,int ,int ,struct asus_wmi*) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(struct asus_wmi *VAR_3, char *VAR_4)
{
 acpi_status VAR_5;
 acpi_handle VAR_6;

 VAR_5 = FUNC_1(((void*)0), VAR_4, &VAR_6);
 if (FUNC_0(VAR_5))
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_6, VAR_0,
          VAR_2, VAR_3);
 if (FUNC_0(VAR_5))
  FUNC_3("Failed to register notify on %s\n", VAR_4);

 return 0;
}
