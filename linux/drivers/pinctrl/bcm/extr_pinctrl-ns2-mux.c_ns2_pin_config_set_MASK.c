
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dev; TYPE_2__* desc; } ;
struct TYPE_6__ {int base; } ;
struct ns2_pin {TYPE_3__ pin_conf; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct ns2_pin* drv_data; } ;


 int VAR_0 ;






 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,int,int) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_4 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
         unsigned long *VAR_3, unsigned int VAR_4)
{
 struct ns2_pin *VAR_5 = VAR_1->desc->pins[VAR_2].drv_data;
 enum pin_config_param VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;
 int VAR_9 = -VAR_0;

 if (VAR_5->pin_conf.base == -1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_6(VAR_3[VAR_7]);
  VAR_8 = FUNC_5(VAR_3[VAR_7]);

  switch (VAR_6) {
  case 133:
   VAR_9 = FUNC_2(VAR_1, VAR_2, 0, 0);
   if (VAR_9 < 0)
    goto out;
   break;

  case 131:
   VAR_9 = FUNC_2(VAR_1, VAR_2, 1, 0);
   if (VAR_9 < 0)
    goto out;
   break;

  case 132:
   VAR_9 = FUNC_2(VAR_1, VAR_2, 0, 1);
   if (VAR_9 < 0)
    goto out;
   break;

  case 130:
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_8);
   if (VAR_9 < 0)
    goto out;
   break;

  case 128:
   VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_8);
   if (VAR_9 < 0)
    goto out;
   break;

  case 129:
   VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_8);
   if (VAR_9 < 0)
    goto out;
   break;

  default:
   FUNC_0(VAR_1->dev, "invalid configuration\n");
   return -VAR_0;
  }
 }
out:
 return VAR_9;
}
