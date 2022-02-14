
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lp855x {int bl; TYPE_1__* dev; int * enable; int * supply; int mode; TYPE_4__* pdata; int chip_id; int chipname; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_7__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
struct TYPE_8__ {scalar_t__ period_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 TYPE_4__* FUNC_4 (TYPE_1__*) ;
 struct lp855x* FUNC_5 (TYPE_1__*,int,int ) ;
 int * FUNC_6 (TYPE_1__*,char*) ;
 int * FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct lp855x*) ;
 int VAR_8 ;
 int FUNC_10 (struct lp855x*) ;
 int FUNC_11 (struct lp855x*) ;
 int FUNC_12 (struct lp855x*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_9, const struct i2c_device_id *VAR_10)
{
 struct lp855x *VAR_11;
 int VAR_12;

 if (!FUNC_8(VAR_9->adapter, VAR_5))
  return -VAR_0;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(struct lp855x), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->client = VAR_9;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->chipname = VAR_10->name;
 VAR_11->chip_id = VAR_10->driver_data;
 VAR_11->pdata = FUNC_4(&VAR_9->dev);

 if (!VAR_11->pdata) {
  VAR_12 = FUNC_12(VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->pdata->period_ns > 0)
  VAR_11->mode = VAR_6;
 else
  VAR_11->mode = VAR_7;

 VAR_11->supply = FUNC_6(VAR_11->dev, "power");
 if (FUNC_0(VAR_11->supply)) {
  if (FUNC_1(VAR_11->supply) == -VAR_3)
   return -VAR_3;
  VAR_11->supply = ((void*)0);
 }

 VAR_11->enable = FUNC_7(VAR_11->dev, "enable");
 if (FUNC_0(VAR_11->enable)) {
  VAR_12 = FUNC_1(VAR_11->enable);
  if (VAR_12 == -VAR_1) {
   VAR_11->enable = ((void*)0);
  } else {
   if (VAR_12 != -VAR_3)
    FUNC_3(VAR_11->dev, "error getting enable regulator: %d\n",
     VAR_12);
   return VAR_12;
  }
 }

 if (VAR_11->supply) {
  VAR_12 = FUNC_13(VAR_11->supply);
  if (VAR_12 < 0) {
   FUNC_3(&VAR_9->dev, "failed to enable supply: %d\n", VAR_12);
   return VAR_12;
  }
 }

 if (VAR_11->enable) {
  VAR_12 = FUNC_13(VAR_11->enable);
  if (VAR_12 < 0) {
   FUNC_3(VAR_11->dev, "failed to enable vddio: %d\n", VAR_12);
   return VAR_12;
  }





  FUNC_15(1000, 2000);
 }

 FUNC_9(VAR_9, VAR_11);

 VAR_12 = FUNC_11(VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_11->dev, "device config err: %d", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_11->dev,
   "failed to register backlight. err: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_14(&VAR_11->dev->kobj, &VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_11->dev, "failed to register sysfs. err: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_2(VAR_11->bl);
 return 0;
}
