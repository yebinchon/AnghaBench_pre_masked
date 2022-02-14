
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_pinctrl {int dev; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_6 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;







 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct pistachio_pinctrl*,int ) ;
 unsigned long FUNC_10 (int,int) ;
 int FUNC_11 (unsigned long) ;
 struct pistachio_pinctrl* FUNC_12 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_13(struct pinctrl_dev *VAR_7, unsigned VAR_8,
     unsigned long *VAR_9)
{
 struct pistachio_pinctrl *VAR_10 = FUNC_12(VAR_7);
 enum pin_config_param VAR_11 = FUNC_11(*VAR_9);
 u32 VAR_12, VAR_13;

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_9(VAR_10, FUNC_5(VAR_8));
  VAR_13 = !!(VAR_12 & FUNC_4(VAR_8));
  break;
 case 133:
  VAR_12 = FUNC_9(VAR_10, FUNC_2(VAR_8)) >>
   FUNC_3(VAR_8);
  VAR_13 = (VAR_12 & VAR_5) == VAR_4;
  break;
 case 131:
  VAR_12 = FUNC_9(VAR_10, FUNC_2(VAR_8)) >>
   FUNC_3(VAR_8);
  VAR_13 = (VAR_12 & VAR_5) == VAR_6;
  break;
 case 132:
  VAR_12 = FUNC_9(VAR_10, FUNC_2(VAR_8)) >>
   FUNC_3(VAR_8);
  VAR_13 = (VAR_12 & VAR_5) == VAR_3;
  break;
 case 134:
  VAR_12 = FUNC_9(VAR_10, FUNC_2(VAR_8)) >>
   FUNC_3(VAR_8);
  VAR_13 = (VAR_12 & VAR_5) == VAR_2;
  break;
 case 128:
  VAR_12 = FUNC_9(VAR_10, FUNC_7(VAR_8));
  VAR_13 = !!(VAR_12 & FUNC_6(VAR_8));
  break;
 case 130:
  VAR_12 = FUNC_9(VAR_10, FUNC_0(VAR_8)) >>
   FUNC_1(VAR_8);
  switch (VAR_12 & VAR_1) {
  case 137:
   VAR_13 = 2;
   break;
  case 136:
   VAR_13 = 4;
   break;
  case 135:
   VAR_13 = 8;
   break;
  case 138:
  default:
   VAR_13 = 12;
   break;
  }
  break;
 default:
  FUNC_8(VAR_10->dev, "Property %u not supported\n", VAR_11);
  return -VAR_0;
 }

 *VAR_9 = FUNC_10(VAR_11, VAR_13);

 return 0;
}
