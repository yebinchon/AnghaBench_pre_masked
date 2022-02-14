
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_3,
      enum pin_config_param VAR_4,
      u32 VAR_5, u32 *VAR_6)
{
 switch (VAR_4) {
 case 128:
  if (VAR_5)
   *VAR_6 &= ~VAR_2;
  else
   *VAR_6 |= VAR_2;
  break;

 case 130:
  *VAR_6 &= ~VAR_1;
  break;

 case 129:
  *VAR_6 |= VAR_1;
  break;

 default:
  FUNC_0(VAR_3->dev, "Property not supported\n");
  return -VAR_0;
 }

 return 0;
}
