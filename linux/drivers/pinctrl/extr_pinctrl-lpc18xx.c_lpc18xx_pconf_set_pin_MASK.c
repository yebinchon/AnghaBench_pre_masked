
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dev; } ;
struct lpc18xx_pin_caps {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pinctrl_dev*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_9, unsigned VAR_10,
     u32 VAR_11, u32 *VAR_12, unsigned VAR_13,
     struct lpc18xx_pin_caps *VAR_14)
{
 switch (VAR_10) {
 case 135:
  *VAR_12 &= ~VAR_4;
  *VAR_12 |= VAR_5;
  break;

 case 133:
  *VAR_12 &= ~VAR_5;
  break;

 case 134:
  *VAR_12 |= VAR_4;
  break;

 case 130:
  if (VAR_11)
   *VAR_12 |= VAR_6;
  else
   *VAR_12 &= ~VAR_6;
  break;

 case 128:
  if (VAR_14->type == VAR_8) {
   FUNC_0(VAR_9->dev, "Slew rate unsupported on high-drive pins\n");
   return -VAR_0;
  }

  if (VAR_11 == 0)
   *VAR_12 &= ~VAR_3;
  else
   *VAR_12 |= VAR_3;
  break;

 case 129:
  if (VAR_11)
   *VAR_12 &= ~VAR_7;
  else
   *VAR_12 |= VAR_7;
  break;

 case 132:
  if (VAR_14->type != VAR_8) {
   FUNC_0(VAR_9->dev, "Drive strength available only on high-drive pins\n");
   return -VAR_0;
  }
  *VAR_12 &= ~VAR_1;

  switch (VAR_11) {
  case 20: VAR_11 -= 5;

  case 14: VAR_11 -= 5;

  case 8: VAR_11 -= 3;

  case 4: VAR_11 -= 4;
    break;
  default:
   FUNC_0(VAR_9->dev, "Drive strength %u unsupported\n", VAR_11);
   return -VAR_0;
  }
  *VAR_12 |= VAR_11 << VAR_2;
  break;

 case 131:
  return FUNC_1(VAR_9, VAR_11, VAR_13);

 default:
  FUNC_0(VAR_9->dev, "Property not supported\n");
  return -VAR_0;
 }

 return 0;
}
