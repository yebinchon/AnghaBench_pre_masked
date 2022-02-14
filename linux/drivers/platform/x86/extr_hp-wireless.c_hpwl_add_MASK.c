
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1)
  FUNC_1("Failed to setup hp wireless hotkeys\n");

 return VAR_1;
}
