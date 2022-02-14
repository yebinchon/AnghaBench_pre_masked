
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int timeout; struct device* parent; int max_timeout; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct asm9260_wdt_priv {size_t mode; scalar_t__ irq; int wdt_freq; struct watchdog_device wdd; int rst; int iobase; struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct asm9260_wdt_priv*) ;
 int FUNC_4 (struct asm9260_wdt_priv*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct device*,char*,int ,char const* const) ;
 int FUNC_6 (struct device*,char*) ;
 struct asm9260_wdt_priv* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,scalar_t__,int ,int ,int ,struct asm9260_wdt_priv*) ;
 int FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct device*,struct watchdog_device*) ;
 scalar_t__ FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (struct platform_device*,struct asm9260_wdt_priv*) ;
 int FUNC_14 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_15 (struct watchdog_device*,struct asm9260_wdt_priv*) ;
 int FUNC_16 (struct watchdog_device*,int) ;
 int FUNC_17 (struct watchdog_device*) ;
 int FUNC_18 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct asm9260_wdt_priv *VAR_9;
 struct watchdog_device *VAR_10;
 int VAR_11;
 static const char * const VAR_12[] = { "hw", "sw", "debug", };

 VAR_9 = FUNC_7(VAR_8, sizeof(struct asm9260_wdt_priv), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_8;

 VAR_9->iobase = FUNC_8(VAR_7, 0);
 if (FUNC_1(VAR_9->iobase))
  return FUNC_2(VAR_9->iobase);

 VAR_9->rst = FUNC_10(VAR_8, "wdt_rst");
 if (FUNC_1(VAR_9->rst))
  return FUNC_2(VAR_9->rst);

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_9->wdd;
 VAR_10->info = &VAR_4;
 VAR_10->ops = &VAR_6;
 VAR_10->min_timeout = 1;
 VAR_10->max_timeout = FUNC_0(VAR_9->wdt_freq);
 VAR_10->parent = VAR_8;

 FUNC_15(VAR_10, VAR_9);






 VAR_10->timeout = VAR_0;
 FUNC_14(VAR_10, 0, VAR_8);

 FUNC_4(VAR_9);

 if (VAR_9->mode != VAR_3)
  VAR_9->irq = FUNC_12(VAR_7, 0);

 if (VAR_9->irq > 0) {




  VAR_11 = FUNC_9(VAR_8, VAR_9->irq, VAR_5, 0,
           VAR_7->name, VAR_9);
  if (VAR_11 < 0)
   FUNC_6(VAR_8, "failed to request IRQ\n");
 }

 FUNC_16(VAR_10, 128);

 FUNC_17(VAR_10);
 FUNC_18(VAR_10);
 VAR_11 = FUNC_11(VAR_8, VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_13(VAR_7, VAR_9);

 FUNC_5(VAR_8, "Watchdog enabled (timeout: %d sec, mode: %s)\n",
   VAR_10->timeout, VAR_12[VAR_9->mode]);
 return 0;
}
