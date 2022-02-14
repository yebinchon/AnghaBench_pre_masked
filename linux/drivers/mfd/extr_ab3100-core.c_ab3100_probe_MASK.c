
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; scalar_t__ addr; int adapter; } ;
struct ab3100_platform_data {int dummy; } ;
struct ab3100 {int chip_id; int testreg_client; int * chip_name; struct i2c_client* i2c_client; int * dev; int event_subscribers; int access_mutex; } ;
struct TYPE_6__ {int id; char* name; } ;
struct TYPE_5__ {int pdata_size; struct ab3100_platform_data* platform_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (struct ab3100*,int ,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct ab3100*) ;
 int FUNC_6 (struct ab3100*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,...) ;
 struct ab3100_platform_data* FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int *) ;
 struct ab3100* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int ,int *,int ,int ,char*,struct ab3100*) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (struct i2c_client*,struct ab3100*) ;
 int FUNC_15 (int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_16 (int *,int ,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int,char*,char*) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_8,
      const struct i2c_device_id *VAR_9)
{
 struct ab3100 *VAR_10;
 struct ab3100_platform_data *VAR_11 =
  FUNC_9(&VAR_8->dev);
 int VAR_12;
 int VAR_13;

 VAR_10 = FUNC_11(&VAR_8->dev, sizeof(struct ab3100), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 FUNC_17(&VAR_10->access_mutex);
 FUNC_1(&VAR_10->event_subscribers);

 VAR_10->i2c_client = VAR_8;
 VAR_10->dev = &VAR_10->i2c_client->dev;

 FUNC_14(VAR_8, VAR_10);


 VAR_12 = FUNC_4(VAR_10, VAR_0,
      &VAR_10->chip_id);
 if (VAR_12) {
  FUNC_8(&VAR_8->dev,
   "failed to communicate with AB3100 chip\n");
  goto exit_no_detect;
 }

 for (VAR_13 = 0; VAR_7[VAR_13].id != 0x0; VAR_13++) {
  if (VAR_7[VAR_13].id == VAR_10->chip_id) {
   if (VAR_7[VAR_13].name)
    break;

   FUNC_8(&VAR_8->dev, "AB3000 is not supported\n");
   goto exit_no_detect;
  }
 }

 FUNC_18(&VAR_10->chip_name[0],
   sizeof(VAR_10->chip_name) - 1, "AB3100 %s", VAR_7[VAR_13].name);

 if (VAR_7[VAR_13].id == 0x0) {
  FUNC_8(&VAR_8->dev, "unknown analog baseband chip id: 0x%x\n",
   VAR_10->chip_id);
  FUNC_8(&VAR_8->dev,
   "accepting it anyway. Please update the driver.\n");
  goto exit_no_detect;
 }

 FUNC_10(&VAR_8->dev, "Detected chip: %s\n",
   &VAR_10->chip_name[0]);


 VAR_10->testreg_client = FUNC_13(VAR_8->adapter,
            VAR_8->addr + 1);
 if (FUNC_2(VAR_10->testreg_client)) {
  VAR_12 = FUNC_3(VAR_10->testreg_client);
  goto exit_no_testreg_client;
 }

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  goto exit_no_setup;

 VAR_12 = FUNC_12(&VAR_8->dev,
     VAR_8->irq, ((void*)0), VAR_5,
     VAR_3, "ab3100-core", VAR_10);
 if (VAR_12)
  goto exit_no_irq;

 VAR_12 = FUNC_7(&VAR_8->dev, &VAR_6);
 if (VAR_12)
  goto exit_no_ops;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++) {
  VAR_4[VAR_13].platform_data = VAR_11;
  VAR_4[VAR_13].pdata_size = sizeof(struct ab3100_platform_data);
 }

 VAR_12 = FUNC_16(&VAR_8->dev, 0, VAR_4,
         FUNC_0(VAR_4), ((void*)0), 0, ((void*)0));

 FUNC_6(VAR_10);

 return 0;

 exit_no_ops:
 exit_no_irq:
 exit_no_setup:
 FUNC_15(VAR_10->testreg_client);
 exit_no_testreg_client:
 exit_no_detect:
 return VAR_12;
}
