
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sam9_rtc {int irq; TYPE_1__* sclk; TYPE_1__* rtcdev; TYPE_1__* gpbr; int gpbr_offset; TYPE_1__* rtt; int lock; } ;
struct resource {int dummy; } ;
struct TYPE_22__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_phandle_args {int * args; int np; } ;
struct TYPE_21__ {int dev; int range_max; int * ops; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,char*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,int) ;
 TYPE_1__* FUNC_11 (TYPE_4__*,int *) ;
 TYPE_1__* FUNC_12 (TYPE_4__*,struct resource*) ;
 struct sam9_rtc* FUNC_13 (TYPE_4__*,int,int ) ;
 int FUNC_14 (TYPE_4__*,int,int ,int,int ,struct sam9_rtc*) ;
 TYPE_1__* FUNC_15 (TYPE_4__*) ;
 scalar_t__ FUNC_16 (struct sam9_rtc*) ;
 int FUNC_17 (struct sam9_rtc*,int ) ;
 int FUNC_18 (int ,char*,int,int ,struct of_phandle_args*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct sam9_rtc*) ;
 int FUNC_22 (TYPE_1__*) ;
 unsigned int FUNC_23 (struct sam9_rtc*,int ) ;
 int FUNC_24 (struct sam9_rtc*,int ,unsigned int) ;
 int FUNC_25 (int *) ;
 TYPE_1__* FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_14)
{
 struct resource *VAR_15;
 struct sam9_rtc *VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19;
 unsigned int VAR_20;
 struct of_phandle_args VAR_21;

 VAR_18 = FUNC_19(VAR_14, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16 = FUNC_13(&VAR_14->dev, sizeof(*VAR_16), VAR_6);
 if (!VAR_16)
  return -VAR_5;

 FUNC_25(&VAR_16->lock);
 VAR_16->irq = VAR_18;


 if (!FUNC_9(&VAR_14->dev))
  FUNC_10(&VAR_14->dev, 1);

 FUNC_21(VAR_14, VAR_16);

 VAR_15 = FUNC_20(VAR_14, VAR_7, 0);
 VAR_16->rtt = FUNC_12(&VAR_14->dev, VAR_15);
 if (FUNC_0(VAR_16->rtt))
  return FUNC_1(VAR_16->rtt);

 VAR_17 = FUNC_18(VAR_14->dev.of_node,
            "atmel,rtt-rtc-time-reg", 1, 0,
            &VAR_21);
 if (VAR_17)
  return VAR_17;

 VAR_16->gpbr = FUNC_26(VAR_21.np);
 VAR_16->gpbr_offset = VAR_21.args[0];
 if (FUNC_0(VAR_16->gpbr)) {
  FUNC_6(&VAR_14->dev, "failed to retrieve gpbr regmap, aborting.\n");
  return -VAR_5;
 }

 VAR_16->sclk = FUNC_11(&VAR_14->dev, ((void*)0));
 if (FUNC_0(VAR_16->sclk))
  return FUNC_1(VAR_16->sclk);

 VAR_17 = FUNC_4(VAR_16->sclk);
 if (VAR_17) {
  FUNC_6(&VAR_14->dev, "Could not enable slow clock\n");
  return VAR_17;
 }

 VAR_20 = FUNC_3(VAR_16->sclk);
 if (!VAR_20 || VAR_20 > VAR_1) {
  FUNC_6(&VAR_14->dev, "Invalid slow clock rate\n");
  VAR_17 = -VAR_4;
  goto err_clk;
 }

 VAR_19 = FUNC_23(VAR_16, VAR_10);


 if ((VAR_19 & VAR_1) != VAR_20) {
  VAR_19 = VAR_3 | (VAR_20 & VAR_1);
  FUNC_17(VAR_16, 0);
 }


 VAR_19 &= ~(VAR_0 | VAR_2);
 FUNC_24(VAR_16, VAR_10, VAR_19);

 VAR_16->rtcdev = FUNC_15(&VAR_14->dev);
 if (FUNC_0(VAR_16->rtcdev)) {
  VAR_17 = FUNC_1(VAR_16->rtcdev);
  goto err_clk;
 }

 VAR_16->rtcdev->ops = &VAR_13;
 VAR_16->rtcdev->range_max = VAR_11;


 VAR_17 = FUNC_14(&VAR_14->dev, VAR_16->irq, VAR_12,
          VAR_9 | VAR_8,
          FUNC_7(&VAR_16->rtcdev->dev), VAR_16);
 if (VAR_17) {
  FUNC_5(&VAR_14->dev, "can't share IRQ %d?\n", VAR_16->irq);
  goto err_clk;
 }







 if (FUNC_16(VAR_16) == 0)
  FUNC_8(&VAR_14->dev, "%s: SET TIME!\n",
    FUNC_7(&VAR_16->rtcdev->dev));

 return FUNC_22(VAR_16->rtcdev);

err_clk:
 FUNC_2(VAR_16->sclk);

 return VAR_17;
}
