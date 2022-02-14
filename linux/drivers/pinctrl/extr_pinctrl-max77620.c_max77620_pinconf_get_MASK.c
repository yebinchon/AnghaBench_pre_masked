
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct max77620_pctrl_info {int rmap; TYPE_1__* pin_info; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int drv_type; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (struct device*,char*,...) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long) ;
 struct max77620_pctrl_info* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_5,
    unsigned int VAR_6, unsigned long *VAR_7)
{
 struct max77620_pctrl_info *VAR_8 = FUNC_4(VAR_5);
 struct device *VAR_9 = VAR_8->dev;
 enum pin_config_param VAR_10 = FUNC_3(*VAR_7);
 unsigned int VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 switch (VAR_10) {
 case 129:
  if (VAR_8->pin_info[VAR_6].drv_type == VAR_1)
   VAR_12 = 1;
  break;

 case 128:
  if (VAR_8->pin_info[VAR_6].drv_type == VAR_2)
   VAR_12 = 1;
  break;

 case 130:
  VAR_13 = FUNC_5(VAR_8->rmap, VAR_4, &VAR_11);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9, "Reg PUE_GPIO read failed: %d\n", VAR_13);
   return VAR_13;
  }
  if (VAR_11 & FUNC_0(VAR_6))
   VAR_12 = 1;
  break;

 case 131:
  VAR_13 = FUNC_5(VAR_8->rmap, VAR_3, &VAR_11);
  if (VAR_13 < 0) {
   FUNC_1(VAR_9, "Reg PDE_GPIO read failed: %d\n", VAR_13);
   return VAR_13;
  }
  if (VAR_11 & FUNC_0(VAR_6))
   VAR_12 = 1;
  break;

 default:
  FUNC_1(VAR_9, "Properties not supported\n");
  return -VAR_0;
 }

 *VAR_7 = FUNC_2(VAR_10, (u16)VAR_12);

 return 0;
}
