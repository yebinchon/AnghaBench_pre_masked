
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct device* parent; int * ops; int * info; int timeout; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct da9052_wdt_data {struct watchdog_device wdt; struct da9052* da9052; } ;
struct da9052 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct da9052*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct da9052* FUNC_2 (int ) ;
 struct da9052_wdt_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,struct watchdog_device*) ;
 int FUNC_5 (struct watchdog_device*,struct da9052_wdt_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct da9052 *VAR_9 = FUNC_2(VAR_8->parent);
 struct da9052_wdt_data *VAR_10;
 struct watchdog_device *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_8, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;
 VAR_10->da9052 = VAR_9;

 VAR_11 = &VAR_10->wdt;

 VAR_11->timeout = VAR_2;
 VAR_11->info = &VAR_5;
 VAR_11->ops = &VAR_6;
 VAR_11->parent = VAR_8;
 FUNC_5(VAR_11, VAR_10);

 VAR_12 = FUNC_0(VAR_9, VAR_1,
    VAR_0, 0);
 if (VAR_12 < 0) {
  FUNC_1(VAR_8, "Failed to disable watchdog bits, %d\n", VAR_12);
  return VAR_12;
 }

 return FUNC_4(VAR_8, &VAR_10->wdt);
}
