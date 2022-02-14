
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct ep93xx_rtc {TYPE_1__* rtc; TYPE_1__* mmio_base; } ;
struct TYPE_7__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int *,struct resource*) ;
 struct ep93xx_rtc* FUNC_3 (int *,int,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct ep93xx_rtc*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct ep93xx_rtc *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_6, VAR_2, 0);
 VAR_7->mmio_base = FUNC_2(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->mmio_base))
  return FUNC_1(VAR_7->mmio_base);

 FUNC_6(VAR_6, VAR_7);

 VAR_7->rtc = FUNC_4(&VAR_6->dev);
 if (FUNC_0(VAR_7->rtc))
  return FUNC_1(VAR_7->rtc);

 VAR_7->rtc->ops = &VAR_4;
 VAR_7->rtc->range_max = VAR_3;

 VAR_9 = FUNC_7(VAR_7->rtc, &VAR_5);
 if (VAR_9)
  return VAR_9;

 return FUNC_8(VAR_7->rtc);
}
