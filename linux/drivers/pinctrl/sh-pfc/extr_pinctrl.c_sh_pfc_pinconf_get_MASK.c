
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sh_pfc_pinctrl {struct sh_pfc* pfc; } ;
struct sh_pfc {int lock; TYPE_2__* info; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned int (* get_bias ) (struct sh_pfc*,unsigned int) ;int (* pin_to_pocctrl ) (struct sh_pfc*,unsigned int,int*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;





 int FUNC_1 (int,char*,unsigned int) ;
 unsigned long FUNC_2 (int,unsigned int) ;
 int FUNC_3 (unsigned long) ;
 struct sh_pfc_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (struct sh_pfc*,unsigned int) ;
 int FUNC_6 (struct sh_pfc*,unsigned int,int) ;
 int FUNC_7 (struct sh_pfc*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 unsigned int FUNC_10 (struct sh_pfc*,unsigned int) ;
 int FUNC_11 (struct sh_pfc*,unsigned int,int*) ;

__attribute__((used)) static int FUNC_12(struct pinctrl_dev *VAR_2, unsigned VAR_3,
         unsigned long *VAR_4)
{
 struct sh_pfc_pinctrl *VAR_5 = FUNC_4(VAR_2);
 struct sh_pfc *VAR_6 = VAR_5->pfc;
 enum pin_config_param VAR_7 = FUNC_3(*VAR_4);
 unsigned long VAR_8;
 unsigned int VAR_9;

 if (!FUNC_6(VAR_6, VAR_3, VAR_7))
  return -VAR_1;

 switch (VAR_7) {
 case 132:
 case 130:
 case 131: {
  unsigned int VAR_10;

  if (!VAR_6->info->ops || !VAR_6->info->ops->get_bias)
   return -VAR_1;

  FUNC_8(&VAR_6->lock, VAR_8);
  VAR_10 = VAR_6->info->ops->get_bias(VAR_6, VAR_3);
  FUNC_9(&VAR_6->lock, VAR_8);

  if (VAR_10 != VAR_7)
   return -VAR_0;

  VAR_9 = 0;
  break;
 }

 case 129: {
  int VAR_11;

  VAR_11 = FUNC_5(VAR_6, VAR_3);
  if (VAR_11 < 0)
   return VAR_11;

  VAR_9 = VAR_11;
  break;
 }

 case 128: {
  u32 VAR_12, VAR_13;
  int VAR_14;

  if (!VAR_6->info->ops || !VAR_6->info->ops->pin_to_pocctrl)
   return -VAR_1;

  VAR_14 = VAR_6->info->ops->pin_to_pocctrl(VAR_6, VAR_3, &VAR_12);
  if (FUNC_1(VAR_14 < 0, "invalid pin %#x", VAR_3))
   return VAR_14;

  FUNC_8(&VAR_6->lock, VAR_8);
  VAR_13 = FUNC_7(VAR_6, VAR_12);
  FUNC_9(&VAR_6->lock, VAR_8);

  VAR_9 = (VAR_13 & FUNC_0(VAR_14)) ? 3300 : 1800;
  break;
 }

 default:
  return -VAR_1;
 }

 *VAR_4 = FUNC_2(VAR_7, VAR_9);
 return 0;
}
