
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx2_wdt_device {int regmap; scalar_t__ ext_reset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct imx2_wdt_device* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4, unsigned long VAR_5,
       void *VAR_6)
{
 struct imx2_wdt_device *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8 = VAR_3;


 if (VAR_7->ext_reset)
  VAR_8 |= VAR_1;
 else
  VAR_8 |= VAR_2;


 FUNC_1(VAR_7->regmap, VAR_0, VAR_8);







 FUNC_1(VAR_7->regmap, VAR_0, VAR_8);
 FUNC_1(VAR_7->regmap, VAR_0, VAR_8);


 FUNC_0(500);

 return 0;
}
