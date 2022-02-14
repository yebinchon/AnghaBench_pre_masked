
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct aat2870_platform_data {int en_pin; int num_subdevs; TYPE_1__* subdevs; int uninit; int (* init ) (struct aat2870_data*) ;} ;
struct aat2870_data {int en_pin; int * dev; int (* init ) (struct aat2870_data*) ;int io_lock; int update; int write; int read; int uninit; int reg_cache; struct i2c_client* client; } ;
struct TYPE_6__ {scalar_t__ id; int platform_data; int name; } ;
struct TYPE_5__ {scalar_t__ id; int platform_data; int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct aat2870_data*) ;
 int FUNC_2 (struct aat2870_data*) ;
 int FUNC_3 (struct aat2870_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,char*,int) ;
 struct aat2870_platform_data* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct aat2870_data*) ;
 int FUNC_7 (int *,int,int ,char*) ;
 struct aat2870_data* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (struct i2c_client*,struct aat2870_data*) ;
 int FUNC_10 (int *,int ,TYPE_2__*,int,int *,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct aat2870_data*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
        const struct i2c_device_id *VAR_9)
{
 struct aat2870_platform_data *VAR_10 = FUNC_5(&VAR_8->dev);
 struct aat2870_data *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_11 = FUNC_8(&VAR_8->dev, sizeof(struct aat2870_data),
    VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->dev = &VAR_8->dev;
 FUNC_6(VAR_11->dev, VAR_11);

 VAR_11->client = VAR_8;
 FUNC_9(VAR_8, VAR_11);

 VAR_11->reg_cache = VAR_5;

 if (VAR_10->en_pin < 0)
  VAR_11->en_pin = -1;
 else
  VAR_11->en_pin = VAR_10->en_pin;

 VAR_11->init = VAR_10->init;
 VAR_11->uninit = VAR_10->uninit;
 VAR_11->read = VAR_4;
 VAR_11->write = VAR_7;
 VAR_11->update = VAR_6;

 FUNC_11(&VAR_11->io_lock);

 if (VAR_11->init)
  VAR_11->init(VAR_11);

 if (VAR_11->en_pin >= 0) {
  VAR_14 = FUNC_7(&VAR_8->dev, VAR_11->en_pin,
     VAR_2, "aat2870-en");
  if (VAR_14 < 0) {
   FUNC_4(&VAR_8->dev,
    "Failed to request GPIO %d\n", VAR_11->en_pin);
   return VAR_14;
  }
 }

 FUNC_2(VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_10->num_subdevs; VAR_12++) {
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
   if ((VAR_10->subdevs[VAR_12].id == VAR_3[VAR_13].id) &&
     !FUNC_12(VAR_10->subdevs[VAR_12].name,
      VAR_3[VAR_13].name)) {
    VAR_3[VAR_13].platform_data =
     VAR_10->subdevs[VAR_12].platform_data;
    break;
   }
  }
 }

 VAR_14 = FUNC_10(VAR_11->dev, 0, VAR_3,
         FUNC_0(VAR_3), ((void*)0), 0, ((void*)0));
 if (VAR_14 != 0) {
  FUNC_4(VAR_11->dev, "Failed to add subdev: %d\n", VAR_14);
  goto out_disable;
 }

 FUNC_3(VAR_11);

 return 0;

out_disable:
 FUNC_1(VAR_11);
 return VAR_14;
}
