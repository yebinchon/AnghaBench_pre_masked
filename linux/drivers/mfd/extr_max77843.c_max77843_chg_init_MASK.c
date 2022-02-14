
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_dev {int i2c_chg; int regmap_chg; TYPE_1__* i2c; } ;
struct TYPE_2__ {int dev; int adapter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct max77693_dev*) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct max77693_dev *VAR_2)
{
 int VAR_3;

 VAR_2->i2c_chg = FUNC_4(VAR_2->i2c->adapter, VAR_0);
 if (FUNC_0(VAR_2->i2c_chg)) {
  FUNC_2(&VAR_2->i2c->dev,
    "Cannot allocate I2C device for Charger\n");
  return FUNC_1(VAR_2->i2c_chg);
 }
 FUNC_5(VAR_2->i2c_chg, VAR_2);

 VAR_2->regmap_chg = FUNC_3(VAR_2->i2c_chg,
   &VAR_1);
 if (FUNC_0(VAR_2->regmap_chg)) {
  VAR_3 = FUNC_1(VAR_2->regmap_chg);
  goto err_chg_i2c;
 }

 return 0;

err_chg_i2c:
 FUNC_6(VAR_2->i2c_chg);

 return VAR_3;
}
