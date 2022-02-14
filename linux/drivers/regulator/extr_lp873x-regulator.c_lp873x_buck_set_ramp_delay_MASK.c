
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; } ;
struct lp873x {int dev; int regmap; } ;
struct TYPE_4__ {int ctrl2_reg; } ;
struct TYPE_3__ {int ramp_delay; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int * VAR_1 ;
 struct lp873x* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3,
          int VAR_4)
{
 int VAR_5 = FUNC_3(VAR_3);
 struct lp873x *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_4 <= 470)
  VAR_7 = 7;
 else if (VAR_4 <= 940)
  VAR_7 = 6;
 else if (VAR_4 <= 1900)
  VAR_7 = 5;
 else if (VAR_4 <= 3800)
  VAR_7 = 4;
 else if (VAR_4 <= 7500)
  VAR_7 = 3;
 else if (VAR_4 <= 10000)
  VAR_7 = 2;
 else if (VAR_4 <= 15000)
  VAR_7 = 1;
 else
  VAR_7 = 0;

 VAR_8 = FUNC_4(VAR_6->regmap, VAR_2[VAR_5].ctrl2_reg,
     VAR_0,
     VAR_7 << FUNC_0(VAR_0));
 if (VAR_8) {
  FUNC_1(VAR_6->dev, "SLEW RATE write failed: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_3->constraints->ramp_delay = VAR_1[VAR_7];

 return 0;
}
