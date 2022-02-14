
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pinctrl_dev {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 unsigned int VAR_7 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_8,
      enum pin_config_param VAR_9,
      u32 VAR_10, u32 *VAR_11,
      unsigned VAR_12)
{
 u8 VAR_13;

 if (VAR_12 == VAR_7)
  VAR_13 = VAR_4;
 else
  VAR_13 = VAR_5;

 switch (VAR_9) {
 case 131:
  if (VAR_10)
   *VAR_11 |= (VAR_3 << VAR_13);
  else
   *VAR_11 &= ~(VAR_3 << VAR_13);
  break;

 case 128:
  if (VAR_10)
   *VAR_11 |= (VAR_2 << VAR_13);
  else
   *VAR_11 &= ~(VAR_2 << VAR_13);
  break;

 case 130:
  if (VAR_10 == 3)
   *VAR_11 |= (VAR_1 << VAR_13);
  else if (VAR_10 == 50)
   *VAR_11 &= ~(VAR_1 << VAR_13);
  else
   return -VAR_0;
  break;

 case 129:
  if (VAR_10)
   *VAR_11 &= ~(VAR_6 << VAR_13);
  else
   *VAR_11 |= (VAR_6 << VAR_13);
  break;

 default:
  FUNC_0(VAR_8->dev, "Property not supported\n");
  return -VAR_0;
 }

 return 0;
}
