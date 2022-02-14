
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_8__ {void* timeout; struct device* parent; int min_timeout; void* max_timeout; int * ops; int * info; } ;
struct mtk_wdt_dev {TYPE_1__ wdt_dev; int wdt_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*,void*,int ) ;
 struct mtk_wdt_dev* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*,struct mtk_wdt_dev*) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,struct device*) ;
 int FUNC_10 (TYPE_1__*,struct mtk_wdt_dev*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct mtk_wdt_dev *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_7(VAR_8, VAR_10);

 VAR_10->wdt_base = FUNC_4(VAR_8, 0);
 if (FUNC_0(VAR_10->wdt_base))
  return FUNC_1(VAR_10->wdt_base);

 VAR_10->wdt_dev.info = &VAR_4;
 VAR_10->wdt_dev.ops = &VAR_5;
 VAR_10->wdt_dev.timeout = VAR_2;
 VAR_10->wdt_dev.max_timeout = VAR_2;
 VAR_10->wdt_dev.min_timeout = VAR_3;
 VAR_10->wdt_dev.parent = VAR_9;

 FUNC_9(&VAR_10->wdt_dev, VAR_7, VAR_9);
 FUNC_11(&VAR_10->wdt_dev, VAR_6);
 FUNC_12(&VAR_10->wdt_dev, 128);

 FUNC_10(&VAR_10->wdt_dev, VAR_10);

 FUNC_6(&VAR_10->wdt_dev);

 FUNC_13(&VAR_10->wdt_dev);
 VAR_11 = FUNC_5(VAR_9, &VAR_10->wdt_dev);
 if (FUNC_8(VAR_11))
  return VAR_11;

 FUNC_2(VAR_9, "Watchdog enabled (timeout=%d sec, nowayout=%d)\n",
   VAR_10->wdt_dev.timeout, VAR_6);

 return 0;
}
