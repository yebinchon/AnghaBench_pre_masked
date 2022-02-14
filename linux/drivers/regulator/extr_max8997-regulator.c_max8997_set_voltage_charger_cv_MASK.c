
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8997_data {TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct regulator_dev*,int*,int*,int*) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;
 struct max8997_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2,
  int VAR_3, int VAR_4, unsigned *VAR_5)
{
 struct max8997_data *VAR_6 = FUNC_2(VAR_2);
 struct i2c_client *VAR_7 = VAR_6->iodev->i2c;
 int VAR_8 = FUNC_3(VAR_2);
 int VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0, VAR_13, VAR_14 = 0;
 u8 VAR_15 = 0x0;

 if (VAR_8 != VAR_1)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_2, &VAR_11, &VAR_12, &VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_4 < 4000000 || VAR_3 > 4350000)
  return -VAR_0;

 if (VAR_3 <= 4000000)
  VAR_15 = 0x1;
 else if (VAR_3 <= 4200000 && VAR_4 >= 4200000)
  VAR_15 = 0x0;
 else {
  VAR_9 = (VAR_3 - 4000001) / 20000 + 2;
  VAR_10 = (VAR_4 - 4000000) / 20000 + 1;

  if (VAR_9 > VAR_10)
   return -VAR_0;

  if (VAR_9 < 0xf)
   VAR_15 = VAR_9;
  else {
   if (VAR_10 >= 0xf)
    VAR_15 = 0xf;
   else
    return -VAR_0;
  }
 }

 *VAR_5 = VAR_15;

 VAR_14 = FUNC_1(VAR_7, VAR_11, VAR_15 << VAR_12, VAR_13);

 return VAR_14;
}
