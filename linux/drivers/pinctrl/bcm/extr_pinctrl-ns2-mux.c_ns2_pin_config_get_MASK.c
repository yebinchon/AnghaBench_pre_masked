
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_6__ {int base; } ;
struct ns2_pin {TYPE_3__ pin_conf; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_5__ {TYPE_1__* pins; } ;
struct TYPE_4__ {struct ns2_pin* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,int*,int*) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,int *) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int *) ;
 unsigned long FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
         unsigned long *VAR_4)
{
 struct ns2_pin *VAR_5 = VAR_2->desc->pins[VAR_3].drv_data;
 enum pin_config_param VAR_6 = FUNC_5(*VAR_4);
 bool VAR_7, VAR_8;
 u16 VAR_9 = 0;
 int VAR_10;

 if (VAR_5->pin_conf.base == -1)
  return -VAR_1;

 switch (VAR_6) {
 case 133:
  FUNC_1(VAR_2, VAR_3, &VAR_7, &VAR_8);
  if ((VAR_7 == 0) && (VAR_8 == 0))
   return 0;
  else
   return -VAR_0;

 case 131:
  FUNC_1(VAR_2, VAR_3, &VAR_7, &VAR_8);
  if (VAR_7)
   return 0;
  else
   return -VAR_0;

 case 132:
  FUNC_1(VAR_2, VAR_3, &VAR_7, &VAR_8);
  if (VAR_8)
   return 0;
  else
   return -VAR_0;

 case 130:
  VAR_10 = FUNC_3(VAR_2, VAR_3, &VAR_9);
  if (VAR_10)
   return VAR_10;
  *VAR_4 = FUNC_4(VAR_6, VAR_9);
  return 0;

 case 128:
  VAR_10 = FUNC_2(VAR_2, VAR_3, &VAR_9);
  if (VAR_10)
   return VAR_10;
  *VAR_4 = FUNC_4(VAR_6, VAR_9);
  return 0;

 case 129:
  VAR_10 = FUNC_0(VAR_2, VAR_3);
  if (VAR_10)
   return 0;
  else
   return -VAR_0;

 default:
  return -VAR_1;
 }
}
