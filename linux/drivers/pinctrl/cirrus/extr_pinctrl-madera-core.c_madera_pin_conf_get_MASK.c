
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {int dev; TYPE_1__* madera; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,unsigned int,int) ;
 unsigned int FUNC_1 (struct madera_pin_private*,unsigned int) ;
 unsigned long FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (unsigned long) ;
 struct madera_pin_private* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_11, unsigned int VAR_12,
          unsigned long *VAR_13)
{
 struct madera_pin_private *VAR_14 = FUNC_4(VAR_11);
 unsigned int VAR_15 = FUNC_3(*VAR_13);
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = VAR_10 + (2 * VAR_12);
 unsigned int VAR_18[2];
 int VAR_19;

 VAR_19 = FUNC_5(VAR_14->madera->regmap, VAR_17, &VAR_18[0]);
 if (!VAR_19)
  VAR_19 = FUNC_5(VAR_14->madera->regmap, VAR_17 + 1, &VAR_18[1]);

 if (VAR_19) {
  FUNC_0(VAR_14->dev, "Failed to read GP%d conf (%d)\n",
   VAR_12 + 1, VAR_19);
  return VAR_19;
 }

 switch (VAR_15) {
 case 139:
  VAR_18[1] &= VAR_9 | VAR_7;
  if (VAR_18[1] == (VAR_8 | VAR_6))
   VAR_16 = 1;
  break;
 case 138:
  VAR_18[1] &= VAR_9 | VAR_7;
  if (!VAR_18[1])
   VAR_16 = 1;
  break;
 case 137:
  VAR_18[1] &= VAR_9 | VAR_7;
  if (VAR_18[1] == VAR_7)
   VAR_16 = 1;
  break;
 case 136:
  VAR_18[1] &= VAR_9 | VAR_7;
  if (VAR_18[1] == VAR_9)
   VAR_16 = 1;
  break;
 case 135:
  if (VAR_18[0] & VAR_5)
   VAR_16 = 1;
  break;
 case 134:
  if (!(VAR_18[0] & VAR_5))
   VAR_16 = 1;
  break;
 case 133:
  VAR_16 = FUNC_1(VAR_14, VAR_18[1]);
  break;
 case 132:
  if (VAR_18[0] & VAR_1)
   VAR_16 = 1;
  break;
 case 131:
  if (VAR_18[0] & VAR_2)
   VAR_16 = 1;
  break;
 case 130:
 case 129:
  if (VAR_18[0] & VAR_3)
   VAR_16 = 1;
  break;
 case 128:
  if ((VAR_18[1] & VAR_2) &&
      (VAR_18[0] & VAR_4))
   VAR_16 = 1;
  break;
 default:
  return -VAR_0;
 }

 *VAR_13 = FUNC_2(VAR_15, VAR_16);

 return 0;
}
