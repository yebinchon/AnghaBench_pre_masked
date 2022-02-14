
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct device* parent; int * ops; int * info; int timeout; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct da9055_wdt_data {struct watchdog_device wdt; struct da9055* da9055; } ;
struct da9055 {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct da9055* FUNC_2 (int ) ;
 struct da9055_wdt_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,struct watchdog_device*) ;
 int VAR_5 ;
 int FUNC_5 (struct watchdog_device*,struct da9055_wdt_data*) ;
 int FUNC_6 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct da9055 *VAR_8 = FUNC_2(VAR_7->parent);
 struct da9055_wdt_data *VAR_9;
 struct watchdog_device *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_7, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->da9055 = VAR_8;

 VAR_10 = &VAR_9->wdt;

 VAR_10->timeout = VAR_0;
 VAR_10->info = &VAR_3;
 VAR_10->ops = &VAR_4;
 VAR_10->parent = VAR_7;
 FUNC_6(VAR_10, VAR_5);
 FUNC_5(VAR_10, VAR_9);

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11 < 0) {
  FUNC_1(VAR_7, "Failed to stop watchdog, %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_7, &VAR_9->wdt);
 if (VAR_11 != 0)
  FUNC_1(VAR_8->dev, "watchdog_register_device() failed: %d\n",
   VAR_11);

 return VAR_11;
}
