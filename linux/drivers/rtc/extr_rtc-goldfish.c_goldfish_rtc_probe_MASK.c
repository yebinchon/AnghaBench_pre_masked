
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int name; int dev; } ;
struct goldfish_rtc {scalar_t__ irq; TYPE_1__* rtc; TYPE_1__* base; } ;
struct TYPE_6__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int *,struct resource*) ;
 struct goldfish_rtc* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int ,int ,struct goldfish_rtc*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct goldfish_rtc*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct goldfish_rtc *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_8(VAR_8, VAR_9);

 VAR_10 = FUNC_7(VAR_8, VAR_3, 0);
 if (!VAR_10)
  return -VAR_0;

 VAR_9->base = FUNC_2(&VAR_8->dev, VAR_10);
 if (FUNC_0(VAR_9->base))
  return -VAR_0;

 VAR_9->irq = FUNC_6(VAR_8, 0);
 if (VAR_9->irq < 0)
  return -VAR_0;

 VAR_9->rtc = FUNC_5(&VAR_8->dev);
 if (FUNC_0(VAR_9->rtc))
  return FUNC_1(VAR_9->rtc);

 VAR_9->rtc->ops = &VAR_7;
 VAR_9->rtc->range_max = VAR_5 / VAR_4;

 VAR_11 = FUNC_4(&VAR_8->dev, VAR_9->irq,
          VAR_6,
          0, VAR_8->name, VAR_9);
 if (VAR_11)
  return VAR_11;

 return FUNC_9(VAR_9->rtc);
}
