
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int min_timeout; int max_timeout; int timeout; int bootstatus; int status; struct device* parent; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ltq_wdt_priv {int clk_rate; struct watchdog_device wdt; int membase; } ;
struct ltq_wdt_hw {int (* bootstatus_get ) (struct device*) ;} ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 struct clk* FUNC_2 () ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct ltq_wdt_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct device*,struct watchdog_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct ltq_wdt_priv*,int ) ;
 int FUNC_9 (struct watchdog_device*) ;
 int VAR_10 ;
 struct ltq_wdt_hw* FUNC_10 (struct device*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_14 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct ltq_wdt_priv *VAR_13;
 struct watchdog_device *VAR_14;
 struct clk *VAR_15;
 const struct ltq_wdt_hw *VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_13 = FUNC_5(VAR_12, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->membase = FUNC_6(VAR_11, 0);
 if (FUNC_0(VAR_13->membase))
  return FUNC_1(VAR_13->membase);


 VAR_15 = FUNC_2();
 VAR_13->clk_rate = FUNC_3(VAR_15) / VAR_4;
 if (!VAR_13->clk_rate) {
  FUNC_4(VAR_12, "clock rate less than divider %i\n",
   VAR_4);
  return -VAR_0;
 }

 VAR_14 = &VAR_13->wdt;
 VAR_14->info = &VAR_8;
 VAR_14->ops = &VAR_9;
 VAR_14->min_timeout = 1;
 VAR_14->max_timeout = VAR_3 / VAR_13->clk_rate;
 VAR_14->timeout = VAR_14->max_timeout;
 VAR_14->parent = VAR_12;

 VAR_16 = FUNC_10(VAR_12);
 if (VAR_16 && VAR_16->bootstatus_get) {
  VAR_17 = VAR_16->bootstatus_get(VAR_12);
  if (VAR_17 >= 0)
   VAR_14->bootstatus = VAR_17;
 }

 FUNC_14(VAR_14, VAR_10);
 FUNC_13(VAR_14, 0, VAR_12);

 VAR_18 = FUNC_8(VAR_13, VAR_5);
 if (VAR_18 & VAR_6) {





  FUNC_9(VAR_14);
  FUNC_11(VAR_7, &VAR_14->status);
 }

 return FUNC_7(VAR_12, VAR_14);
}
