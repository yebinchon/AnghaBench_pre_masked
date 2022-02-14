
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_11__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; scalar_t__ irq; } ;
struct as3711_platform_data {int backlight; int regulator; } ;
struct as3711 {TYPE_1__* dev; int regmap; } ;
struct TYPE_12__ {int pdata_size; int * platform_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct as3711_platform_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned int,unsigned int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 void* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,TYPE_2__*,int ,int *,int ,int *) ;
 int FUNC_10 (struct i2c_client*,int *) ;
 int FUNC_11 (struct i2c_client*,struct as3711*) ;
 int FUNC_12 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_9,
       const struct i2c_device_id *VAR_10)
{
 struct as3711 *VAR_11;
 struct as3711_platform_data *VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 if (!VAR_9->dev.of_node) {
  VAR_12 = FUNC_5(&VAR_9->dev);
  if (!VAR_12)
   FUNC_3(&VAR_9->dev, "Platform data not found\n");
 } else {
  VAR_12 = FUNC_8(&VAR_9->dev,
         sizeof(*VAR_12), VAR_6);
  if (!VAR_12)
   return -VAR_5;
 }

 VAR_11 = FUNC_8(&VAR_9->dev, sizeof(struct as3711), VAR_6);
 if (!VAR_11)
  return -VAR_5;

 VAR_11->dev = &VAR_9->dev;
 FUNC_11(VAR_9, VAR_11);

 if (VAR_9->irq)
  FUNC_7(&VAR_9->dev, "IRQ not supported yet\n");

 VAR_11->regmap = FUNC_10(VAR_9, &VAR_7);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_15 = FUNC_2(VAR_11->regmap);
  FUNC_4(&VAR_9->dev,
   "regmap initialization failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_12(VAR_11->regmap, VAR_0, &VAR_13);
 if (!VAR_15)
  VAR_15 = FUNC_12(VAR_11->regmap, VAR_1, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_4(&VAR_9->dev, "regmap_read() failed: %d\n", VAR_15);
  return VAR_15;
 }
 if (VAR_13 != 0x8b)
  return -VAR_4;
 FUNC_6(VAR_11->dev, "AS3711 detected: %x:%x\n", VAR_13, VAR_14);





 if (VAR_12) {
  VAR_8[VAR_3].platform_data =
   &VAR_12->regulator;
  VAR_8[VAR_3].pdata_size =
   sizeof(VAR_12->regulator);
  VAR_8[VAR_2].platform_data =
   &VAR_12->backlight;
  VAR_8[VAR_2].pdata_size =
   sizeof(VAR_12->backlight);
 } else {
  VAR_8[VAR_3].platform_data = ((void*)0);
  VAR_8[VAR_3].pdata_size = 0;
  VAR_8[VAR_2].platform_data = ((void*)0);
  VAR_8[VAR_2].pdata_size = 0;
 }

 VAR_15 = FUNC_9(VAR_11->dev, -1, VAR_8,
       FUNC_0(VAR_8), ((void*)0), 0, ((void*)0));
 if (VAR_15 < 0)
  FUNC_4(&VAR_9->dev, "add mfd devices failed: %d\n", VAR_15);

 return VAR_15;
}
