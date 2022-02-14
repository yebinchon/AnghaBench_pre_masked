
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* timeout; struct device* parent; int min_timeout; void* max_timeout; int * ops; int * info; } ;
struct sunxi_wdt_dev {TYPE_1__ wdt_dev; int wdt_base; int wdt_regs; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,void*,int ) ;
 struct sunxi_wdt_dev* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_6 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,int ,struct device*) ;
 int FUNC_10 (TYPE_1__*,struct sunxi_wdt_dev*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct sunxi_wdt_dev *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->wdt_regs = FUNC_6(VAR_10);
 if (!VAR_11->wdt_regs)
  return -VAR_1;

 VAR_11->wdt_base = FUNC_4(VAR_9, 0);
 if (FUNC_0(VAR_11->wdt_base))
  return FUNC_1(VAR_11->wdt_base);

 VAR_11->wdt_dev.info = &VAR_6;
 VAR_11->wdt_dev.ops = &VAR_7;
 VAR_11->wdt_dev.timeout = VAR_3;
 VAR_11->wdt_dev.max_timeout = VAR_3;
 VAR_11->wdt_dev.min_timeout = VAR_4;
 VAR_11->wdt_dev.parent = VAR_10;

 FUNC_9(&VAR_11->wdt_dev, VAR_8, VAR_10);
 FUNC_11(&VAR_11->wdt_dev, VAR_5);
 FUNC_12(&VAR_11->wdt_dev, 128);

 FUNC_10(&VAR_11->wdt_dev, VAR_11);

 FUNC_7(&VAR_11->wdt_dev);

 FUNC_13(&VAR_11->wdt_dev);
 VAR_12 = FUNC_5(VAR_10, &VAR_11->wdt_dev);
 if (FUNC_8(VAR_12))
  return VAR_12;

 FUNC_2(VAR_10, "Watchdog enabled (timeout=%d sec, nowayout=%d)",
   VAR_11->wdt_dev.timeout, VAR_5);

 return 0;
}
