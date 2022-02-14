
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sx150x_pinctrl {int gpio; TYPE_3__* data; int regmap; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_4__ {int reg_drain; } ;
struct TYPE_5__ {TYPE_1__ x789; } ;
struct TYPE_6__ {TYPE_2__ pri; int model; int reg_pulldn; int reg_pullup; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;







 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct sx150x_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_6 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
         unsigned long *VAR_4, unsigned int VAR_5)
{
 struct sx150x_pinctrl *VAR_6 = FUNC_3(VAR_2);
 enum pin_config_param VAR_7;
 u32 VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7 = FUNC_2(VAR_4[VAR_9]);
  VAR_8 = FUNC_1(VAR_4[VAR_9]);

  if (FUNC_6(VAR_6, VAR_3)) {
   if (VAR_7 == 128) {
    VAR_10 = FUNC_5(&VAR_6->gpio,
           VAR_3, VAR_8);
    if (VAR_10 < 0)
     return VAR_10;

    continue;
   } else
    return -VAR_0;
  }

  switch (VAR_7) {
  case 132:
  case 134:
   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pulldn,
      FUNC_0(VAR_3), 0);
   if (VAR_10 < 0)
    return VAR_10;

   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pullup,
      FUNC_0(VAR_3), 0);
   if (VAR_10 < 0)
    return VAR_10;

   break;

  case 131:
   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pullup,
      FUNC_0(VAR_3), FUNC_0(VAR_3));
   if (VAR_10 < 0)
    return VAR_10;

   break;

  case 133:
   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pulldn,
      FUNC_0(VAR_3), FUNC_0(VAR_3));
   if (VAR_10 < 0)
    return VAR_10;

   break;

  case 130:
   if (VAR_6->data->model != VAR_1 ||
       FUNC_6(VAR_6, VAR_3))
    return -VAR_0;

   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->pri.x789.reg_drain,
      FUNC_0(VAR_3), FUNC_0(VAR_3));
   if (VAR_10 < 0)
    return VAR_10;

   break;

  case 129:
   if (VAR_6->data->model != VAR_1 ||
       FUNC_6(VAR_6, VAR_3))
    return 0;

   VAR_10 = FUNC_4(VAR_6->regmap,
      VAR_6->data->pri.x789.reg_drain,
      FUNC_0(VAR_3), 0);
   if (VAR_10 < 0)
    return VAR_10;

   break;

  case 128:
   VAR_10 = FUNC_5(&VAR_6->gpio,
          VAR_3, VAR_8);
   if (VAR_10 < 0)
    return VAR_10;

   break;

  default:
   return -VAR_0;
  }
 }

 return 0;
}
