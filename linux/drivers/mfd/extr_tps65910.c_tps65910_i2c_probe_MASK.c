
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tps65910_platform_data {int irq; int irq_base; } ;
struct tps65910_board {scalar_t__ pm_off; int irq_base; int irq; } ;
struct tps65910 {unsigned long id; int irq_data; TYPE_1__* dev; int regmap; struct i2c_client* i2c_client; struct tps65910_board* of_plat_data; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct tps65910_board* FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ,int ,int *,int ,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,char*,int) ;
 int FUNC_9 (struct i2c_client*,struct tps65910*) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct tps65910*,struct tps65910_board*) ;
 struct i2c_client* VAR_4 ;
 int FUNC_12 (struct tps65910*,int ,struct tps65910_platform_data*) ;
 struct tps65910_board* FUNC_13 (struct i2c_client*,unsigned long*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (struct tps65910*,struct tps65910_board*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_8,
         const struct i2c_device_id *VAR_9)
{
 struct tps65910 *VAR_10;
 struct tps65910_board *VAR_11;
 struct tps65910_board *VAR_12 = ((void*)0);
 struct tps65910_platform_data *VAR_13;
 unsigned long VAR_14 = VAR_9->driver_data;
 int VAR_15;

 VAR_11 = FUNC_4(&VAR_8->dev);

 if (!VAR_11 && VAR_8->dev.of_node) {
  VAR_11 = FUNC_13(VAR_8, &VAR_14);
  VAR_12 = VAR_11;
 }

 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_5(&VAR_8->dev, sizeof(*VAR_13), VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_10->of_plat_data = VAR_12;
 FUNC_9(VAR_8, VAR_10);
 VAR_10->dev = &VAR_8->dev;
 VAR_10->i2c_client = VAR_8;
 VAR_10->id = VAR_14;





 FUNC_8(VAR_8, "", 1);
 VAR_10->regmap = FUNC_7(VAR_8, &VAR_6);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_15 = FUNC_2(VAR_10->regmap);
  FUNC_3(&VAR_8->dev, "regmap initialization failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_13->irq = VAR_11->irq;
 VAR_13->irq_base = VAR_11->irq_base;

 FUNC_12(VAR_10, VAR_13->irq, VAR_13);
 FUNC_11(VAR_10, VAR_11);
 FUNC_14(VAR_10, VAR_11);

 if (VAR_11->pm_off && !VAR_3) {
  VAR_4 = VAR_8;
  VAR_3 = VAR_5;
 }

 VAR_15 = FUNC_6(VAR_10->dev, -1,
       VAR_7, FUNC_0(VAR_7),
       ((void*)0), 0,
       FUNC_10(VAR_10->irq_data));
 if (VAR_15 < 0) {
  FUNC_3(&VAR_8->dev, "mfd_add_devices failed: %d\n", VAR_15);
  return VAR_15;
 }

 return VAR_15;
}
