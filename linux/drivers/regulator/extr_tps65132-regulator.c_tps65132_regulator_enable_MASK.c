
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65132_regulator {int dev; struct tps65132_reg_pdata* reg_pdata; } ;
struct tps65132_reg_pdata {int ena_gpio_state; int en_gpiod; } ;
struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {scalar_t__ active_discharge; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int) ;
 struct tps65132_regulator* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1)
{
 struct tps65132_regulator *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_4(VAR_1);
 struct tps65132_reg_pdata *VAR_4 = &VAR_2->reg_pdata[VAR_3];
 int VAR_5;

 if (!FUNC_0(VAR_4->en_gpiod)) {
  FUNC_2(VAR_4->en_gpiod, 1);
  VAR_4->ena_gpio_state = 1;
 }


 if (VAR_1->constraints->active_discharge ==
   VAR_0) {
  VAR_5 = FUNC_5(VAR_1, 0);
  if (VAR_5 < 0) {
   FUNC_1(VAR_2->dev, "Failed to disable active discharge: %d\n",
    VAR_5);
   return VAR_5;
  }
 }

 return 0;
}
