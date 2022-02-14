
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_1, char *VAR_2,
          int *VAR_3)
{
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return -VAR_0;

 *VAR_3 = FUNC_1(VAR_4);

 return 0;
}
