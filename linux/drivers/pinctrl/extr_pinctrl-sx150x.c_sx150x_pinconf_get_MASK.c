
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
struct TYPE_4__ {int reg_drain; int reg_clock; } ;
struct TYPE_5__ {TYPE_1__ x789; } ;
struct TYPE_6__ {TYPE_2__ pri; int model; int reg_pullup; int reg_pulldn; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 unsigned long FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct sx150x_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 (struct sx150x_pinctrl*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_3, unsigned int VAR_4,
         unsigned long *VAR_5)
{
 struct sx150x_pinctrl *VAR_6 = FUNC_3(VAR_3);
 unsigned int VAR_7 = FUNC_2(*VAR_5);
 int VAR_8;
 u32 VAR_9;
 unsigned int VAR_10;

 if (FUNC_7(VAR_6, VAR_4)) {
  switch (VAR_7) {
  case 129:
  case 128:
   VAR_8 = FUNC_4(VAR_6->regmap,
       VAR_6->data->pri.x789.reg_clock,
       &VAR_10);
   if (VAR_8 < 0)
    return VAR_8;

   if (VAR_7 == 129)
    VAR_9 = (VAR_10 & 0x1f) ? 1 : 0;
   else {
    if ((VAR_10 & 0x1f) == 0x1f)
     VAR_9 = 1;
    else if ((VAR_10 & 0x1f) == 0x10)
     VAR_9 = 0;
    else
     return -VAR_0;
   }

   break;
  default:
   return -VAR_1;
  }

  goto out;
 }

 switch (VAR_7) {
 case 132:
  VAR_8 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pulldn,
      &VAR_10);
  VAR_10 &= FUNC_0(VAR_4);

  if (VAR_8 < 0)
   return VAR_8;

  if (!VAR_8)
   return -VAR_0;

  VAR_9 = 1;
  break;

 case 131:
  VAR_8 = FUNC_4(VAR_6->regmap,
      VAR_6->data->reg_pullup,
      &VAR_10);
  VAR_10 &= FUNC_0(VAR_4);

  if (VAR_8 < 0)
   return VAR_8;

  if (!VAR_8)
   return -VAR_0;

  VAR_9 = 1;
  break;

 case 130:
  if (VAR_6->data->model != VAR_2)
   return -VAR_1;

  VAR_8 = FUNC_4(VAR_6->regmap,
      VAR_6->data->pri.x789.reg_drain,
      &VAR_10);
  VAR_10 &= FUNC_0(VAR_4);

  if (VAR_8 < 0)
   return VAR_8;

  if (!VAR_10)
   return -VAR_0;

  VAR_9 = 1;
  break;

 case 129:
  if (VAR_6->data->model != VAR_2)
   VAR_9 = 1;
  else {
   VAR_8 = FUNC_4(VAR_6->regmap,
       VAR_6->data->pri.x789.reg_drain,
       &VAR_10);
   VAR_10 &= FUNC_0(VAR_4);

   if (VAR_8 < 0)
    return VAR_8;

   if (VAR_10)
    return -VAR_0;

   VAR_9 = 1;
  }
  break;

 case 128:
  VAR_8 = FUNC_6(&VAR_6->gpio, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_8)
   return -VAR_0;

  VAR_8 = FUNC_5(&VAR_6->gpio, VAR_4);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = VAR_8;
  break;

 default:
  return -VAR_1;
 }

out:
 *VAR_5 = FUNC_1(VAR_7, VAR_9);

 return 0;
}
