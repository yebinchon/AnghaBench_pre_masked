
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (struct eeepc_laptop*,int ) ;

__attribute__((used)) static void FUNC_3(struct eeepc_laptop *VAR_1, char *VAR_2)
{
 acpi_status VAR_3 = VAR_0;
 acpi_handle VAR_4;

 VAR_3 = FUNC_1(((void*)0), VAR_2, &VAR_4);

 if (FUNC_0(VAR_3))
  FUNC_2(VAR_1, VAR_4);
}
