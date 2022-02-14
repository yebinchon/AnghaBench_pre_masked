
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface_button {int input; } ;
struct acpi_device {int dummy; } ;


 struct surface_button* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct surface_button*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct surface_button *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->input);
 FUNC_2(VAR_1);
 return 0;
}
