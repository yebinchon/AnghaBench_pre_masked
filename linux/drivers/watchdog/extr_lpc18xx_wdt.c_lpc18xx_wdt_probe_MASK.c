
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_7__ {int max_timeout; struct device* parent; int timeout; int min_timeout; int * ops; int * info; } ;
struct lpc18xx_wdt_dev {int clk_rate; TYPE_1__ wdt_dev; int timer; int lock; void* wdt_clk; void* reg_clk; void* base; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct lpc18xx_wdt_dev*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,int ,void*) ;
 void* FUNC_8 (struct device*,char*) ;
 struct lpc18xx_wdt_dev* FUNC_9 (struct device*,int,int ) ;
 void* FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct device*,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int,int ) ;
 int VAR_12 ;
 int FUNC_13 (struct platform_device*,struct lpc18xx_wdt_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (TYPE_1__*,int ,struct device*) ;
 int FUNC_17 (TYPE_1__*,struct lpc18xx_wdt_dev*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_13)
{
 struct lpc18xx_wdt_dev *VAR_14;
 struct device *VAR_15 = &VAR_13->dev;
 int VAR_16;

 VAR_14 = FUNC_9(VAR_15, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->base = FUNC_10(VAR_13, 0);
 if (FUNC_1(VAR_14->base))
  return FUNC_2(VAR_14->base);

 VAR_14->reg_clk = FUNC_8(VAR_15, "reg");
 if (FUNC_1(VAR_14->reg_clk)) {
  FUNC_6(VAR_15, "failed to get the reg clock\n");
  return FUNC_2(VAR_14->reg_clk);
 }

 VAR_14->wdt_clk = FUNC_8(VAR_15, "wdtclk");
 if (FUNC_1(VAR_14->wdt_clk)) {
  FUNC_6(VAR_15, "failed to get the wdt clock\n");
  return FUNC_2(VAR_14->wdt_clk);
 }

 VAR_16 = FUNC_5(VAR_14->reg_clk);
 if (VAR_16) {
  FUNC_6(VAR_15, "could not prepare or enable sys clock\n");
  return VAR_16;
 }
 VAR_16 = FUNC_7(VAR_15, VAR_8,
           VAR_14->reg_clk);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_14->wdt_clk);
 if (VAR_16) {
  FUNC_6(VAR_15, "could not prepare or enable wdt clock\n");
  return VAR_16;
 }
 VAR_16 = FUNC_7(VAR_15, VAR_8,
           VAR_14->wdt_clk);
 if (VAR_16)
  return VAR_16;


 VAR_14->clk_rate = FUNC_4(VAR_14->wdt_clk);
 if (VAR_14->clk_rate == 0) {
  FUNC_6(VAR_15, "failed to get clock rate\n");
  return -VAR_0;
 }

 VAR_14->wdt_dev.info = &VAR_9;
 VAR_14->wdt_dev.ops = &VAR_10;

 VAR_14->wdt_dev.min_timeout = FUNC_0(VAR_6 *
    VAR_3, VAR_14->clk_rate);

 VAR_14->wdt_dev.max_timeout = (VAR_5 *
    VAR_3) / VAR_14->clk_rate;

 VAR_14->wdt_dev.timeout = FUNC_12(VAR_14->wdt_dev.max_timeout,
        VAR_4);

 FUNC_14(&VAR_14->lock);

 VAR_14->wdt_dev.parent = VAR_15;
 FUNC_17(&VAR_14->wdt_dev, VAR_14);

 FUNC_16(&VAR_14->wdt_dev, VAR_7, VAR_15);

 FUNC_3(VAR_14);

 FUNC_15(&VAR_14->timer, VAR_11, 0);

 FUNC_18(&VAR_14->wdt_dev, VAR_12);
 FUNC_19(&VAR_14->wdt_dev, 128);

 FUNC_13(VAR_13, VAR_14);

 FUNC_20(&VAR_14->wdt_dev);
 return FUNC_11(VAR_15, &VAR_14->wdt_dev);
}
