
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3639_chip_data {TYPE_1__* bled; int cdev_flash; int cdev_torch; int regmap; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct lm3639_chip_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct lm3639_chip_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_3(VAR_3->regmap, VAR_0, 0x00);

 FUNC_2(&VAR_3->cdev_torch);
 FUNC_2(&VAR_3->cdev_flash);
 if (VAR_3->bled)
  FUNC_0(&(VAR_3->bled->dev), &VAR_1);
 return 0;
}
