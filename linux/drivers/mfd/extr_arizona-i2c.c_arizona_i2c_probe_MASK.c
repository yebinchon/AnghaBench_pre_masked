
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct regmap_config {int dummy; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct arizona {unsigned long type; int irq; TYPE_1__* dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;






 int FUNC_3 (struct arizona*) ;
 unsigned long FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 struct arizona* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct regmap_config const*) ;
 struct regmap_config VAR_7 ;
 struct regmap_config VAR_8 ;
 struct regmap_config VAR_9 ;
 struct regmap_config VAR_10 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11,
        const struct i2c_device_id *VAR_12)
{
 struct arizona *VAR_13;
 const struct regmap_config *VAR_14 = ((void*)0);
 unsigned long VAR_15;
 int VAR_16;

 if (VAR_11->dev.of_node)
  VAR_15 = FUNC_4(&VAR_11->dev);
 else
  VAR_15 = VAR_12->driver_data;

 switch (VAR_15) {
 case 132:
  if (FUNC_0(VAR_0))
   VAR_14 = &VAR_7;
  break;
 case 131:
 case 130:
  if (FUNC_0(VAR_1))
   VAR_14 = &VAR_8;
  break;
 case 129:
  if (FUNC_0(VAR_2))
   VAR_14 = &VAR_9;
  break;
 case 128:
 case 133:
  if (FUNC_0(VAR_3))
   VAR_14 = &VAR_10;
  break;
 default:
  FUNC_5(&VAR_11->dev, "Unknown device type %ld\n", VAR_15);
  return -VAR_4;
 }

 if (!VAR_14) {
  FUNC_5(&VAR_11->dev,
   "No kernel support for device type %ld\n", VAR_15);
  return -VAR_4;
 }

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_6);
 if (VAR_13 == ((void*)0))
  return -VAR_5;

 VAR_13->regmap = FUNC_7(VAR_11, VAR_14);
 if (FUNC_1(VAR_13->regmap)) {
  VAR_16 = FUNC_2(VAR_13->regmap);
  FUNC_5(&VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_16);
  return VAR_16;
 }

 VAR_13->type = VAR_15;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->irq = VAR_11->irq;

 return FUNC_3(VAR_13);
}
