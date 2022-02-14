
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; int dev; } ;
struct max8997_data {int* saved_states; TYPE_1__* iodev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (struct regulator_dev*,int*,int*,int*) ;
 int FUNC_2 (struct i2c_client*,int,int*) ;
 int FUNC_3 (struct i2c_client*,int,int,int) ;
 struct max8997_data* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_3)
{
 struct max8997_data *VAR_4 = FUNC_4(VAR_3);
 struct i2c_client *VAR_5 = VAR_4->iodev->i2c;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = FUNC_5(VAR_3);

 VAR_6 = FUNC_1(VAR_3, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_5, VAR_7, &VAR_4->saved_states[VAR_10]);

 if (VAR_10 == VAR_0 ||
   VAR_10 == VAR_1 ||
   VAR_10 == VAR_2) {
  FUNC_0(&VAR_3->dev, "Conditional Power-Off for %s\n",
    VAR_3->desc->name);
  return FUNC_3(VAR_5, VAR_7, 0x40, VAR_8);
 }

 FUNC_0(&VAR_3->dev, "Full Power-Off for %s (%xh -> %xh)\n",
   VAR_3->desc->name, VAR_4->saved_states[VAR_10] & VAR_8,
   (~VAR_9) & VAR_8);
 return FUNC_3(VAR_5, VAR_7, ~VAR_9, VAR_8);
}
