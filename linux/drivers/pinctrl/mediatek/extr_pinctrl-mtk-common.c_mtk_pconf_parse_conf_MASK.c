
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {int chip; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;







 int FUNC_0 (int ,unsigned int,int) ;
 int FUNC_1 (struct mtk_pinctrl*,unsigned int,int) ;
 int FUNC_2 (struct mtk_pinctrl*,unsigned int,int,int) ;
 int FUNC_3 (struct mtk_pinctrl*,unsigned int,int,int,int) ;
 int FUNC_4 (struct pinctrl_dev*,int *,unsigned int,int) ;
 struct mtk_pinctrl* FUNC_5 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
  unsigned int VAR_2, enum pin_config_param VAR_3,
  enum pin_config_param VAR_4)
{
 int VAR_5 = 0;
 struct mtk_pinctrl *VAR_6 = FUNC_5(VAR_1);

 switch (VAR_3) {
 case 134:
  VAR_5 = FUNC_3(VAR_6, VAR_2, 0, 0, VAR_4);
  break;
 case 132:
  VAR_5 = FUNC_3(VAR_6, VAR_2, 1, 1, VAR_4);
  break;
 case 133:
  VAR_5 = FUNC_3(VAR_6, VAR_2, 1, 0, VAR_4);
  break;
 case 130:
  FUNC_4(VAR_1, ((void*)0), VAR_2, 1);
  VAR_5 = FUNC_2(VAR_6, VAR_2, VAR_4, VAR_3);
  break;
 case 128:
  FUNC_0(VAR_6->chip, VAR_2, VAR_4);
  VAR_5 = FUNC_4(VAR_1, ((void*)0), VAR_2, 0);
  break;
 case 129:
  FUNC_4(VAR_1, ((void*)0), VAR_2, 1);
  VAR_5 = FUNC_2(VAR_6, VAR_2, VAR_4, VAR_3);
  break;
 case 131:
  VAR_5 = FUNC_1(VAR_6, VAR_2, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
