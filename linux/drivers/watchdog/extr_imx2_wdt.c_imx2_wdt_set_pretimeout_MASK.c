
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int pretimeout; } ;
struct imx2_wdt_device {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 struct imx2_wdt_device* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_5,
       unsigned int VAR_6)
{
 struct imx2_wdt_device *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6 >= VAR_1)
  return -VAR_0;

 VAR_5->pretimeout = VAR_6;

 FUNC_0(VAR_7->regmap, VAR_2,
      VAR_4 | VAR_3,
      VAR_4 | (VAR_6 << 1));
 return 0;
}
