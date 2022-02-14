
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8973_chip {int curr_vout_reg; int curr_gpio_val; unsigned int* curr_vout_val; int dvs_gpio; int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct max8973_chip*,unsigned int,int*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 struct max8973_chip* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (int ,int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1,
      unsigned VAR_2)
{
 struct max8973_chip *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;
 bool VAR_5 = 0;
 int VAR_6 = VAR_3->curr_vout_reg;
 int VAR_7 = VAR_3->curr_gpio_val;





 if (FUNC_2(VAR_3->dvs_gpio))
  VAR_5 = FUNC_1(VAR_3, VAR_2,
     &VAR_6, &VAR_7);

 if (!VAR_5) {
  VAR_4 = FUNC_5(VAR_3->regmap, VAR_6,
     VAR_0, VAR_2);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->dev, "register %d update failed, err %d\n",
     VAR_6, VAR_4);
   return VAR_4;
  }
  VAR_3->curr_vout_reg = VAR_6;
  VAR_3->curr_vout_val[VAR_7] = VAR_2;
 }


 if (FUNC_2(VAR_3->dvs_gpio)) {
  FUNC_3(VAR_3->dvs_gpio, VAR_7 & 0x1);
  VAR_3->curr_gpio_val = VAR_7;
 }
 return 0;
}
