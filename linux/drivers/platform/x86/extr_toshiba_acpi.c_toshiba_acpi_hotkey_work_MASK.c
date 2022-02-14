
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_0)
{
 acpi_handle VAR_1 = FUNC_2();
 acpi_status VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1, "NTFY", ((void*)0), ((void*)0));
 if (FUNC_0(VAR_2))
  FUNC_3("ACPI NTFY method execution failed\n");
}
