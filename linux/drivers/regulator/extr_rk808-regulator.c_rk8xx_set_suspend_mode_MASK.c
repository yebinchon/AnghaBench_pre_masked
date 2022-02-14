
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dev; int regmap; TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int vsel_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = VAR_5->desc->vsel_reg + VAR_4;

 switch (VAR_6) {
 case 129:
  return FUNC_1(VAR_5->regmap, VAR_7,
       VAR_3, VAR_2);
 case 128:
  return FUNC_1(VAR_5->regmap, VAR_7,
       VAR_3, VAR_0);
 default:
  FUNC_0(&VAR_5->dev, "do not support this mode\n");
  return -VAR_1;
 }

 return 0;
}
