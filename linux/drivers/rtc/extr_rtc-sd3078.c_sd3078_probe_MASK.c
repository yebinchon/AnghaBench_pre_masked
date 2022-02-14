
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sd3078 {TYPE_1__* rtc; TYPE_1__* regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_6__ {int range_max; int range_min; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 struct sd3078* FUNC_3 (int *,int,int ) ;
 TYPE_1__* FUNC_4 (struct i2c_client*,int *) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct sd3078*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct sd3078*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 struct sd3078 *VAR_11;

 if (!FUNC_6(VAR_8->adapter, VAR_3))
  return -VAR_0;

 VAR_11 = FUNC_3(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->regmap = FUNC_4(VAR_8, &VAR_6);
 if (FUNC_0(VAR_11->regmap)) {
  FUNC_2(&VAR_8->dev, "regmap allocation failed\n");
  return FUNC_1(VAR_11->regmap);
 }

 FUNC_7(VAR_8, VAR_11);

 VAR_11->rtc = FUNC_5(&VAR_8->dev);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);

 VAR_11->rtc->ops = &VAR_7;
 VAR_11->rtc->range_min = VAR_4;
 VAR_11->rtc->range_max = VAR_5;

 VAR_10 = FUNC_8(VAR_11->rtc);
 if (VAR_10)
  return VAR_10;

 FUNC_9(VAR_11);

 return 0;
}
