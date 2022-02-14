
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* constraints; int dev; int regmap; } ;
struct TYPE_4__ {int ctrl2_reg; } ;
struct TYPE_3__ {int ramp_delay; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int* VAR_1 ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3,
           int VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4 <= 470)
  VAR_6 = 7;
 else if (VAR_4 <= 940)
  VAR_6 = 6;
 else if (VAR_4 <= 1900)
  VAR_6 = 5;
 else if (VAR_4 <= 3800)
  VAR_6 = 4;
 else if (VAR_4 <= 7500)
  VAR_6 = 3;
 else if (VAR_4 <= 10000)
  VAR_6 = 2;
 else if (VAR_4 <= 15000)
  VAR_6 = 1;
 else
  VAR_6 = 0;

 VAR_7 = FUNC_3(VAR_3->regmap, VAR_2[VAR_5].ctrl2_reg,
     VAR_0,
     VAR_6 << FUNC_0(VAR_0));
 if (VAR_7) {
  FUNC_1(&VAR_3->dev, "SLEW RATE write failed: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_3->constraints->ramp_delay = VAR_1[VAR_6];


 VAR_3->constraints->ramp_delay =
    VAR_3->constraints->ramp_delay * 85 / 100;

 return 0;
}
