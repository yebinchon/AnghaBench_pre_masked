
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device_id {int driver_data; } ;
struct TYPE_19__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct of_device_id {scalar_t__ data; } ;
struct jz4740_rtc {int type; scalar_t__ irq; int reset_pin_assert_time; int min_wakeup_pin_assert_time; TYPE_1__* rtc; int lock; TYPE_1__* clk; TYPE_1__* base; } ;
struct device_node {int dummy; } ;
typedef enum jz4740_rtc_type { ____Placeholder_jz4740_rtc_type } jz4740_rtc_type ;
struct TYPE_18__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,char*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*,struct resource*) ;
 struct jz4740_rtc* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ,int ,int ,struct jz4740_rtc*) ;
 TYPE_1__* FUNC_10 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_11 (struct device_node*) ;
 struct of_device_id* FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (struct device_node*,char*,int*) ;
 struct platform_device_id* FUNC_14 (struct platform_device*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct jz4740_rtc*) ;
 scalar_t__ VAR_10 ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_11)
{
 int VAR_12;
 struct jz4740_rtc *VAR_13;
 struct resource *VAR_14;
 const struct platform_device_id *VAR_15 = FUNC_14(VAR_11);
 const struct of_device_id *VAR_16 = FUNC_12(
   VAR_7, &VAR_11->dev);
 struct device_node *VAR_17 = VAR_11->dev.of_node;

 VAR_13 = FUNC_8(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 if (VAR_16)
  VAR_13->type = (enum jz4740_rtc_type)VAR_16->data;
 else
  VAR_13->type = VAR_15->driver_data;

 VAR_13->irq = FUNC_15(VAR_11, 0);
 if (VAR_13->irq < 0)
  return -VAR_0;

 VAR_14 = FUNC_16(VAR_11, VAR_3, 0);
 VAR_13->base = FUNC_7(&VAR_11->dev, VAR_14);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_13->clk = FUNC_6(&VAR_11->dev, "rtc");
 if (FUNC_0(VAR_13->clk)) {
  FUNC_2(&VAR_11->dev, "Failed to get RTC clock\n");
  return FUNC_1(VAR_13->clk);
 }

 FUNC_19(&VAR_13->lock);

 FUNC_17(VAR_11, VAR_13);

 FUNC_5(&VAR_11->dev, 1);

 VAR_12 = FUNC_3(&VAR_11->dev, VAR_13->irq);
 if (VAR_12) {
  FUNC_2(&VAR_11->dev, "Failed to set wake irq: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_13->rtc = FUNC_10(&VAR_11->dev);
 if (FUNC_0(VAR_13->rtc)) {
  VAR_12 = FUNC_1(VAR_13->rtc);
  FUNC_2(&VAR_11->dev, "Failed to allocate rtc device: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_13->rtc->ops = &VAR_8;
 VAR_13->rtc->range_max = VAR_4;

 VAR_12 = FUNC_18(VAR_13->rtc);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_9(&VAR_11->dev, VAR_13->irq, VAR_6, 0,
    VAR_11->name, VAR_13);
 if (VAR_12) {
  FUNC_2(&VAR_11->dev, "Failed to request rtc irq: %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_17 && FUNC_11(VAR_17)) {
  if (!VAR_10) {

   VAR_13->reset_pin_assert_time = 60;
   FUNC_13(VAR_17, "reset-pin-assert-time-ms",
          &VAR_13->reset_pin_assert_time);


   VAR_13->min_wakeup_pin_assert_time = 100;
   FUNC_13(VAR_17,
          "min-wakeup-pin-assert-time-ms",
          &VAR_13->min_wakeup_pin_assert_time);

   VAR_5 = &VAR_11->dev;
   VAR_10 = VAR_9;
  } else {
   FUNC_4(&VAR_11->dev,
     "Poweroff handler already present!\n");
  }
 }

 return 0;
}
