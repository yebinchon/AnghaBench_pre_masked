
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int dev; int regmap; } ;
struct TYPE_2__ {int name; int vsel_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_6, int VAR_7)
{
 if (VAR_7 > 0 && VAR_7 <= VAR_4) {
  unsigned int VAR_8 = VAR_3;

  if (VAR_7 <= 125)
   VAR_8 = VAR_2;

  return FUNC_1(VAR_6->regmap, VAR_6->desc->vsel_reg,
      VAR_0,
      VAR_8 << VAR_1);
 }
 FUNC_0(&VAR_6->dev, "%s: ramp_delay: %d not supported\n",
  VAR_6->desc->name, VAR_7);
 return -VAR_5;
}
