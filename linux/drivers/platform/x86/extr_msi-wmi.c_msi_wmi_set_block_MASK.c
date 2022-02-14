
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {int member_0; int* member_1; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2)
{
 acpi_status VAR_3;

 struct acpi_buffer VAR_4 = { sizeof(int), &VAR_2 };

 FUNC_1("Going to set block of instance: %d - value: %d\n",
   VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_4);

 return FUNC_0(VAR_3) ? 0 : 1;
}
