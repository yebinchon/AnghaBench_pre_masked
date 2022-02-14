
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; int dev; } ;
struct TYPE_2__ {int enable_reg; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,char*,int ) ;
 unsigned int FUNC_2 (struct regulator_dev*,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_5,
     int VAR_6)
{
 int VAR_7 = FUNC_3(VAR_5);
 unsigned int VAR_8;

 if (VAR_7 > VAR_1) {
  FUNC_1(&VAR_5->dev,
    "%s: regulator: ramp delay not supported\n",
    VAR_5->desc->name);
  return -VAR_0;
 }
 VAR_8 = FUNC_2(VAR_5, VAR_4,
    FUNC_0(VAR_4), VAR_6);

 return FUNC_4(VAR_5->regmap, VAR_5->desc->enable_reg,
      VAR_2,
      VAR_8 << VAR_3);
}
