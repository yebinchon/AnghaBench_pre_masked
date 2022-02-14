
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;
struct bq2415x_device {int chip; int dev; } ;
typedef enum bq2415x_chip { ____Placeholder_bq2415x_chip } bq2415x_chip ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static enum bq2415x_chip FUNC_2(struct bq2415x_device *VAR_14)
{
 struct i2c_client *VAR_15 = FUNC_1(VAR_14->dev);
 int VAR_16 = FUNC_0(VAR_14, VAR_12);

 if (VAR_16 < 0)
  return VAR_16;

 switch (VAR_15->addr) {
 case 0x6b:
  switch (VAR_16) {
  case 0:
   if (VAR_14->chip == VAR_3)
    return VAR_14->chip;
   return VAR_2;
  case 1:
   if (VAR_14->chip == VAR_1 ||
    VAR_14->chip == VAR_4 ||
    VAR_14->chip == VAR_7)
    return VAR_14->chip;
   return VAR_0;
  case 2:
   if (VAR_14->chip == VAR_6)
    return VAR_14->chip;
   return VAR_5;
  default:
   return VAR_13;
  }
  break;

 case 0x6a:
  switch (VAR_16) {
  case 0:
   if (VAR_14->chip == VAR_9)
    return VAR_14->chip;
   return VAR_8;
  case 2:
   if (VAR_14->chip == VAR_10)
    return VAR_14->chip;
   return VAR_11;
  default:
   return VAR_13;
  }
  break;
 }

 return VAR_13;
}
