
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct imx_thermal_data {char* temp_grade; int temp_max; int temp_critical; int temp_passive; } ;


 struct imx_thermal_data* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0, u32 VAR_1)
{
 struct imx_thermal_data *VAR_2 = FUNC_0(VAR_0);


 switch ((VAR_1 >> 6) & 0x3) {
 case 0:
  VAR_2->temp_grade = "Commercial";
  VAR_2->temp_max = 95000;
  break;
 case 1:
  VAR_2->temp_grade = "Extended Commercial";
  VAR_2->temp_max = 105000;
  break;
 case 2:
  VAR_2->temp_grade = "Industrial";
  VAR_2->temp_max = 105000;
  break;
 case 3:
  VAR_2->temp_grade = "Automotive";
  VAR_2->temp_max = 125000;
  break;
 }





 VAR_2->temp_critical = VAR_2->temp_max - (1000 * 5);
 VAR_2->temp_passive = VAR_2->temp_max - (1000 * 10);
}
