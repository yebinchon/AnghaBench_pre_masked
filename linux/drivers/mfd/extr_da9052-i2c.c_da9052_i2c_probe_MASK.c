
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct of_device_id {struct i2c_device_id* data; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;
struct device_node {int dummy; } ;
struct da9052 {int regmap; int fix_io; int chip_irq; TYPE_1__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct da9052*,int ) ;
 int FUNC_3 (struct da9052*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct da9052* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int VAR_5 ;
 int FUNC_7 (struct i2c_client*,struct da9052*) ;
 struct of_device_id* FUNC_8 (int ,struct device_node*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
           const struct i2c_device_id *VAR_7)
{
 struct da9052 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(struct da9052), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = &VAR_6->dev;
 VAR_8->chip_irq = VAR_6->irq;
 VAR_8->fix_io = VAR_3;

 FUNC_7(VAR_6, VAR_8);

 VAR_8->regmap = FUNC_6(VAR_6, &VAR_4);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  FUNC_4(&VAR_6->dev, "Failed to allocate register map: %d\n",
   VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  FUNC_4(&VAR_6->dev, "id is null.\n");
  return VAR_9;
 }

 return FUNC_2(VAR_8, VAR_7->driver_data);
}
