
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct pinctrl_dev {int dummy; } ;
struct amd_gpio {TYPE_1__* pdev; int lock; scalar_t__ base; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;




 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 unsigned long FUNC_2 (int,unsigned int) ;
 int FUNC_3 (unsigned long) ;
 struct amd_gpio* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pinctrl_dev *VAR_6,
     unsigned int VAR_7,
     unsigned long *VAR_8)
{
 u32 VAR_9;
 unsigned VAR_10;
 unsigned long VAR_11;
 struct amd_gpio *VAR_12 = FUNC_4(VAR_6);
 enum pin_config_param VAR_13 = FUNC_3(*VAR_8);

 FUNC_5(&VAR_12->lock, VAR_11);
 VAR_9 = FUNC_7(VAR_12->base + VAR_7*4);
 FUNC_6(&VAR_12->lock, VAR_11);
 switch (VAR_13) {
 case 128:
  VAR_10 = VAR_9 & VAR_0;
  break;

 case 131:
  VAR_10 = (VAR_9 >> VAR_4) & FUNC_0(0);
  break;

 case 130:
  VAR_10 = (VAR_9 >> VAR_5) & (FUNC_0(0) | FUNC_0(1));
  break;

 case 129:
  VAR_10 = (VAR_9 >> VAR_2) & VAR_1;
  break;

 default:
  FUNC_1(&VAR_12->pdev->dev, "Invalid config param %04x\n",
   VAR_13);
  return -VAR_3;
 }

 *VAR_8 = FUNC_2(VAR_13, VAR_10);

 return 0;
}
