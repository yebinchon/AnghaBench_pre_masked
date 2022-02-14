
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sprd_rtc {scalar_t__ irq; TYPE_1__* rtc; TYPE_3__* dev; int base; int regmap; } ;
struct TYPE_11__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct device_node {int dummy; } ;
struct TYPE_10__ {long long range_max; scalar_t__ range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*,int) ;
 struct sprd_rtc* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int *,int ,int,int ,struct sprd_rtc*) ;
 TYPE_1__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct sprd_rtc*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct sprd_rtc*) ;
 int FUNC_13 (struct sprd_rtc*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct sprd_rtc *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->regmap = FUNC_3(VAR_7->dev.parent, ((void*)0));
 if (!VAR_9->regmap)
  return -VAR_0;

 VAR_10 = FUNC_8(VAR_8, "reg", &VAR_9->base);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "failed to get RTC base address\n");
  return VAR_10;
 }

 VAR_9->irq = FUNC_9(VAR_7, 0);
 if (VAR_9->irq < 0)
  return VAR_9->irq;

 VAR_9->rtc = FUNC_7(&VAR_7->dev);
 if (FUNC_0(VAR_9->rtc))
  return FUNC_1(VAR_9->rtc);

 VAR_9->dev = &VAR_7->dev;
 FUNC_10(VAR_7, VAR_9);


 VAR_10 = FUNC_12(VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "failed to check RTC alarm interrupt\n");
  return VAR_10;
 }


 VAR_10 = FUNC_13(VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_7->dev, "failed to check RTC time values\n");
  return VAR_10;
 }

 VAR_10 = FUNC_6(&VAR_7->dev, VAR_9->irq, ((void*)0),
     VAR_5,
     VAR_4 | VAR_3,
     VAR_7->name, VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_7->dev, "failed to request RTC irq\n");
  return VAR_10;
 }

 FUNC_4(&VAR_7->dev, 1);

 VAR_9->rtc->ops = &VAR_6;
 VAR_9->rtc->range_min = 0;
 VAR_9->rtc->range_max = 5662310399LL;
 VAR_10 = FUNC_11(VAR_9->rtc);
 if (VAR_10) {
  FUNC_4(&VAR_7->dev, 0);
  return VAR_10;
 }

 return 0;
}
