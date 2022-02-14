
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int driver_data; int name; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_2__ {int write_bulk; int read_bulk; int write; int read; } ;
struct bq27xxx_device_info {int id; char* name; int work; TYPE_1__ bus; int chip; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bq27xxx_device_info*) ;
 int FUNC_1 (int *,char*,scalar_t__,int) ;
 char* FUNC_2 (int *,int ,char*,int ,int) ;
 struct bq27xxx_device_info* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,scalar_t__,int *,int ,int ,char*,struct bq27xxx_device_info*) ;
 int FUNC_5 (struct i2c_client*,struct bq27xxx_device_info*) ;
 int FUNC_6 (int *,struct i2c_client*,int ,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
         const struct i2c_device_id *VAR_12)
{
 struct bq27xxx_device_info *VAR_13;
 int VAR_14;
 char *VAR_15;
 int VAR_16;


 FUNC_8(&VAR_5);
 VAR_16 = FUNC_6(&VAR_4, VAR_11, 0, 0, VAR_1);
 FUNC_9(&VAR_5);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15 = FUNC_2(&VAR_11->dev, VAR_1, "%s-%d", VAR_12->name, VAR_16);
 if (!VAR_15)
  goto err_mem;

 VAR_13 = FUNC_3(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  goto err_mem;

 VAR_13->id = VAR_16;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->chip = VAR_12->driver_data;
 VAR_13->name = VAR_15;

 VAR_13->bus.read = VAR_8;
 VAR_13->bus.write = VAR_9;
 VAR_13->bus.read_bulk = VAR_6;
 VAR_13->bus.write_bulk = VAR_7;

 VAR_14 = FUNC_0(VAR_13);
 if (VAR_14)
  goto err_failed;


 FUNC_10(&VAR_13->work, 60 * VAR_2);

 FUNC_5(VAR_11, VAR_13);

 if (VAR_11->irq) {
  VAR_14 = FUNC_4(&VAR_11->dev, VAR_11->irq,
    ((void*)0), VAR_10,
    VAR_3,
    VAR_13->name, VAR_13);
  if (VAR_14) {
   FUNC_1(&VAR_11->dev,
    "Unable to register IRQ %d error %d\n",
    VAR_11->irq, VAR_14);
   return VAR_14;
  }
 }

 return 0;

err_mem:
 VAR_14 = -VAR_0;

err_failed:
 FUNC_8(&VAR_5);
 FUNC_7(&VAR_4, VAR_16);
 FUNC_9(&VAR_5);

 return VAR_14;
}
