
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int timeout; struct device* parent; int min_timeout; int max_timeout; int * ops; int * info; } ;
struct uniphier_wdt_dev {TYPE_1__ wdt_dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 struct uniphier_wdt_dev* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*) ;
 int VAR_7 ;
 struct device_node* FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct regmap*,int ,int ) ;
 struct regmap* FUNC_8 (struct device_node*) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ,struct device*) ;
 int FUNC_11 (TYPE_1__*,struct uniphier_wdt_dev*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct uniphier_wdt_dev *VAR_13;
 struct regmap *VAR_14;
 struct device_node *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_3(VAR_12, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_12->of_node);
 VAR_14 = FUNC_8(VAR_15);
 FUNC_6(VAR_15);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_13->regmap = VAR_14;
 VAR_13->wdt_dev.info = &VAR_9;
 VAR_13->wdt_dev.ops = &VAR_10;
 VAR_13->wdt_dev.max_timeout = VAR_5;
 VAR_13->wdt_dev.min_timeout = VAR_6;
 VAR_13->wdt_dev.timeout = VAR_4;
 VAR_13->wdt_dev.parent = VAR_12;

 FUNC_10(&VAR_13->wdt_dev, VAR_8, VAR_12);
 FUNC_12(&VAR_13->wdt_dev, VAR_7);
 FUNC_13(&VAR_13->wdt_dev);

 FUNC_11(&VAR_13->wdt_dev, VAR_13);

 FUNC_9(&VAR_13->wdt_dev);
 VAR_16 = FUNC_7(VAR_13->regmap, VAR_2, VAR_3);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_12, &VAR_13->wdt_dev);
 if (VAR_16)
  return VAR_16;

 FUNC_2(VAR_12, "watchdog driver (timeout=%d sec, nowayout=%d)\n",
   VAR_13->wdt_dev.timeout, VAR_7);

 return 0;
}
