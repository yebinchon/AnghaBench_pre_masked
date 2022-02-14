
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_pwm_backlight_data {int max_brightness; unsigned int* levels; } ;


 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct platform_pwm_backlight_data *VAR_0)
{
 unsigned int VAR_1 = VAR_0->max_brightness + 1;
 unsigned int VAR_2 = VAR_0->levels[0];
 unsigned int VAR_3 = VAR_0->levels[VAR_1 - 1];





 unsigned int VAR_4 = (128 * (VAR_3 - VAR_2)) / VAR_1;
 unsigned int VAR_5 = (VAR_3 - VAR_2) / 20;
 int VAR_6;

 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  unsigned int VAR_7 = VAR_2 + ((VAR_6 * VAR_4) / 128);
  unsigned int VAR_8 = FUNC_0(VAR_7 - VAR_0->levels[VAR_6]);

  if (VAR_8 > VAR_5)
   return 0;
 }

 return 1;
}
