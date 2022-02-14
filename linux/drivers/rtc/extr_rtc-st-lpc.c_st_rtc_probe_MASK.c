
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct st_rtc {TYPE_1__* clk; TYPE_1__* rtc_dev; int clkrate; int irq; TYPE_1__* ioaddr; int lock; } ;
struct resource {int dummy; } ;
struct TYPE_18__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_17__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,char*,...) ;
 int FUNC_7 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_8 (TYPE_3__*,struct resource*) ;
 struct st_rtc* FUNC_9 (TYPE_3__*,int,int ) ;
 int FUNC_10 (TYPE_3__*,int ,int ,int ,int ,struct st_rtc*) ;
 TYPE_1__* FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct device_node*,int ) ;
 int FUNC_16 (struct device_node*,char*,scalar_t__*) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct st_rtc*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 struct st_rtc *VAR_11;
 struct resource *VAR_12;
 uint32_t VAR_13;
 int VAR_14 = 0;

 VAR_14 = FUNC_16(VAR_10, "st,lpc-mode", &VAR_13);
 if (VAR_14) {
  FUNC_6(&VAR_9->dev, "An LPC mode must be provided\n");
  return -VAR_0;
 }


 if (VAR_13 != VAR_5)
  return -VAR_1;

 VAR_11 = FUNC_9(&VAR_9->dev, sizeof(struct st_rtc), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->rtc_dev = FUNC_11(&VAR_9->dev);
 if (FUNC_0(VAR_11->rtc_dev))
  return FUNC_1(VAR_11->rtc_dev);

 FUNC_20(&VAR_11->lock);

 VAR_12 = FUNC_17(VAR_9, VAR_4, 0);
 VAR_11->ioaddr = FUNC_8(&VAR_9->dev, VAR_12);
 if (FUNC_0(VAR_11->ioaddr))
  return FUNC_1(VAR_11->ioaddr);

 VAR_11->irq = FUNC_15(VAR_10, 0);
 if (!VAR_11->irq) {
  FUNC_6(&VAR_9->dev, "IRQ missing or invalid\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_10(&VAR_9->dev, VAR_11->irq, VAR_7, 0,
          VAR_9->name, VAR_11);
 if (VAR_14) {
  FUNC_6(&VAR_9->dev, "Failed to request irq %i\n", VAR_11->irq);
  return VAR_14;
 }

 FUNC_14(VAR_11->irq);
 FUNC_12(VAR_11->irq);

 VAR_11->clk = FUNC_3(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_6(&VAR_9->dev, "Unable to request clock\n");
  return FUNC_1(VAR_11->clk);
 }

 FUNC_5(VAR_11->clk);

 VAR_11->clkrate = FUNC_4(VAR_11->clk);
 if (!VAR_11->clkrate) {
  FUNC_6(&VAR_9->dev, "Unable to fetch clock rate\n");
  return -VAR_0;
 }

 FUNC_7(&VAR_9->dev, 1);

 FUNC_18(VAR_9, VAR_11);

 VAR_11->rtc_dev->ops = &VAR_8;
 VAR_11->rtc_dev->range_max = VAR_6;
 FUNC_13(VAR_11->rtc_dev->range_max, VAR_11->clkrate);

 VAR_14 = FUNC_19(VAR_11->rtc_dev);
 if (VAR_14) {
  FUNC_2(VAR_11->clk);
  return VAR_14;
 }

 return 0;
}
