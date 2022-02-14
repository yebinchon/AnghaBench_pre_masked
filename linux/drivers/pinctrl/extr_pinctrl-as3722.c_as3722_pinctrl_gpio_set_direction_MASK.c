
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct as3722_pctrl_info {int dev; TYPE_1__* gpio_control; struct as3722* as3722; } ;
struct as3722 {int dummy; } ;
struct TYPE_2__ {int mode_prop; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct as3722*,int ,int ,int) ;
 int FUNC_3 (int ,char*,char*,unsigned int) ;
 struct as3722_pctrl_info* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
  struct pinctrl_gpio_range *VAR_2, unsigned VAR_3, bool VAR_4)
{
 struct as3722_pctrl_info *VAR_5 = FUNC_4(VAR_1);
 struct as3722 *VAR_6 = VAR_5->as3722;
 int VAR_7;

 VAR_7 = FUNC_1(
   VAR_5->gpio_control[VAR_3].mode_prop, VAR_4);
 if (VAR_7 < 0) {
  FUNC_3(VAR_5->dev, "%s direction for GPIO %d not supported\n",
   (VAR_4) ? "Input" : "Output", VAR_3);
  return VAR_7;
 }

 return FUNC_2(VAR_6, FUNC_0(VAR_3),
    VAR_0, VAR_7);
}
