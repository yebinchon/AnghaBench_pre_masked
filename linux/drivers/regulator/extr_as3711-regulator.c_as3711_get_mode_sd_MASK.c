
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int regmap; TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int enable_mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_1(struct regulator_dev *VAR_5)
{
 unsigned int VAR_6 = VAR_5->desc->enable_mask,
  VAR_7 = VAR_6 << 4, VAR_8 = VAR_6 | VAR_7;
 unsigned int VAR_9;
 int VAR_10 = FUNC_0(VAR_5->regmap, VAR_0, &VAR_9);

 if (VAR_10 < 0)
  return VAR_10;

 if ((VAR_9 & VAR_8) == VAR_8)
  return VAR_2;

 if ((VAR_9 & VAR_8) == VAR_7)
  return VAR_4;

 if (!(VAR_9 & VAR_8))
  return VAR_3;

 return -VAR_1;
}
