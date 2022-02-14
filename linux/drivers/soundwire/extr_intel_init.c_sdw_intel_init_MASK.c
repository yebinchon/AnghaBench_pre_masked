
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_intel_res {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int,int ,int *,struct sdw_intel_res*,int *) ;
 int VAR_1 ;
 void* FUNC_2 (struct sdw_intel_res*) ;

void *FUNC_3(acpi_handle *VAR_2, struct sdw_intel_res *VAR_3)
{
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_0,
         VAR_2, 1,
         VAR_1,
         ((void*)0), VAR_3, ((void*)0));
 if (FUNC_0(VAR_4))
  return ((void*)0);

 return FUNC_2(VAR_3);
}
