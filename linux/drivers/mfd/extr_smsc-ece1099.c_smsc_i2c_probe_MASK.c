
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct smsc {int clk; int regmap; TYPE_1__* dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,char*,int,int,int) ;
 struct smsc* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct smsc*) ;
 int FUNC_7 (scalar_t__,char*,int *) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct smsc *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->regmap = FUNC_5(VAR_8, &VAR_7);
 if (FUNC_0(VAR_10->regmap))
  return FUNC_1(VAR_10->regmap);

 FUNC_6(VAR_8, VAR_10);
 VAR_10->dev = &VAR_8->dev;





 FUNC_8(VAR_10->regmap, VAR_3, &VAR_11);
 FUNC_8(VAR_10->regmap, VAR_4, &VAR_12);
 FUNC_8(VAR_10->regmap, VAR_6, &VAR_13);
 FUNC_8(VAR_10->regmap, VAR_5, &VAR_14);

 FUNC_2(&VAR_8->dev, "SMSCxxx devid: %02x rev: %02x venid: %02x\n",
  VAR_11, VAR_12, (VAR_14 << 8) | VAR_13);

 VAR_15 = FUNC_9(VAR_10->regmap, VAR_2, VAR_10->clk);
 if (VAR_15)
  return VAR_15;






 return VAR_15;
}
