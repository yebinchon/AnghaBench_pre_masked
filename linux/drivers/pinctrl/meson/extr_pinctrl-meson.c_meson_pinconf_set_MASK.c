
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct meson_pinctrl {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;






 int FUNC_0 (struct meson_pinctrl*,unsigned int) ;
 int FUNC_1 (struct meson_pinctrl*,unsigned int,int) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,unsigned int) ;
 int FUNC_3 (struct meson_pinctrl*,unsigned int,unsigned int) ;
 int FUNC_4 (struct meson_pinctrl*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 struct meson_pinctrl* FUNC_7 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
        unsigned long *VAR_3, unsigned VAR_4)
{
 struct meson_pinctrl *VAR_5 = FUNC_7(VAR_1);
 enum pin_config_param VAR_6;
 unsigned int VAR_7 = 0;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_6 = FUNC_6(VAR_3[VAR_8]);

  switch (VAR_6) {
  case 130:
  case 128:
  case 129:
   VAR_7 = FUNC_5(VAR_3[VAR_8]);
   break;

  default:
   break;
  }

  switch (VAR_6) {
  case 133:
   VAR_9 = FUNC_0(VAR_5, VAR_2);
   break;
  case 131:
   VAR_9 = FUNC_1(VAR_5, VAR_2, 1);
   break;
  case 132:
   VAR_9 = FUNC_1(VAR_5, VAR_2, 0);
   break;
  case 130:
   VAR_9 = FUNC_2(VAR_5, VAR_2, VAR_7);
   break;
  case 128:
   VAR_9 = FUNC_3(VAR_5, VAR_2, VAR_7);
   break;
  case 129:
   VAR_9 = FUNC_4(VAR_5, VAR_2, VAR_7);
   break;
  default:
   VAR_9 = -VAR_0;
  }

  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
