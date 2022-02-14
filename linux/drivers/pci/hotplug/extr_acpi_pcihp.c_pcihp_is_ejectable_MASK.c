
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_0)
{
 acpi_status VAR_1;
 unsigned long long VAR_2;
 if (!FUNC_2(VAR_0, "_ADR"))
  return 0;
 if (FUNC_2(VAR_0, "_EJ0"))
  return 1;
 VAR_1 = FUNC_1(VAR_0, "_RMV", ((void*)0), &VAR_2);
 if (FUNC_0(VAR_1) && VAR_2)
  return 1;
 return 0;
}
