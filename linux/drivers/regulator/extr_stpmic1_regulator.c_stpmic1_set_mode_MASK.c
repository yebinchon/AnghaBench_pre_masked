
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int enable_reg; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 struct regmap *VAR_6 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 129:
  VAR_5 = VAR_2;
  break;
 case 128:
  VAR_5 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_6, VAR_3->desc->enable_reg,
      VAR_1, VAR_5);
}
