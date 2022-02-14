
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ops; TYPE_2__* dev; int regmap; } ;
struct lan9303_i2c {TYPE_1__ chip; struct i2c_client* device; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct lan9303_i2c* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct lan9303_i2c*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 struct lan9303_i2c *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(struct lan9303_i2c),
         VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->chip.regmap = FUNC_5(VAR_4,
         &VAR_2);
 if (FUNC_0(VAR_6->chip.regmap)) {
  VAR_7 = FUNC_1(VAR_6->chip.regmap);
  FUNC_2(&VAR_4->dev, "Failed to allocate register map: %d\n",
   VAR_7);
  return VAR_7;
 }


 VAR_6->device = VAR_4;
 FUNC_6(VAR_4, VAR_6);
 VAR_6->chip.dev = &VAR_4->dev;

 VAR_6->chip.ops = &VAR_3;

 VAR_7 = FUNC_7(&VAR_6->chip, VAR_4->dev.of_node);
 if (VAR_7 != 0)
  return VAR_7;

 FUNC_3(&VAR_4->dev, "LAN9303 I2C driver loaded successfully\n");

 return 0;
}
