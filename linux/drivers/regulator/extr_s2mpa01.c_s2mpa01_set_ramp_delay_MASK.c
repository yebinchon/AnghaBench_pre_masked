
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2mpa01_info {int ramp_delay16; int ramp_delay24; int ramp_delay3; int ramp_delay5; int ramp_delay7; int ramp_delay8910; } ;
struct regulator_dev {int regmap; int dev; } ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

 unsigned int VAR_6 ;

 unsigned int VAR_7 ;


 unsigned int VAR_8 ;

 unsigned int VAR_9 ;

 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (int) ;
 struct s2mpa01_info* FUNC_2 (struct regulator_dev*) ;
 int const FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_12, int VAR_13)
{
 struct s2mpa01_info *VAR_14 = FUNC_2(VAR_12);
 unsigned int VAR_15, VAR_16, VAR_17 = VAR_11;
 unsigned int VAR_18 = 1, VAR_19 = 0;
 int VAR_20;

 switch (FUNC_3(VAR_12)) {
 case 137:
  VAR_19 = VAR_1;
  if (!VAR_13) {
   VAR_18 = 0;
   break;
  }

  if (VAR_13 > VAR_14->ramp_delay16)
   VAR_14->ramp_delay16 = VAR_13;
  else
   VAR_13 = VAR_14->ramp_delay16;

  VAR_16 = VAR_0;
  break;
 case 135:
  VAR_19 = VAR_3;
  if (!VAR_13) {
   VAR_18 = 0;
   break;
  }

  if (VAR_13 > VAR_14->ramp_delay24)
   VAR_14->ramp_delay24 = VAR_13;
  else
   VAR_13 = VAR_14->ramp_delay24;

  VAR_16 = VAR_2;
  VAR_17 = VAR_10;
  break;
 case 134:
  VAR_19 = VAR_4;
  if (!VAR_13) {
   VAR_18 = 0;
   break;
  }

  VAR_14->ramp_delay3 = VAR_13;
  VAR_16 = VAR_5;
  VAR_17 = VAR_10;
  break;
 case 133:
  VAR_19 = VAR_6;
  if (!VAR_13) {
   VAR_18 = 0;
   break;
  }

  if (VAR_13 > VAR_14->ramp_delay24)
   VAR_14->ramp_delay24 = VAR_13;
  else
   VAR_13 = VAR_14->ramp_delay24;

  VAR_16 = VAR_2;
  VAR_17 = VAR_10;
  break;
 case 132:
  VAR_14->ramp_delay5 = VAR_13;
  VAR_16 = VAR_7;
  break;
 case 131:
  if (VAR_13 > VAR_14->ramp_delay16)
   VAR_14->ramp_delay16 = VAR_13;
  else
   VAR_13 = VAR_14->ramp_delay16;

  VAR_16 = VAR_0;
  break;
 case 130:
  VAR_14->ramp_delay7 = VAR_13;
  VAR_16 = VAR_8;
  break;
 case 129:
 case 128:
 case 136:
  if (VAR_13 > VAR_14->ramp_delay8910)
   VAR_14->ramp_delay8910 = VAR_13;
  else
   VAR_13 = VAR_14->ramp_delay8910;

  VAR_16 = VAR_9;
  break;
 default:
  return 0;
 }

 if (!VAR_18)
  goto ramp_disable;


 if (FUNC_3(VAR_12) >= 137 &&
   FUNC_3(VAR_12) <= 133) {
  VAR_20 = FUNC_4(VAR_12->regmap, VAR_10,
      1 << VAR_19, 1 << VAR_19);
  if (VAR_20) {
   FUNC_0(&VAR_12->dev, "failed to enable ramp rate\n");
   return VAR_20;
  }
 }

 VAR_15 = FUNC_1(VAR_13);

 return FUNC_4(VAR_12->regmap, VAR_17, 0x3 << VAR_16,
      VAR_15 << VAR_16);

ramp_disable:
 return FUNC_4(VAR_12->regmap, VAR_10,
      1 << VAR_19, 0);
}
