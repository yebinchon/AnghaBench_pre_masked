
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u32 ;
struct stmp3xxx_rtc_data {int irq_alarm; TYPE_1__* rtc; scalar_t__ io; } ;
struct resource {int start; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_13__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ) ;
 struct stmp3xxx_rtc_data* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,int ,char*,TYPE_3__*) ;
 TYPE_1__* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,char*,int*) ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct stmp3xxx_rtc_data*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_27)
{
 struct stmp3xxx_rtc_data *VAR_28;
 struct resource *VAR_29;
 u32 VAR_30;
 u32 VAR_31, VAR_32;
 u32 VAR_33 = 0;
 int VAR_34;

 VAR_28 = FUNC_6(&VAR_27->dev, sizeof(*VAR_28), VAR_4);
 if (!VAR_28)
  return -VAR_2;

 VAR_29 = FUNC_11(VAR_27, VAR_5, 0);
 if (!VAR_29) {
  FUNC_2(&VAR_27->dev, "failed to get resource\n");
  return -VAR_3;
 }

 VAR_28->io = FUNC_5(&VAR_27->dev, VAR_29->start, FUNC_14(VAR_29));
 if (!VAR_28->io) {
  FUNC_2(&VAR_27->dev, "ioremap failed\n");
  return -VAR_0;
 }

 VAR_28->irq_alarm = FUNC_10(VAR_27, 0);

 VAR_30 = FUNC_13(VAR_28->io + VAR_18);
 if (!(VAR_30 & VAR_19)) {
  FUNC_2(&VAR_27->dev, "no device onboard\n");
  return -VAR_1;
 }

 FUNC_12(VAR_27, VAR_28);






 if (FUNC_13(VAR_28->io + VAR_6) &
     VAR_9) {
  FUNC_3(&VAR_27->dev,
    "Watchdog is running, skip resetting rtc\n");
 } else {
  VAR_34 = FUNC_17(VAR_28->io);
  if (VAR_34) {
   FUNC_2(&VAR_27->dev, "stmp_reset_block failed: %d\n",
    VAR_34);
   return VAR_34;
  }
 }
 if (VAR_30 & VAR_20)
  VAR_33 = 32000;
 else if (VAR_30 & VAR_21)
  VAR_33 = 32768;

 FUNC_9(VAR_27->dev.of_node, "stmp,crystal-freq",
        &VAR_33);

 switch (VAR_33) {
 case 32000:

  VAR_31 = VAR_17 |
   VAR_16 |
   VAR_14;
  VAR_32 = VAR_15;
  break;
 case 32768:

  VAR_31 = VAR_16 |
   VAR_14;
  VAR_32 = VAR_15 |
   VAR_17;
  break;
 default:
  FUNC_4(&VAR_27->dev,
    "invalid crystal-freq specified in device-tree. Assuming no crystal\n");

 case 0:

  VAR_31 = VAR_15;
  VAR_32 = VAR_16 |
   VAR_14;
 }

 FUNC_18(VAR_31, VAR_28->io + VAR_10 +
   VAR_23);

 FUNC_18(VAR_11 |
   VAR_13 |
   VAR_12 | VAR_32,
  VAR_28->io + VAR_10 + VAR_22);

 FUNC_18(VAR_8 |
   VAR_7,
  VAR_28->io + VAR_6 + VAR_22);

 VAR_28->rtc = FUNC_8(&VAR_27->dev);
 if (FUNC_0(VAR_28->rtc))
  return FUNC_1(VAR_28->rtc);

 VAR_34 = FUNC_7(&VAR_27->dev, VAR_28->irq_alarm,
   VAR_25, 0, "RTC alarm", &VAR_27->dev);
 if (VAR_34) {
  FUNC_2(&VAR_27->dev, "Cannot claim IRQ%d\n",
   VAR_28->irq_alarm);
  return VAR_34;
 }

 VAR_28->rtc->ops = &VAR_26;
 VAR_28->rtc->range_max = VAR_24;

 VAR_34 = FUNC_15(VAR_28->rtc);
 if (VAR_34)
  return VAR_34;

 FUNC_16(VAR_27);
 return 0;
}
