
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct int3402_thermal_data {int int340x_zone; } ;
typedef int acpi_handle ;




 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct int3402_thermal_data *VAR_4 = VAR_3;

 if (!VAR_4)
  return;

 switch (VAR_2) {
 case 129:
  break;
 case 128:
  FUNC_0(VAR_4->int340x_zone,
         VAR_0);
  break;
 default:
  break;
 }
}
