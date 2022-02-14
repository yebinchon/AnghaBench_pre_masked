
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps65090_regulator {int overcurrent_wait; } ;
struct regulator_dev {TYPE_1__* desc; int dev; int regmap; } ;
struct TYPE_2__ {int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct tps65090_regulator *VAR_2,
          struct regulator_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->regmap, VAR_3->desc->enable_reg,
     VAR_1 << VAR_0,
     VAR_2->overcurrent_wait << VAR_0);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "Error updating overcurrent wait %#x\n",
   VAR_3->desc->enable_reg);
 }

 return VAR_4;
}
