
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int regmap; } ;
struct TYPE_2__ {int enable_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (struct regulator_dev*,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3,
         int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2,
    FUNC_0(VAR_2), VAR_4);

 return FUNC_2(VAR_3->regmap, VAR_3->desc->enable_reg,
      VAR_0,
      VAR_5 << VAR_1);
}
