
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct of_device_id {void* data; } ;
struct mc13xxx {void* variant; int regmap; int irq; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct mc13xxx*) ;
 struct mc13xxx* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
  const struct i2c_device_id *VAR_5)
{
 struct mc13xxx *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(&VAR_4->dev, VAR_6);

 VAR_6->irq = VAR_4->irq;

 VAR_6->regmap = FUNC_5(VAR_4,
            &VAR_3);
 if (FUNC_0(VAR_6->regmap)) {
  VAR_7 = FUNC_1(VAR_6->regmap);
  FUNC_2(&VAR_4->dev, "Failed to initialize regmap: %d\n", VAR_7);
  return VAR_7;
 }

 if (VAR_4->dev.of_node) {
  const struct of_device_id *VAR_8 =
   FUNC_7(VAR_2, &VAR_4->dev);
  VAR_6->variant = VAR_8->data;
 } else {
  VAR_6->variant = (void *)VAR_5->driver_data;
 }

 return FUNC_6(&VAR_4->dev);
}
