
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct imx2_wdt_device {int regmap; int ext_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 struct imx2_wdt_device* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static inline void FUNC_4(struct watchdog_device *VAR_5)
{
 struct imx2_wdt_device *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;

 FUNC_1(VAR_6->regmap, VAR_0, &VAR_7);


 VAR_7 |= VAR_2;

 VAR_7 &= ~VAR_4;

 if (!VAR_6->ext_reset)
  VAR_7 &= ~VAR_3;

 else
  VAR_7 |= VAR_3;

 VAR_7 &= ~VAR_1;

 VAR_7 |= FUNC_0(VAR_5->timeout);

 FUNC_2(VAR_6->regmap, VAR_0, VAR_7);


 VAR_7 |= VAR_1;
 FUNC_2(VAR_6->regmap, VAR_0, VAR_7);
}
