
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct palmas_pingroup {unsigned int* pins; int name; struct palmas_pin_info** opt; } ;
struct palmas_pin_info {TYPE_2__* od_info; TYPE_1__* pud_info; } ;
struct palmas_pctrl_chip_info {int num_pin_groups; size_t* pins_current_opt; int dev; int palmas; struct palmas_pingroup* pin_groups; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_4__ {int od_reg_base; int od_reg_add; unsigned int od_mask; int od_disable; int od_enable; } ;
struct TYPE_3__ {int pullup_dn_reg_base; int pullup_dn_reg_add; unsigned int pullup_dn_mask; int normal_val; int pull_up_val; int pull_dn_val; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int,int,unsigned int*) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long) ;
 struct palmas_pctrl_chip_info* FUNC_4 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
   unsigned VAR_2, unsigned long *VAR_3)
{
 struct palmas_pctrl_chip_info *VAR_4 = FUNC_4(VAR_1);
 enum pin_config_param VAR_5 = FUNC_3(*VAR_3);
 const struct palmas_pingroup *VAR_6;
 const struct palmas_pin_info *VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_4->num_pin_groups; ++VAR_14) {
  if (VAR_4->pin_groups[VAR_14].pins[0] == VAR_2)
   break;
 }

 if (VAR_14 == VAR_4->num_pin_groups) {
  FUNC_0(VAR_4->dev,
   "Pinconf is not supported for pin-id %d\n", VAR_2);
  return -VAR_0;
 }

 VAR_6 = &VAR_4->pin_groups[VAR_14];
 VAR_7 = VAR_6->opt[VAR_4->pins_current_opt[VAR_14]];
 if (!VAR_7) {
  FUNC_0(VAR_4->dev,
   "Pinconf is not supported for pin %s\n", VAR_6->name);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 131:
 case 129:
 case 130:
  if (!VAR_7->pud_info) {
   FUNC_0(VAR_4->dev,
    "PULL control not supported for pin %s\n",
    VAR_6->name);
   return -VAR_0;
  }
  VAR_10 = VAR_7->pud_info->pullup_dn_reg_base;
  VAR_11 = VAR_7->pud_info->pullup_dn_reg_add;
  VAR_9 = FUNC_1(VAR_4->palmas, VAR_10, VAR_11, &VAR_8);
  if (VAR_9 < 0) {
   FUNC_0(VAR_4->dev, "Reg 0x%02x read failed: %d\n",
    VAR_11, VAR_9);
   return VAR_9;
  }

  VAR_12 = VAR_8 & VAR_7->pud_info->pullup_dn_mask;
  VAR_13 = 0;
  if ((VAR_7->pud_info->normal_val >= 0) &&
    (VAR_7->pud_info->normal_val == VAR_12) &&
    (VAR_5 == 131))
   VAR_13 = 1;
  else if ((VAR_7->pud_info->pull_up_val >= 0) &&
    (VAR_7->pud_info->pull_up_val == VAR_12) &&
    (VAR_5 == 129))
   VAR_13 = 1;
  else if ((VAR_7->pud_info->pull_dn_val >= 0) &&
    (VAR_7->pud_info->pull_dn_val == VAR_12) &&
    (VAR_5 == 130))
   VAR_13 = 1;
  break;

 case 128:
  if (!VAR_7->od_info) {
   FUNC_0(VAR_4->dev,
    "OD control not supported for pin %s\n",
    VAR_6->name);
   return -VAR_0;
  }
  VAR_10 = VAR_7->od_info->od_reg_base;
  VAR_11 = VAR_7->od_info->od_reg_add;
  VAR_9 = FUNC_1(VAR_4->palmas, VAR_10, VAR_11, &VAR_8);
  if (VAR_9 < 0) {
   FUNC_0(VAR_4->dev, "Reg 0x%02x read failed: %d\n",
    VAR_11, VAR_9);
   return VAR_9;
  }
  VAR_12 = VAR_8 & VAR_7->od_info->od_mask;
  VAR_13 = -1;
  if ((VAR_7->od_info->od_disable >= 0) &&
    (VAR_7->od_info->od_disable == VAR_12))
   VAR_13 = 0;
  else if ((VAR_7->od_info->od_enable >= 0) &&
     (VAR_7->od_info->od_enable == VAR_12))
   VAR_13 = 1;
  if (VAR_13 < 0) {
   FUNC_0(VAR_4->dev,
    "OD control not supported for pin %s\n",
    VAR_6->name);
   return -VAR_0;
  }
  break;

 default:
  FUNC_0(VAR_4->dev, "Properties not supported\n");
  return -VAR_0;
 }

 *VAR_3 = FUNC_2(VAR_5, (u16)VAR_13);
 return 0;
}
