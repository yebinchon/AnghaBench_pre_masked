
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int irq; int dev; } ;
struct da9063 {scalar_t__ type; scalar_t__ variant_code; int * dev; int regmap; int chip_irq; } ;
struct TYPE_3__ {int * volatile_table; int * wr_table; int * rd_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct da9063*,int ) ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,char*,int) ;
 struct da9063* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,TYPE_1__*) ;
 int FUNC_6 (struct i2c_client*,struct da9063*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_14,
       const struct i2c_device_id *VAR_15)
{
 struct da9063 *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_4(&VAR_14->dev, sizeof(struct da9063), VAR_1);
 if (VAR_16 == ((void*)0))
  return -VAR_0;

 FUNC_6(VAR_14, VAR_16);
 VAR_16->dev = &VAR_14->dev;
 VAR_16->chip_irq = VAR_14->irq;
 VAR_16->type = VAR_15->driver_data;

 if (VAR_16->variant_code == VAR_2) {
  VAR_10.rd_table = &VAR_4;
  VAR_10.wr_table = &VAR_6;
  VAR_10.volatile_table = &VAR_5;
 } else if (VAR_16->type == VAR_3) {
  VAR_10.rd_table = &VAR_11;
  VAR_10.wr_table = &VAR_13;
  VAR_10.volatile_table = &VAR_12;
 } else {
  VAR_10.rd_table = &VAR_7;
  VAR_10.wr_table = &VAR_9;
  VAR_10.volatile_table = &VAR_8;
 }

 VAR_16->regmap = FUNC_5(VAR_14, &VAR_10);
 if (FUNC_0(VAR_16->regmap)) {
  VAR_17 = FUNC_1(VAR_16->regmap);
  FUNC_3(VAR_16->dev, "Failed to allocate register map: %d\n",
   VAR_17);
  return VAR_17;
 }

 return FUNC_2(VAR_16, VAR_14->irq);
}
