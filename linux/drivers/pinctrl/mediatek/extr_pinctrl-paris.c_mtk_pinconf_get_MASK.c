
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct mtk_pinctrl {TYPE_1__* soc; } ;
struct mtk_pin_desc {int dummy; } ;
struct TYPE_2__ {int (* bias_disable_get ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;int (* bias_get ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;int (* drive_get ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;int (* adv_pull_get ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;int (* adv_drive_get ) (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;int * pins; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct mtk_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;
 int FUNC_5 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;
 int FUNC_6 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;
 int FUNC_7 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;
 int FUNC_8 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int,int*) ;
 int FUNC_9 (struct mtk_pinctrl*,struct mtk_pin_desc const*,int*) ;

__attribute__((used)) static int FUNC_10(struct pinctrl_dev *VAR_7,
      unsigned int VAR_8, unsigned long *VAR_9)
{
 struct mtk_pinctrl *VAR_10 = FUNC_3(VAR_7);
 u32 VAR_11 = FUNC_2(*VAR_9);
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = 1;
 const struct mtk_pin_desc *VAR_17;

 VAR_17 = (const struct mtk_pin_desc *)&VAR_10->soc->pins[VAR_8];

 switch (VAR_11) {
 case 135:
  if (VAR_10->soc->bias_disable_get) {
   VAR_14 = VAR_10->soc->bias_disable_get(VAR_10, VAR_17, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   return -VAR_1;
  }
  break;
 case 133:
  if (VAR_10->soc->bias_get) {
   VAR_14 = VAR_10->soc->bias_get(VAR_10, VAR_17, 1, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   return -VAR_1;
  }
  break;
 case 134:
  if (VAR_10->soc->bias_get) {
   VAR_14 = VAR_10->soc->bias_get(VAR_10, VAR_17, 0, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   return -VAR_1;
  }
  break;
 case 128:
  VAR_14 = FUNC_0(VAR_10, VAR_17, VAR_5, &VAR_12);
  if (VAR_14)
   return VAR_14;

  if (!VAR_12)
   return -VAR_0;

  break;
 case 131:
 case 129:
  VAR_14 = FUNC_0(VAR_10, VAR_17, VAR_2, &VAR_12);
  if (VAR_14)
   return VAR_14;


  if ((VAR_12 && VAR_11 == 131) ||
      (!VAR_12 && VAR_11 == 129))
   return -VAR_0;

  break;
 case 130:
  VAR_14 = FUNC_0(VAR_10, VAR_17, VAR_2, &VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_0(VAR_10, VAR_17, VAR_4, &VAR_13);
  if (VAR_14)
   return VAR_14;

  if (VAR_12 || !VAR_13)
   return -VAR_0;

  break;
 case 132:
  if (VAR_10->soc->drive_get) {
   VAR_14 = VAR_10->soc->drive_get(VAR_10, VAR_17, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   VAR_14 = -VAR_1;
  }
  break;
 case 136:
 case 137:
  VAR_15 = (VAR_11 == 136) ?
         VAR_6 : VAR_3;

  VAR_14 = FUNC_0(VAR_10, VAR_17, VAR_15, &VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_16 = VAR_12;

  break;
 case 138:
 case 139:
  if (VAR_10->soc->adv_pull_get) {
   bool VAR_18;

   VAR_18 = VAR_11 == 138;
   VAR_14 = VAR_10->soc->adv_pull_get(VAR_10, VAR_17, VAR_18, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   return -VAR_1;
  }
  break;
 case 140:
  if (VAR_10->soc->adv_drive_get) {
   VAR_14 = VAR_10->soc->adv_drive_get(VAR_10, VAR_17, &VAR_16);
   if (VAR_14)
    return VAR_14;
  } else {
   return -VAR_1;
  }
  break;
 default:
  return -VAR_1;
 }

 *VAR_9 = FUNC_1(VAR_11, VAR_16);

 return 0;
}
