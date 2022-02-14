
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; int adapter; } ;
struct abeoz9_rtc_data {TYPE_1__* rtc; struct regmap* regmap; } ;
struct TYPE_4__ {int range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,struct abeoz9_rtc_data*) ;
 int VAR_8 ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,struct abeoz9_rtc_data*) ;
 struct abeoz9_rtc_data* FUNC_7 (struct device*,int,int ) ;
 struct regmap* FUNC_8 (struct i2c_client*,int *) ;
 TYPE_1__* FUNC_9 (struct device*) ;
 int FUNC_10 (int ,int) ;
 int VAR_9 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_10,
   const struct i2c_device_id *VAR_11)
{
 struct abeoz9_rtc_data *VAR_12 = ((void*)0);
 struct device *VAR_13 = &VAR_10->dev;
 struct regmap *VAR_14;
 int VAR_15;

 if (!FUNC_10(VAR_10->adapter, VAR_3 |
         VAR_4 |
         VAR_5))
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_10, &VAR_8);
 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_14);
  FUNC_5(VAR_13, "regmap allocation failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_12 = FUNC_7(VAR_13, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->regmap = VAR_14;
 FUNC_6(VAR_13, VAR_12);

 VAR_15 = FUNC_4(VAR_13, VAR_10->dev.of_node);
 if (VAR_15)
  return VAR_15;

 VAR_12->rtc = FUNC_9(VAR_13);
 VAR_15 = FUNC_2(VAR_12->rtc);
 if (VAR_15)
  return VAR_15;

 VAR_12->rtc->ops = &VAR_9;
 VAR_12->rtc->range_min = VAR_6;
 VAR_12->rtc->range_max = VAR_7;

 VAR_15 = FUNC_11(VAR_12->rtc);
 if (VAR_15)
  return VAR_15;

 FUNC_3(VAR_13, VAR_12);
 return 0;
}
