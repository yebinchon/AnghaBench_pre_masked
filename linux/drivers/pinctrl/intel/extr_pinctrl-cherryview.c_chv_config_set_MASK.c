
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct chv_pinctrl {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (struct chv_pinctrl*,unsigned int,int) ;
 int FUNC_1 (struct chv_pinctrl*,unsigned int,int,int ) ;
 scalar_t__ FUNC_2 (struct chv_pinctrl*,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,int,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct chv_pinctrl* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
     unsigned long *VAR_4, unsigned int VAR_5)
{
 struct chv_pinctrl *VAR_6 = FUNC_6(VAR_2);
 enum pin_config_param VAR_7;
 int VAR_8, VAR_9;
 u32 VAR_10;

 if (FUNC_2(VAR_6, VAR_3))
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = FUNC_5(VAR_4[VAR_8]);
  VAR_10 = FUNC_4(VAR_4[VAR_8]);

  switch (VAR_7) {
  case 132:
  case 130:
  case 131:
   VAR_9 = FUNC_1(VAR_6, VAR_3, VAR_7, VAR_10);
   if (VAR_9)
    return VAR_9;
   break;

  case 128:
   VAR_9 = FUNC_0(VAR_6, VAR_3, 0);
   if (VAR_9)
    return VAR_9;
   break;

  case 129:
   VAR_9 = FUNC_0(VAR_6, VAR_3, 1);
   if (VAR_9)
    return VAR_9;
   break;

  default:
   return -VAR_1;
  }

  FUNC_3(VAR_6->dev, "pin %d set config %d arg %u\n", VAR_3,
   VAR_7, VAR_10);
 }

 return 0;
}
