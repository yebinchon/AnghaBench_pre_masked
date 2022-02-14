
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tps65090_platform_data {int irq_base; } ;
struct tps65090 {int irq_data; TYPE_2__* dev; int rmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct i2c_client {int irq; TYPE_2__ dev; } ;
struct TYPE_8__ {scalar_t__ num_resources; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct tps65090_platform_data* FUNC_4 (TYPE_2__*) ;
 struct tps65090* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct tps65090*) ;
 int FUNC_8 (TYPE_2__*,int,TYPE_1__*,int ,int *,int ,int ) ;
 int FUNC_9 (int ,int ,int,int,int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
         const struct i2c_device_id *VAR_10)
{
 struct tps65090_platform_data *VAR_11 = FUNC_4(&VAR_9->dev);
 int VAR_12 = 0;
 struct tps65090 *VAR_13;
 int VAR_14;

 if (!VAR_11 && !VAR_9->dev.of_node) {
  FUNC_3(&VAR_9->dev,
   "tps65090 requires platform data or of_node\n");
  return -VAR_1;
 }

 if (VAR_11)
  VAR_12 = VAR_11->irq_base;

 VAR_13 = FUNC_5(&VAR_9->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->dev = &VAR_9->dev;
 FUNC_7(VAR_9, VAR_13);

 VAR_13->rmap = FUNC_6(VAR_9, &VAR_7);
 if (FUNC_1(VAR_13->rmap)) {
  VAR_14 = FUNC_2(VAR_13->rmap);
  FUNC_3(&VAR_9->dev, "regmap_init failed with err: %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_9->irq) {
  VAR_14 = FUNC_9(VAR_13->rmap, VAR_9->irq,
       VAR_4 | VAR_5, VAR_12,
       &VAR_6, &VAR_13->irq_data);
  if (VAR_14) {
   FUNC_3(&VAR_9->dev,
    "IRQ init failed with err: %d\n", VAR_14);
   return VAR_14;
  }
 } else {

  VAR_8[VAR_0].num_resources = 0;
 }

 VAR_14 = FUNC_8(VAR_13->dev, -1, VAR_8,
         FUNC_0(VAR_8), ((void*)0),
         0, FUNC_11(VAR_13->irq_data));
 if (VAR_14) {
  FUNC_3(&VAR_9->dev, "add mfd devices failed with err: %d\n",
   VAR_14);
  goto err_irq_exit;
 }

 return 0;

err_irq_exit:
 if (VAR_9->irq)
  FUNC_10(VAR_9->irq, VAR_13->irq_data);
 return VAR_14;
}
