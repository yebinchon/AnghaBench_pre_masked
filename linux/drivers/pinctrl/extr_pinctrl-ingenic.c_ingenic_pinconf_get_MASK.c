
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct ingenic_pinctrl {scalar_t__ version; TYPE_1__* info; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int* pull_ups; int* pull_downs; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;



 int FUNC_1 (struct ingenic_pinctrl*,unsigned int,int ) ;
 unsigned long FUNC_2 (int,int) ;
 int FUNC_3 (unsigned long) ;
 struct ingenic_pinctrl* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_6,
  unsigned int VAR_7, unsigned long *VAR_8)
{
 struct ingenic_pinctrl *VAR_9 = FUNC_4(VAR_6);
 enum pin_config_param VAR_10 = FUNC_3(*VAR_8);
 unsigned int VAR_11 = VAR_7 % VAR_5;
 unsigned int VAR_12 = VAR_7 / VAR_5;
 bool VAR_13;

 if (VAR_9->version >= VAR_2)
  VAR_13 = !FUNC_1(VAR_9, VAR_7, VAR_4);
 else
  VAR_13 = !FUNC_1(VAR_9, VAR_7, VAR_3);

 switch (VAR_10) {
 case 130:
  if (VAR_13)
   return -VAR_0;
  break;

 case 128:
  if (!VAR_13 || !(VAR_9->info->pull_ups[VAR_12] & FUNC_0(VAR_11)))
   return -VAR_0;
  break;

 case 129:
  if (!VAR_13 || !(VAR_9->info->pull_downs[VAR_12] & FUNC_0(VAR_11)))
   return -VAR_0;
  break;

 default:
  return -VAR_1;
 }

 *VAR_8 = FUNC_2(VAR_10, 1);
 return 0;
}
