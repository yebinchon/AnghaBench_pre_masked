
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wm8350_platform_data {int (* init ) (struct wm8350*) ;} ;
struct TYPE_14__ {int pdev; } ;
struct TYPE_13__ {int pdev; } ;
struct TYPE_12__ {int rev_g_coeff; int pdev; } ;
struct TYPE_11__ {int pdev; } ;
struct TYPE_10__ {int pdev; } ;
struct TYPE_9__ {int pdev; } ;
struct TYPE_8__ {void* max_isink; void* max_dcdc; } ;
struct wm8350 {TYPE_7__ wdt; TYPE_6__ rtc; TYPE_5__ power; TYPE_4__ hwmon; TYPE_3__ gpio; TYPE_2__ codec; int dev; scalar_t__ irq_base; int auxadc_done; int auxadc_mutex; TYPE_1__ pmic; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;




 int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,struct wm8350*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (scalar_t__,int *,int ,int ,char*,struct wm8350*) ;
 int FUNC_8 (struct wm8350*) ;
 int VAR_14 ;
 int FUNC_9 (struct wm8350*,char*,int *) ;
 int FUNC_10 (struct wm8350*) ;
 int FUNC_11 (struct wm8350*,int,struct wm8350_platform_data*) ;
 int FUNC_12 (struct wm8350*,int ,int) ;

int FUNC_13(struct wm8350 *VAR_15, int VAR_16,
         struct wm8350_platform_data *VAR_17)
{
 int VAR_18;
 unsigned int VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;

 FUNC_2(VAR_15->dev, VAR_15);


 VAR_18 = FUNC_6(VAR_15->regmap, VAR_11, &VAR_19);
 if (VAR_18 != 0) {
  FUNC_0(VAR_15->dev, "Failed to read ID: %d\n", VAR_18);
  goto err;
 }

 VAR_18 = FUNC_6(VAR_15->regmap, VAR_7, &VAR_20);
 if (VAR_18 != 0) {
  FUNC_0(VAR_15->dev, "Failed to read ID: %d\n", VAR_18);
  goto err;
 }

 VAR_18 = FUNC_6(VAR_15->regmap, VAR_12, &VAR_21);
 if (VAR_18 != 0) {
  FUNC_0(VAR_15->dev, "Failed to read revision: %d\n", VAR_18);
  goto err;
 }

 if (VAR_19 != 0x6143) {
  FUNC_0(VAR_15->dev,
   "Device with ID %x is not a WM8350\n", VAR_19);
  VAR_18 = -VAR_0;
  goto err;
 }

 VAR_23 = (VAR_20 & VAR_3) >> 10;
 VAR_22 = VAR_20 & VAR_4;
 VAR_24 = (VAR_20 & VAR_2) >> 12;
 FUNC_1(VAR_15->dev,
   "CONF_STS %d, CUST_ID %d, MASK_REV %d, CHIP_REV %d\n",
   VAR_23, VAR_22, VAR_21, VAR_24);

 if (VAR_22 != 0) {
  FUNC_0(VAR_15->dev, "Unsupported CUST_ID\n");
  VAR_18 = -VAR_0;
  goto err;
 }

 switch (VAR_21) {
 case 0:
  VAR_15->pmic.max_dcdc = VAR_6;
  VAR_15->pmic.max_isink = VAR_10;

  switch (VAR_24) {
  case 131:
   FUNC_1(VAR_15->dev, "WM8350 Rev E\n");
   break;
  case 130:
   FUNC_1(VAR_15->dev, "WM8350 Rev F\n");
   break;
  case 129:
   FUNC_1(VAR_15->dev, "WM8350 Rev G\n");
   VAR_15->power.rev_g_coeff = 1;
   break;
  case 128:
   FUNC_1(VAR_15->dev, "WM8350 Rev H\n");
   VAR_15->power.rev_g_coeff = 1;
   break;
  default:

   FUNC_0(VAR_15->dev, "Unknown WM8350 CHIP_REV\n");
   VAR_18 = -VAR_0;
   goto err;
  }
  break;

 case 1:
  VAR_15->pmic.max_dcdc = VAR_5;
  VAR_15->pmic.max_isink = VAR_9;

  switch (VAR_24) {
  case 0:
   FUNC_1(VAR_15->dev, "WM8351 Rev A\n");
   VAR_15->power.rev_g_coeff = 1;
   break;

  case 1:
   FUNC_1(VAR_15->dev, "WM8351 Rev B\n");
   VAR_15->power.rev_g_coeff = 1;
   break;

  default:
   FUNC_0(VAR_15->dev, "Unknown WM8351 CHIP_REV\n");
   VAR_18 = -VAR_0;
   goto err;
  }
  break;

 case 2:
  VAR_15->pmic.max_dcdc = VAR_6;
  VAR_15->pmic.max_isink = VAR_10;

  switch (VAR_24) {
  case 0:
   FUNC_1(VAR_15->dev, "WM8352 Rev A\n");
   VAR_15->power.rev_g_coeff = 1;
   break;

  default:
   FUNC_0(VAR_15->dev, "Unknown WM8352 CHIP_REV\n");
   VAR_18 = -VAR_0;
   goto err;
  }
  break;

 default:
  FUNC_0(VAR_15->dev, "Unknown MASK_REV\n");
  VAR_18 = -VAR_0;
  goto err;
 }

 FUNC_5(&VAR_15->auxadc_mutex);
 FUNC_4(&VAR_15->auxadc_done);

 VAR_18 = FUNC_11(VAR_15, VAR_16, VAR_17);
 if (VAR_18 < 0)
  goto err;

 if (VAR_15->irq_base) {
  VAR_18 = FUNC_7(VAR_15->irq_base +
        VAR_8,
        ((void*)0), VAR_14,
        VAR_1,
        "auxadc", VAR_15);
  if (VAR_18 < 0)
   FUNC_3(VAR_15->dev,
     "Failed to request AUXADC IRQ: %d\n", VAR_18);
 }

 if (VAR_17 && VAR_17->init) {
  VAR_18 = VAR_17->init(VAR_15);
  if (VAR_18 != 0) {
   FUNC_0(VAR_15->dev, "Platform init() failed: %d\n",
    VAR_18);
   goto err_irq;
  }
 }

 FUNC_12(VAR_15, VAR_13, 0x0);

 FUNC_9(VAR_15, "wm8350-codec",
       &(VAR_15->codec.pdev));
 FUNC_9(VAR_15, "wm8350-gpio",
       &(VAR_15->gpio.pdev));
 FUNC_9(VAR_15, "wm8350-hwmon",
       &(VAR_15->hwmon.pdev));
 FUNC_9(VAR_15, "wm8350-power",
       &(VAR_15->power.pdev));
 FUNC_9(VAR_15, "wm8350-rtc", &(VAR_15->rtc.pdev));
 FUNC_9(VAR_15, "wm8350-wdt", &(VAR_15->wdt.pdev));

 return 0;

err_irq:
 FUNC_10(VAR_15);
err:
 return VAR_18;
}
