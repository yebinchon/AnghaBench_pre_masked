
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* timeout; void* max_timeout; int min_timeout; struct device* parent; int * ops; int * info; } ;
struct sprd_wdt {scalar_t__ irq; TYPE_1__ wdd; void* rtc_enable; void* enable; void* base; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int (*) (struct sprd_wdt*),struct sprd_wdt*) ;
 void* FUNC_4 (struct device*,char*) ;
 struct sprd_wdt* FUNC_5 (struct device*,int,int ) ;
 void* FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,void*) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct sprd_wdt*) ;
 int FUNC_11 (struct sprd_wdt*) ;
 int FUNC_12 (struct sprd_wdt*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (TYPE_1__*,int ,struct device*) ;
 int FUNC_14 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct sprd_wdt *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(VAR_10, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->base = FUNC_6(VAR_9, 0);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_11->enable = FUNC_4(VAR_10, "enable");
 if (FUNC_0(VAR_11->enable)) {
  FUNC_2(VAR_10, "can't get the enable clock\n");
  return FUNC_1(VAR_11->enable);
 }

 VAR_11->rtc_enable = FUNC_4(VAR_10, "rtc_enable");
 if (FUNC_0(VAR_11->rtc_enable)) {
  FUNC_2(VAR_10, "can't get the rtc enable clock\n");
  return FUNC_1(VAR_11->rtc_enable);
 }

 VAR_11->irq = FUNC_9(VAR_9, 0);
 if (VAR_11->irq < 0)
  return VAR_11->irq;

 VAR_12 = FUNC_7(VAR_10, VAR_11->irq, VAR_7, VAR_2,
          "sprd-wdt", (void *)VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "failed to register irq\n");
  return VAR_12;
 }

 VAR_11->wdd.info = &VAR_6;
 VAR_11->wdd.ops = &VAR_8;
 VAR_11->wdd.parent = VAR_10;
 VAR_11->wdd.min_timeout = VAR_4;
 VAR_11->wdd.max_timeout = VAR_3;
 VAR_11->wdd.timeout = VAR_3;

 VAR_12 = FUNC_12(VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "failed to enable wdt\n");
  return VAR_12;
 }
 VAR_12 = FUNC_3(VAR_10, FUNC_11, VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_10, "Failed to add wdt disable action\n");
  return VAR_12;
 }

 FUNC_14(&VAR_11->wdd, VAR_5);
 FUNC_13(&VAR_11->wdd, 0, VAR_10);

 VAR_12 = FUNC_8(VAR_10, &VAR_11->wdd);
 if (VAR_12) {
  FUNC_11(VAR_11);
  return VAR_12;
 }
 FUNC_10(VAR_9, VAR_11);

 return 0;
}
