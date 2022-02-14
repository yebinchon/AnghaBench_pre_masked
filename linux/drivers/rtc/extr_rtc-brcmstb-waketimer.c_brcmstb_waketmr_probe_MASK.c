
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_12__ {int notifier_call; } ;
struct brcmstb_waketmr {scalar_t__ irq; TYPE_2__* clk; TYPE_1__ reboot_notifier; TYPE_2__* rtc; void* rate; TYPE_2__* base; struct device* dev; } ;
struct TYPE_13__ {int range_max; int * ops; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct device*,char*,scalar_t__) ;
 int FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct device*) ;
 TYPE_2__* FUNC_8 (struct device*,int *) ;
 TYPE_2__* FUNC_9 (struct device*,struct resource*) ;
 struct brcmstb_waketmr* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,scalar_t__,int ,int ,char*,struct brcmstb_waketmr*) ;
 TYPE_2__* FUNC_12 (struct device*) ;
 scalar_t__ FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct brcmstb_waketmr*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct brcmstb_waketmr *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_10(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_15(VAR_9, VAR_11);
 VAR_11->dev = VAR_10;

 VAR_12 = FUNC_14(VAR_9, VAR_4, 0);
 VAR_11->base = FUNC_9(VAR_10, VAR_12);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_11->rtc = FUNC_12(VAR_10);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);





 FUNC_6(VAR_10, 1);
 FUNC_7(VAR_10);

 VAR_11->irq = FUNC_13(VAR_9, 0);
 if (VAR_11->irq < 0)
  return -VAR_1;

 VAR_11->clk = FUNC_8(VAR_10, ((void*)0));
 if (!FUNC_0(VAR_11->clk)) {
  VAR_13 = FUNC_4(VAR_11->clk);
  if (VAR_13)
   return VAR_13;
  VAR_11->rate = FUNC_3(VAR_11->clk);
  if (!VAR_11->rate)
   VAR_11->rate = VAR_0;
 } else {
  VAR_11->rate = VAR_0;
  VAR_11->clk = ((void*)0);
 }

 VAR_13 = FUNC_11(VAR_10, VAR_11->irq, VAR_6, 0,
          "brcmstb-waketimer", VAR_11);
 if (VAR_13 < 0)
  goto err_clk;

 VAR_11->reboot_notifier.notifier_call = VAR_8;
 FUNC_16(&VAR_11->reboot_notifier);

 VAR_11->rtc->ops = &VAR_7;
 VAR_11->rtc->range_max = VAR_5;

 VAR_13 = FUNC_17(VAR_11->rtc);
 if (VAR_13)
  goto err_notifier;

 FUNC_5(VAR_10, "registered, with irq %d\n", VAR_11->irq);

 return 0;

err_notifier:
 FUNC_18(&VAR_11->reboot_notifier);

err_clk:
 if (VAR_11->clk)
  FUNC_2(VAR_11->clk);

 return VAR_13;
}
