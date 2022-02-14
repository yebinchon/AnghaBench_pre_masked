
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ds2404_platform_data {int dummy; } ;
struct ds2404 {TYPE_2__* rtc; TYPE_1__* gpio; } ;
struct TYPE_7__ {int range_max; int * ops; } ;
struct TYPE_6__ {int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 struct ds2404_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ,int ) ;
 int FUNC_4 (int *,int ,struct ds2404*) ;
 struct ds2404* FUNC_5 (int *,int,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ds2404*,struct platform_device*,struct ds2404_platform_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct platform_device*,struct ds2404*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct ds2404_platform_data *VAR_10 = FUNC_2(&VAR_9->dev);
 struct ds2404 *VAR_11;
 int VAR_12 = -VAR_3;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(struct ds2404), VAR_5);
 if (!VAR_11)
  return -VAR_4;

 VAR_11->rtc = FUNC_6(&VAR_9->dev);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);

 VAR_12 = FUNC_8(VAR_11, VAR_9, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(&VAR_9->dev, VAR_7, VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_3(&VAR_9->dev, "using GPIOs RST:%d, CLK:%d, DQ:%d\n",
   VAR_11->gpio[VAR_2].gpio, VAR_11->gpio[VAR_0].gpio,
   VAR_11->gpio[VAR_1].gpio);

 FUNC_9(VAR_9, VAR_11);

 VAR_11->rtc->ops = &VAR_8;
 VAR_11->rtc->range_max = VAR_6;

 VAR_12 = FUNC_10(VAR_11->rtc);
 if (VAR_12)
  return VAR_12;

 FUNC_7(&VAR_9->dev);
 return 0;
}
