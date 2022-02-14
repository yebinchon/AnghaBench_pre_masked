
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_madc_bat_calibration {int voltage; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 return ((struct twl4030_madc_bat_calibration *)VAR_1)->voltage -
  ((struct twl4030_madc_bat_calibration *)VAR_0)->voltage;
}
