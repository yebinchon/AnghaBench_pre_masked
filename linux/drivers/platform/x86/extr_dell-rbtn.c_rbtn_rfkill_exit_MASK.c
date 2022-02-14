
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtn_data {int * rfkill; } ;
struct acpi_device {struct rbtn_data* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_0)
{
 struct rbtn_data *VAR_1 = VAR_0->driver_data;

 if (!VAR_1->rfkill)
  return;

 FUNC_1(VAR_1->rfkill);
 FUNC_0(VAR_1->rfkill);
 VAR_1->rfkill = ((void*)0);
}
