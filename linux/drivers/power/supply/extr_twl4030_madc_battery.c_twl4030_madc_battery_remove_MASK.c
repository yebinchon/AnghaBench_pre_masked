
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_madc_battery {int channel_temp; int channel_ichg; int channel_vbat; int psy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct twl4030_madc_battery* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct twl4030_madc_battery *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->psy);

 FUNC_0(VAR_1->channel_vbat);
 FUNC_0(VAR_1->channel_ichg);
 FUNC_0(VAR_1->channel_temp);

 return 0;
}
