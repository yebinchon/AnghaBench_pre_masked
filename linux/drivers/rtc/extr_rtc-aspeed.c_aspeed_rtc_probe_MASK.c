
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct aspeed_rtc {TYPE_1__* rtc_dev; TYPE_1__* base; } ;
struct TYPE_6__ {long long range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int *,struct resource*) ;
 struct aspeed_rtc* FUNC_3 (int *,int,int ) ;
 TYPE_1__* FUNC_4 (int *) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct aspeed_rtc*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct aspeed_rtc *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5, VAR_2, 0);
 VAR_6->base = FUNC_2(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->rtc_dev = FUNC_4(&VAR_5->dev);
 if (FUNC_0(VAR_6->rtc_dev))
  return FUNC_1(VAR_6->rtc_dev);

 FUNC_6(VAR_5, VAR_6);

 VAR_6->rtc_dev->ops = &VAR_4;
 VAR_6->rtc_dev->range_min = VAR_3;
 VAR_6->rtc_dev->range_max = 38814989399LL;

 return FUNC_7(VAR_6->rtc_dev);
}
