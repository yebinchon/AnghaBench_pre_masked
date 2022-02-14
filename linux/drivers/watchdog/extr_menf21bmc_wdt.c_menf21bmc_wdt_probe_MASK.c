
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {struct device* parent; int max_timeout; int min_timeout; int * info; int * ops; } ;
struct menf21bmc_wdt {TYPE_1__ wdt; struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 struct menf21bmc_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct menf21bmc_wdt*) ;
 int VAR_7 ;
 int FUNC_6 (struct platform_device*,struct menf21bmc_wdt*) ;
 struct i2c_client* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int,struct device*) ;
 int FUNC_9 (TYPE_1__*,struct menf21bmc_wdt*) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 int VAR_10, VAR_11;
 struct menf21bmc_wdt *VAR_12;
 struct i2c_client *VAR_13 = FUNC_7(VAR_9->parent);

 VAR_12 = FUNC_2(VAR_9, sizeof(struct menf21bmc_wdt), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->wdt.ops = &VAR_6;
 VAR_12->wdt.info = &VAR_5;
 VAR_12->wdt.min_timeout = VAR_2;
 VAR_12->wdt.max_timeout = VAR_1;
 VAR_12->wdt.parent = VAR_9;
 VAR_12->i2c_client = VAR_13;





 VAR_11 = FUNC_4(VAR_12->i2c_client,
            VAR_0);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9, "failed to get current WDT timeout\n");
  return VAR_11;
 }

 FUNC_8(&VAR_12->wdt, VAR_11 / 10, VAR_9);
 FUNC_10(&VAR_12->wdt, VAR_7);
 FUNC_9(&VAR_12->wdt, VAR_12);
 FUNC_6(VAR_8, VAR_12);

 VAR_10 = FUNC_5(VAR_12);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9, "failed to set Watchdog bootstatus\n");
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_9, &VAR_12->wdt);
 if (VAR_10)
  return VAR_10;

 FUNC_1(VAR_9, "MEN 14F021P00 BMC Watchdog device enabled\n");

 return 0;
}
