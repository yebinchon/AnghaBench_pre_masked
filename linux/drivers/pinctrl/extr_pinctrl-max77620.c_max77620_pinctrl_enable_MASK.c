
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pinctrl_dev {int dummy; } ;
struct max77620_pctrl_info {int dev; int rmap; TYPE_1__* pin_groups; } ;
struct TYPE_2__ {unsigned int alt_option; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 struct max77620_pctrl_info* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 struct max77620_pctrl_info *VAR_6 = FUNC_2(VAR_3);
 u8 VAR_7;
 int VAR_8;

 if (VAR_4 == VAR_1) {
  VAR_7 = 0;
 } else if (VAR_4 == VAR_6->pin_groups[VAR_5].alt_option) {
  VAR_7 = 1 << VAR_5;
 } else {
  FUNC_1(VAR_6->dev, "GPIO %u doesn't have function %u\n",
   VAR_5, VAR_4);
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_6->rmap, VAR_2,
     FUNC_0(VAR_5), VAR_7);
 if (VAR_8 < 0)
  FUNC_1(VAR_6->dev, "REG AME GPIO update failed: %d\n", VAR_8);

 return VAR_8;
}
