
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct rk808_rtc {int irq; TYPE_1__* rtc; TYPE_2__* creg; struct rk808* rk808; } ;
struct rk808 {int variant; int regmap; } ;
struct TYPE_14__ {int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_13__ {int status_reg; int ctrl_reg; } ;
struct TYPE_12__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;


 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,char*,int,...) ;
 struct rk808* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int) ;
 struct rk808_rtc* FUNC_5 (TYPE_5__*,int,int ) ;
 int FUNC_6 (TYPE_5__*,int,int *,int ,int ,char*,struct rk808_rtc*) ;
 TYPE_1__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct rk808_rtc*) ;
 int FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct rk808 *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct rk808_rtc *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;

 switch (VAR_10->variant) {
 case 129:
 case 128:
  VAR_11->creg = &VAR_8;
  break;
 default:
  VAR_11->creg = &VAR_6;
  break;
 }
 FUNC_9(VAR_9, VAR_11);
 VAR_11->rk808 = VAR_10;


 VAR_12 = FUNC_10(VAR_10->regmap, VAR_11->creg->ctrl_reg,
     VAR_1 |
     VAR_0,
     VAR_0);
 if (VAR_12) {
  FUNC_2(&VAR_9->dev,
   "Failed to update RTC control: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_11(VAR_10->regmap, VAR_11->creg->status_reg,
      VAR_4);
 if (VAR_12) {
  FUNC_2(&VAR_9->dev,
   "Failed to write RTC status: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_4(&VAR_9->dev, 1);

 VAR_11->rtc = FUNC_7(&VAR_9->dev);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);

 VAR_11->rtc->ops = &VAR_7;

 VAR_11->irq = FUNC_8(VAR_9, 0);
 if (VAR_11->irq < 0)
  return VAR_11->irq;


 VAR_12 = FUNC_6(&VAR_9->dev, VAR_11->irq, ((void*)0),
     VAR_5, 0,
     "RTC alarm", VAR_11);
 if (VAR_12) {
  FUNC_2(&VAR_9->dev, "Failed to request alarm IRQ %d: %d\n",
   VAR_11->irq, VAR_12);
  return VAR_12;
 }

 return FUNC_12(VAR_11->rtc);
}
