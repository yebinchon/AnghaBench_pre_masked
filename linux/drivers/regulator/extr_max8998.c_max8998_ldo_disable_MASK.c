
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct max8998_data {TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct i2c_client* i2c; } ;


 int FUNC_0 (struct regulator_dev*,int*,int*) ;
 int FUNC_1 (struct i2c_client*,int,int ,int) ;
 struct max8998_data* FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct max8998_data *VAR_1 = FUNC_2(VAR_0);
 struct i2c_client *VAR_2 = VAR_1->iodev->i2c;
 int VAR_3, VAR_4 = 8, VAR_5;

 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_2, VAR_3, 0, 1<<VAR_4);
}
