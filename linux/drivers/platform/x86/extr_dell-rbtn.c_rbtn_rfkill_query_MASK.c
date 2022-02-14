
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct rfkill*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_0, void *VAR_1)
{
 struct acpi_device *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return;

 FUNC_1(VAR_0, VAR_3, VAR_3);
}
