
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct eeepc_laptop*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(struct eeepc_laptop *VAR_3,
          char *VAR_4)
{
 acpi_status VAR_5 = VAR_1;
 acpi_handle VAR_6;

 VAR_5 = FUNC_1(((void*)0), VAR_4, &VAR_6);

 if (FUNC_0(VAR_5))
  return;

 VAR_5 = FUNC_2(VAR_6,
          VAR_0,
          VAR_2);
 if (FUNC_0(VAR_5))
  FUNC_4("Error removing rfkill notify handler %s\n",
   VAR_4);





 FUNC_3(VAR_3, VAR_6);
}
