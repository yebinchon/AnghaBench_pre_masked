
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct da9055_rtc {int alarm_enable; TYPE_5__* da9055; int rtc; } ;
struct da9055_pdata {int dummy; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int VAR_7 ;
 int FUNC_3 (TYPE_5__*,struct da9055_pdata*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_5__* FUNC_5 (int ) ;
 struct da9055_pdata* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 struct da9055_rtc* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,int *,int ,int,char*,struct da9055_rtc*) ;
 int FUNC_10 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (struct platform_device*,struct da9055_rtc*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct da9055_rtc *VAR_10;
 struct da9055_pdata *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_10 = FUNC_8(&VAR_9->dev, sizeof(struct da9055_rtc), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->da9055 = FUNC_5(VAR_9->dev.parent);
 VAR_11 = FUNC_6(VAR_10->da9055->dev);
 FUNC_12(VAR_9, VAR_10);

 VAR_12 = FUNC_3(VAR_10->da9055, VAR_11);
 if (VAR_12 < 0)
  goto err_rtc;

 VAR_12 = FUNC_2(VAR_10->da9055, VAR_0);
 if (VAR_12 < 0)
  goto err_rtc;

 if (VAR_12 & VAR_1)
  VAR_10->alarm_enable = 1;

 FUNC_7(&VAR_9->dev, 1);

 VAR_10->rtc = FUNC_10(&VAR_9->dev, VAR_9->name,
     &VAR_8, VAR_6);
 if (FUNC_0(VAR_10->rtc)) {
  VAR_12 = FUNC_1(VAR_10->rtc);
  goto err_rtc;
 }

 VAR_13 = FUNC_11(VAR_9, "ALM");
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_9(&VAR_9->dev, VAR_13, ((void*)0),
     VAR_7,
     VAR_5 | VAR_4,
     "ALM", VAR_10);
 if (VAR_12 != 0)
  FUNC_4(VAR_10->da9055->dev, "irq registration failed: %d\n", VAR_12);

err_rtc:
 return VAR_12;

}
