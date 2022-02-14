
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timeout; struct device* parent; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct stpmic1_wdt {struct stpmic1* pmic; TYPE_1__ wdtdev; } ;
struct stpmic1 {int dev; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 struct stpmic1* FUNC_1 (int ) ;
 struct stpmic1_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int ,struct device*) ;
 int FUNC_5 (TYPE_1__*,struct stpmic1_wdt*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 int VAR_11;
 struct stpmic1 *VAR_12;
 struct stpmic1_wdt *VAR_13;

 if (!VAR_10->parent)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_10->parent);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_10, sizeof(struct stpmic1_wdt), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->pmic = VAR_12;

 VAR_13->wdtdev.info = &VAR_7;
 VAR_13->wdtdev.ops = &VAR_8;
 VAR_13->wdtdev.min_timeout = VAR_5;
 VAR_13->wdtdev.max_timeout = VAR_4;
 VAR_13->wdtdev.parent = VAR_10;

 VAR_13->wdtdev.timeout = VAR_3;
 FUNC_4(&VAR_13->wdtdev, 0, VAR_10);

 FUNC_6(&VAR_13->wdtdev, VAR_6);
 FUNC_5(&VAR_13->wdtdev, VAR_13);

 VAR_11 = FUNC_3(VAR_10, &VAR_13->wdtdev);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_13->pmic->dev, "PMIC Watchdog driver probed\n");
 return 0;
}
