
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; int min_timeout; int max_timeout; struct device* parent; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct jz4740_wdt_drvdata {struct watchdog_device wdt; int rtc_clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct jz4740_wdt_drvdata* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,struct watchdog_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct watchdog_device*,struct jz4740_wdt_drvdata*) ;
 int FUNC_8 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct jz4740_wdt_drvdata *VAR_10;
 struct watchdog_device *VAR_11;

 VAR_10 = FUNC_4(VAR_9, sizeof(struct jz4740_wdt_drvdata),
          VAR_2);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_4 < 1 || VAR_4 > VAR_3)
  VAR_4 = VAR_0;

 VAR_11 = &VAR_10->wdt;
 VAR_11->info = &VAR_5;
 VAR_11->ops = &VAR_6;
 VAR_11->timeout = VAR_4;
 VAR_11->min_timeout = 1;
 VAR_11->max_timeout = VAR_3;
 VAR_11->parent = VAR_9;
 FUNC_8(VAR_11, VAR_7);
 FUNC_7(VAR_11, VAR_10);

 VAR_10->base = FUNC_5(VAR_8, 0);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->rtc_clk = FUNC_3(VAR_9, "rtc");
 if (FUNC_0(VAR_10->rtc_clk)) {
  FUNC_2(VAR_9, "cannot find RTC clock\n");
  return FUNC_1(VAR_10->rtc_clk);
 }

 return FUNC_6(VAR_9, &VAR_10->wdt);
}
