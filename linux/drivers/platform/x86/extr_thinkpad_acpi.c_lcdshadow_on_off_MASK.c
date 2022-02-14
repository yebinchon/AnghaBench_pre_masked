
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,int *,char*,int) ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4(bool VAR_3)
{
 acpi_handle VAR_4;
 int VAR_5;

 if (FUNC_0(FUNC_2(VAR_1, "SSSS", &VAR_4))) {
  FUNC_3("Thinkpad ACPI has no %s interface.\n", "SSSS");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_4, &VAR_5, ((void*)0), "dd", (int)VAR_3))
  return -VAR_0;

 VAR_2 = VAR_3;
 return 0;
}
