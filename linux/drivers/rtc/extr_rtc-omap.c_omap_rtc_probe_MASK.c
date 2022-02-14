
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int u8 ;
struct resource {int dummy; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct TYPE_35__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct omap_rtc {int is_pmic_controller; scalar_t__ irq_timer; scalar_t__ irq_alarm; int has_ext_clk; TYPE_1__* type; TYPE_2__* clk; TYPE_2__* pctldev; TYPE_2__* rtc; TYPE_2__* base; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_34__ {struct omap_rtc* priv; } ;
struct TYPE_33__ {int name; } ;
struct TYPE_32__ {TYPE_6__ dev; int range_max; int range_min; int * ops; } ;
struct TYPE_31__ {int (* lock ) (struct omap_rtc*) ;scalar_t__ has_power_up_reset; scalar_t__ has_pmic_mode; scalar_t__ has_32kclk_en; int (* unlock ) (struct omap_rtc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_6__*,char*) ;
 int FUNC_5 (TYPE_6__*,char*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,int) ;
 void* FUNC_8 (TYPE_6__*,char*) ;
 TYPE_2__* FUNC_9 (TYPE_6__*,struct resource*) ;
 struct omap_rtc* FUNC_10 (TYPE_6__*,int,int ) ;
 int FUNC_11 (TYPE_6__*,scalar_t__,int ,int ,int ,struct omap_rtc*) ;
 TYPE_2__* FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (int ) ;
 struct of_device_id* FUNC_14 (int ,TYPE_6__*) ;
 TYPE_5__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 struct omap_rtc* VAR_23 ;
 TYPE_2__* FUNC_15 (TYPE_3__*,TYPE_6__*,struct omap_rtc*) ;
 int FUNC_16 (TYPE_2__*) ;
 struct platform_device_id* FUNC_17 (struct platform_device*) ;
 void* FUNC_18 (struct platform_device*,int) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct omap_rtc*) ;
 scalar_t__ VAR_24 ;
 int FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (TYPE_6__*) ;
 int FUNC_24 (TYPE_6__*) ;
 int VAR_25 ;
 int FUNC_25 (TYPE_2__*,TYPE_5__*) ;
 TYPE_3__ VAR_26 ;
 int FUNC_26 (struct omap_rtc*,int ) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (struct omap_rtc*,int ,int) ;
 int FUNC_29 (struct omap_rtc*,int ,int) ;
 int FUNC_30 (struct omap_rtc*) ;
 int FUNC_31 (struct omap_rtc*) ;
 int FUNC_32 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_33(struct platform_device *VAR_27)
{
 struct omap_rtc *VAR_28;
 struct resource *VAR_29;
 u8 VAR_30, VAR_31, VAR_32;
 const struct platform_device_id *VAR_33;
 const struct of_device_id *VAR_34;
 int VAR_35;

 VAR_28 = FUNC_10(&VAR_27->dev, sizeof(*VAR_28), VAR_2);
 if (!VAR_28)
  return -VAR_1;

 VAR_34 = FUNC_14(VAR_20, &VAR_27->dev);
 if (VAR_34) {
  VAR_28->type = VAR_34->data;
  VAR_28->is_pmic_controller = VAR_28->type->has_pmic_mode &&
   FUNC_13(VAR_27->dev.of_node);
 } else {
  VAR_33 = FUNC_17(VAR_27);
  VAR_28->type = (void *)VAR_33->driver_data;
 }

 VAR_28->irq_timer = FUNC_18(VAR_27, 0);
 if (VAR_28->irq_timer <= 0)
  return -VAR_0;

 VAR_28->irq_alarm = FUNC_18(VAR_27, 1);
 if (VAR_28->irq_alarm <= 0)
  return -VAR_0;

 VAR_28->clk = FUNC_8(&VAR_27->dev, "ext-clk");
 if (!FUNC_0(VAR_28->clk))
  VAR_28->has_ext_clk = 1;
 else
  VAR_28->clk = FUNC_8(&VAR_27->dev, "int-clk");

 if (!FUNC_0(VAR_28->clk))
  FUNC_3(VAR_28->clk);

 VAR_29 = FUNC_19(VAR_27, VAR_3, 0);
 VAR_28->base = FUNC_9(&VAR_27->dev, VAR_29);
 if (FUNC_0(VAR_28->base)) {
  FUNC_2(VAR_28->clk);
  return FUNC_1(VAR_28->base);
 }

 FUNC_20(VAR_27, VAR_28);


 FUNC_22(&VAR_27->dev);
 FUNC_23(&VAR_27->dev);

 VAR_28->type->unlock(VAR_28);






 FUNC_29(VAR_28, VAR_8, 0);


 if (VAR_28->type->has_32kclk_en) {
  VAR_30 = FUNC_26(VAR_28, VAR_11);
  FUNC_29(VAR_28, VAR_11,
    VAR_30 | VAR_9);
 }


 VAR_30 = FUNC_26(VAR_28, VAR_16);

 VAR_31 = VAR_13;

 if (VAR_28->type->has_pmic_mode)
  VAR_31 |= VAR_14;

 if (VAR_28->type->has_power_up_reset) {
  VAR_31 |= VAR_15;
  if (VAR_30 & VAR_15)
   FUNC_5(&VAR_27->dev, "RTC power up reset detected\n");
 }

 if (VAR_30 & VAR_31)
  FUNC_28(VAR_28, VAR_16, VAR_30 & VAR_31);


 VAR_30 = FUNC_26(VAR_28, VAR_5);
 if (VAR_30 & VAR_7)
  FUNC_5(&VAR_27->dev, "already running\n");


 VAR_32 = VAR_30 & (VAR_6 | VAR_4);
 VAR_32 |= VAR_7;
 if (VAR_32 & VAR_6)
  FUNC_5(&VAR_27->dev, "split power mode\n");

 if (VAR_30 != VAR_32)
  FUNC_28(VAR_28, VAR_5, VAR_32);





 if (VAR_28->has_ext_clk) {
  VAR_30 = FUNC_26(VAR_28, VAR_11);
  VAR_30 &= ~VAR_10;
  VAR_30 |= VAR_9 | VAR_12;
  FUNC_29(VAR_28, VAR_11, VAR_30);
 }

 VAR_28->type->lock(VAR_28);

 FUNC_7(&VAR_27->dev, 1);

 VAR_28->rtc = FUNC_12(&VAR_27->dev);
 if (FUNC_0(VAR_28->rtc)) {
  VAR_35 = FUNC_1(VAR_28->rtc);
  goto err;
 }

 VAR_28->rtc->ops = &VAR_21;
 VAR_28->rtc->range_min = VAR_17;
 VAR_28->rtc->range_max = VAR_18;
 VAR_19.priv = VAR_28;


 VAR_35 = FUNC_11(&VAR_27->dev, VAR_28->irq_timer, VAR_25, 0,
   FUNC_6(&VAR_28->rtc->dev), VAR_28);
 if (VAR_35)
  goto err;

 if (VAR_28->irq_timer != VAR_28->irq_alarm) {
  VAR_35 = FUNC_11(&VAR_27->dev, VAR_28->irq_alarm, VAR_25, 0,
    FUNC_6(&VAR_28->rtc->dev), VAR_28);
  if (VAR_35)
   goto err;
 }


 VAR_26.name = FUNC_6(&VAR_27->dev);

 VAR_28->pctldev = FUNC_15(&VAR_26, &VAR_27->dev, VAR_28);
 if (FUNC_0(VAR_28->pctldev)) {
  FUNC_4(&VAR_27->dev, "Couldn't register pinctrl driver\n");
  VAR_35 = FUNC_1(VAR_28->pctldev);
  goto err;
 }

 VAR_35 = FUNC_27(VAR_28->rtc);
 if (VAR_35)
  goto err_deregister_pinctrl;

 FUNC_25(VAR_28->rtc, &VAR_19);

 if (VAR_28->is_pmic_controller) {
  if (!VAR_24) {
   VAR_23 = VAR_28;
   VAR_24 = VAR_22;
  }
 }

 return 0;

err_deregister_pinctrl:
 FUNC_16(VAR_28->pctldev);
err:
 FUNC_2(VAR_28->clk);
 FUNC_7(&VAR_27->dev, 0);
 VAR_28->type->lock(VAR_28);
 FUNC_24(&VAR_27->dev);
 FUNC_21(&VAR_27->dev);

 return VAR_35;
}
