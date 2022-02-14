
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


 int FUNC_0 (struct regulator_dev*,int*,int*,int*) ;
 int FUNC_1 (struct i2c_client*,int,int*) ;
 struct max8997_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct max8997_data *VAR_1 = FUNC_2(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->iodev->i2c;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 u8 VAR_7;

 VAR_3 = FUNC_0(VAR_0, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_4, &VAR_7);
 if (VAR_3)
  return VAR_3;

 return (VAR_7 & VAR_5) == VAR_6;
}
