
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct pfuze_chip {int chip_id; int dev; int regmap; } ;
struct TYPE_2__ {scalar_t__ vsel_reg; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int FUNC_0 (int ,char*,int) ;
 struct pfuze_chip* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int ,scalar_t__,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4, int VAR_5)
{
 struct pfuze_chip *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = FUNC_2(VAR_4);
 bool VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 switch (VAR_6->chip_id) {
 case 128:

  VAR_8 = 0;
  break;
 case 129:
  VAR_8 = (VAR_7 < VAR_3);
  break;
 case 130:
  VAR_8 = (VAR_7 < VAR_2);
  break;
 case 131:
 default:
  VAR_8 = (VAR_7 < VAR_1);
  break;
 }

 if (VAR_8) {
  VAR_5 = 12500 / VAR_5;
  VAR_9 = (VAR_5 >> 1) - (VAR_5 >> 3);
  VAR_10 = FUNC_3(VAR_6->regmap,
      VAR_4->desc->vsel_reg + 4,
      0xc0, VAR_9 << 6);
  if (VAR_10 < 0)
   FUNC_0(VAR_6->dev, "ramp failed, err %d\n", VAR_10);
 } else {
  VAR_10 = -VAR_0;
 }

 return VAR_10;
}
