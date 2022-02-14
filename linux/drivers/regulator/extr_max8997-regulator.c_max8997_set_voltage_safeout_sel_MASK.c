
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct max8997_data {TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regulator_dev*,int*,int*,int*) ;
 int FUNC_1 (struct i2c_client*,int,unsigned int,int) ;
 struct max8997_data* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3,
        unsigned VAR_4)
{
 struct max8997_data *VAR_5 = FUNC_2(VAR_3);
 struct i2c_client *VAR_6 = VAR_5->iodev->i2c;
 int VAR_7 = FUNC_3(VAR_3);
 int VAR_8, VAR_9 = 0, VAR_10, VAR_11;

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_3, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 return FUNC_1(VAR_6, VAR_8, VAR_4 << VAR_9, VAR_10 << VAR_9);
}
