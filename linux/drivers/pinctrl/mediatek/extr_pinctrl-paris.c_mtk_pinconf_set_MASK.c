
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int (* bias_disable_set ) (struct mtk_pinctrl*,struct mtk_pin_desc const*) ;int (* bias_set ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;int (* drive_set ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;int (* adv_pull_set ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int) ;int (* adv_drive_set ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;int ies_present; int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int ,int) ;
 struct mtk_pinctrl* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (struct mtk_pinctrl*,struct mtk_pin_desc const*) ;
 int FUNC_3 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;
 int FUNC_4 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;
 int FUNC_5 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;
 int FUNC_6 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int) ;
 int FUNC_7 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_12, unsigned int VAR_13,
      enum pin_config_param VAR_14,
      enum pin_config_param VAR_15)
{
 struct mtk_pinctrl *VAR_16 = FUNC_1(VAR_12);
 const struct mtk_pin_desc *VAR_17;
 int VAR_18 = 0;
 u32 VAR_19;

 VAR_17 = (const struct mtk_pin_desc *)&VAR_16->soc->pins[VAR_13];

 switch ((u32)VAR_14) {
 case 136:
  if (VAR_16->soc->bias_disable_set) {
   VAR_18 = VAR_16->soc->bias_disable_set(VAR_16, VAR_17);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 case 134:
  if (VAR_16->soc->bias_set) {
   VAR_18 = VAR_16->soc->bias_set(VAR_16, VAR_17, 1);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 case 135:
  if (VAR_16->soc->bias_set) {
   VAR_18 = VAR_16->soc->bias_set(VAR_16, VAR_17, 0);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 case 129:
  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_9,
           VAR_1);
  if (VAR_18)
   goto err;

  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_5,
           VAR_4);
  if (VAR_18)
   goto err;
  break;
 case 132:
  if (VAR_16->soc->ies_present) {
   FUNC_0(VAR_16, VAR_17, VAR_7,
      VAR_2);
  }

  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_5,
           VAR_3);
  if (VAR_18)
   goto err;
  break;
 case 128:
  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_10,
           VAR_15);
  if (VAR_18)
   goto err;

  break;
 case 130:
  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_5,
           VAR_4);
  if (VAR_18)
   goto err;

  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_6,
           VAR_15);
  if (VAR_18)
   goto err;
  break;
 case 131:



  VAR_15 = VAR_15 ? 2 : 1;
  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_5,
           VAR_15 & 1);
  if (VAR_18)
   goto err;

  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_9,
           !!(VAR_15 & 2));
  if (VAR_18)
   goto err;
  break;
 case 133:
  if (VAR_16->soc->drive_set) {
   VAR_18 = VAR_16->soc->drive_set(VAR_16, VAR_17, VAR_15);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 case 137:
 case 138:
  VAR_19 = (VAR_14 == 137) ?
         VAR_11 : VAR_8;

  VAR_18 = FUNC_0(VAR_16, VAR_17, VAR_19, VAR_15);
  if (VAR_18)
   goto err;
  break;
 case 139:
 case 140:
  if (VAR_16->soc->adv_pull_set) {
   bool VAR_20;

   VAR_20 = VAR_14 == 139;
   VAR_18 = VAR_16->soc->adv_pull_set(VAR_16, VAR_17, VAR_20,
          VAR_15);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 case 141:
  if (VAR_16->soc->adv_drive_set) {
   VAR_18 = VAR_16->soc->adv_drive_set(VAR_16, VAR_17, VAR_15);
   if (VAR_18)
    return VAR_18;
  } else {
   return -VAR_0;
  }
  break;
 default:
  VAR_18 = -VAR_0;
 }

err:
 return VAR_18;
}
