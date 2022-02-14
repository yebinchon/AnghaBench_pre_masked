
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct regulator_dev {int regmap; TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int enable_mask; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2->desc->enable_mask,
  VAR_5 = VAR_4 << 4;
 u8 VAR_6;

 switch (VAR_3) {
 case 130:
  VAR_6 = VAR_4 | VAR_5;
  break;
 case 128:
  VAR_6 = VAR_5;
  break;
 case 129:
  VAR_6 = 0;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_2->regmap, VAR_0,
      VAR_5 | VAR_4, VAR_6);
}
