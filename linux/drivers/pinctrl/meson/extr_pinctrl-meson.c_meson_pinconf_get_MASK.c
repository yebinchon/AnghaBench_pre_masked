
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct meson_pinctrl {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,char*,unsigned int,unsigned long) ;
 int FUNC_1 (struct meson_pinctrl*,unsigned int) ;
 int FUNC_2 (struct meson_pinctrl*,unsigned int,int*) ;
 int FUNC_3 (struct meson_pinctrl*,unsigned int) ;
 int FUNC_4 (struct meson_pinctrl*,unsigned int) ;
 unsigned long FUNC_5 (int,int) ;
 int FUNC_6 (unsigned long) ;
 struct meson_pinctrl* FUNC_7 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
        unsigned long *VAR_4)
{
 struct meson_pinctrl *VAR_5 = FUNC_7(VAR_2);
 enum pin_config_param VAR_6 = FUNC_6(*VAR_4);
 u16 VAR_7;
 int VAR_8;

 switch (VAR_6) {
 case 133:
 case 132:
 case 131:
  if (FUNC_4(VAR_5, VAR_3) == VAR_6)
   VAR_7 = 1;
  else
   return -VAR_0;
  break;
 case 130:
  VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_7);
  if (VAR_8)
   return VAR_8;
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_5, VAR_3);
  if (VAR_8 <= 0)
   return -VAR_0;
  VAR_7 = 1;
  break;
 case 129:
  VAR_8 = FUNC_3(VAR_5, VAR_3);
  if (VAR_8 <= 0)
   return -VAR_0;

  VAR_8 = FUNC_1(VAR_5, VAR_3);
  if (VAR_8 < 0)
   return -VAR_0;

  VAR_7 = VAR_8;
  break;

 default:
  return -VAR_1;
 }

 *VAR_4 = FUNC_5(VAR_6, VAR_7);
 FUNC_0(VAR_5->dev, "pinconf for pin %u is %lu\n", VAR_3, *VAR_4);

 return 0;
}
