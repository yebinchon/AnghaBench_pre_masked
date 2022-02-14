
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct lp8788_rtc {int rdev; int alarm; struct lp8788* lp; } ;
struct lp8788 {int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int alarm_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 struct lp8788* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct device*,int) ;
 struct lp8788_rtc* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,char*,int *,int ) ;
 scalar_t__ FUNC_8 (struct platform_device*,struct lp8788_rtc*) ;
 int VAR_4 ;
 int FUNC_9 (struct platform_device*,struct lp8788_rtc*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct lp8788 *VAR_6 = FUNC_3(VAR_5->dev.parent);
 struct lp8788_rtc *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 VAR_7 = FUNC_6(VAR_8, sizeof(struct lp8788_rtc), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->lp = VAR_6;
 VAR_7->alarm = VAR_6->pdata ? VAR_6->pdata->alarm_sel : VAR_0;
 FUNC_9(VAR_5, VAR_7);

 FUNC_5(VAR_8, 1);

 VAR_7->rdev = FUNC_7(VAR_8, "lp8788_rtc",
     &VAR_4, VAR_3);
 if (FUNC_0(VAR_7->rdev)) {
  FUNC_2(VAR_8, "can not register rtc device\n");
  return FUNC_1(VAR_7->rdev);
 }

 if (FUNC_8(VAR_5, VAR_7))
  FUNC_4(VAR_6->dev, "no rtc irq handler\n");

 return 0;
}
