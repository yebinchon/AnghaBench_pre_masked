
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int min_timeout; struct device* parent; int bootstatus; int timeout; int max_timeout; } ;
struct s3c2410_wdt {scalar_t__ clock; TYPE_1__ wdt_device; scalar_t__ reg_base; scalar_t__ pmureg; TYPE_11__* drv_data; int lock; struct device* dev; } ;
struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_12__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,...) ;
 scalar_t__ FUNC_6 (struct device*,char*) ;
 struct s3c2410_wdt* FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,int ,int ,int ,int ,struct platform_device*) ;
 int VAR_10 ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct s3c2410_wdt*) ;
 unsigned int FUNC_12 (scalar_t__) ;
 TYPE_11__* FUNC_13 (struct platform_device*) ;
 TYPE_1__ VAR_11 ;
 int FUNC_14 (struct s3c2410_wdt*) ;
 int FUNC_15 (struct s3c2410_wdt*) ;
 int FUNC_16 (struct s3c2410_wdt*) ;
 int VAR_12 ;
 int FUNC_17 (struct s3c2410_wdt*,int) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int ,char*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_24 (TYPE_1__*,int ,struct device*) ;
 int FUNC_25 (TYPE_1__*) ;
 int FUNC_26 (TYPE_1__*,struct s3c2410_wdt*) ;
 int FUNC_27 (TYPE_1__*,int ) ;
 int FUNC_28 (TYPE_1__*,int) ;
 int FUNC_29 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct s3c2410_wdt *VAR_17;
 struct resource *VAR_18;
 unsigned int VAR_19;
 int VAR_20 = 0;
 int VAR_21;

 VAR_17 = FUNC_7(VAR_16, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->dev = VAR_16;
 FUNC_22(&VAR_17->lock);
 VAR_17->wdt_device = VAR_11;

 VAR_17->drv_data = FUNC_13(VAR_15);
 if (VAR_17->drv_data->quirks & VAR_4) {
  VAR_17->pmureg = FUNC_23(VAR_16->of_node,
      "samsung,syscon-phandle");
  if (FUNC_0(VAR_17->pmureg)) {
   FUNC_4(VAR_16, "syscon regmap lookup failed.\n");
   return FUNC_1(VAR_17->pmureg);
  }
 }

 VAR_18 = FUNC_10(VAR_15, VAR_3, 0);
 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_16, "no irq resource specified\n");
  VAR_21 = -VAR_0;
  goto err;
 }


 VAR_17->reg_base = FUNC_8(VAR_15, 0);
 if (FUNC_0(VAR_17->reg_base)) {
  VAR_21 = FUNC_1(VAR_17->reg_base);
  goto err;
 }

 VAR_17->clock = FUNC_6(VAR_16, "watchdog");
 if (FUNC_0(VAR_17->clock)) {
  FUNC_4(VAR_16, "failed to find watchdog clock source\n");
  VAR_21 = FUNC_1(VAR_17->clock);
  goto err;
 }

 VAR_21 = FUNC_3(VAR_17->clock);
 if (VAR_21 < 0) {
  FUNC_4(VAR_16, "failed to enable clock\n");
  return VAR_21;
 }

 VAR_17->wdt_device.min_timeout = 1;
 VAR_17->wdt_device.max_timeout = FUNC_18(VAR_17->clock);

 VAR_21 = FUNC_15(VAR_17);
 if (VAR_21 < 0) {
  FUNC_4(VAR_16, "failed to register cpufreq\n");
  goto err_clk;
 }

 FUNC_26(&VAR_17->wdt_device, VAR_17);




 FUNC_24(&VAR_17->wdt_device, VAR_14, VAR_16);
 VAR_21 = FUNC_19(&VAR_17->wdt_device,
     VAR_17->wdt_device.timeout);
 if (VAR_21) {
  VAR_20 = FUNC_19(&VAR_17->wdt_device,
     VAR_5);

  if (VAR_20 == 0)
   FUNC_5(VAR_16,
     "tmr_margin value out of range, default %d used\n",
     VAR_5);
  else
   FUNC_5(VAR_16, "default timer value is out of range, cannot start\n");
 }

 VAR_21 = FUNC_9(VAR_16, VAR_18->start, VAR_12, 0,
    VAR_15->name, VAR_15);
 if (VAR_21 != 0) {
  FUNC_4(VAR_16, "failed to install irq (%d)\n", VAR_21);
  goto err_cpufreq;
 }

 FUNC_27(&VAR_17->wdt_device, VAR_10);
 FUNC_28(&VAR_17->wdt_device, 128);

 VAR_17->wdt_device.bootstatus = FUNC_16(VAR_17);
 VAR_17->wdt_device.parent = VAR_16;

 VAR_21 = FUNC_25(&VAR_17->wdt_device);
 if (VAR_21)
  goto err_cpufreq;

 VAR_21 = FUNC_17(VAR_17, 0);
 if (VAR_21 < 0)
  goto err_unregister;

 if (VAR_13 && VAR_20 == 0) {
  FUNC_5(VAR_16, "starting watchdog timer\n");
  FUNC_20(&VAR_17->wdt_device);
 } else if (!VAR_13) {




  FUNC_21(&VAR_17->wdt_device);
 }

 FUNC_11(VAR_15, VAR_17);



 VAR_19 = FUNC_12(VAR_17->reg_base + VAR_6);

 FUNC_5(VAR_16, "watchdog %sactive, reset %sabled, irq %sabled\n",
   (VAR_19 & VAR_7) ? "" : "in",
   (VAR_19 & VAR_9) ? "en" : "dis",
   (VAR_19 & VAR_8) ? "en" : "dis");

 return 0;

 err_unregister:
 FUNC_29(&VAR_17->wdt_device);

 err_cpufreq:
 FUNC_14(VAR_17);

 err_clk:
 FUNC_2(VAR_17->clock);

 err:
 return VAR_21;
}
