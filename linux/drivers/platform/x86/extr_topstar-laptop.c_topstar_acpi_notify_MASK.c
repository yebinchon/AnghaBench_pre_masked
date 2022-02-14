
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct topstar_laptop {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct topstar_laptop* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct topstar_laptop*,int) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_0, u32 VAR_1)
{
 struct topstar_laptop *VAR_2 = FUNC_0(VAR_0);
 static bool VAR_3[2];
 bool *VAR_4;


 if (VAR_1 == 0x83 || VAR_1 == 0x84) {
  VAR_4 = &VAR_3[VAR_1 - 0x83];
  if (*VAR_4) {
   *VAR_4 = 0;
   return;
  }
  *VAR_4 = 1;
 }

 FUNC_1(VAR_2, VAR_1);
}
