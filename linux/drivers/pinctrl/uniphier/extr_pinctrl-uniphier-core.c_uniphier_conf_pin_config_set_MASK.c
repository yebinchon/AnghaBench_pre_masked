
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int,int ) ;
 int FUNC_4 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_5 (struct pinctrl_dev*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
     unsigned VAR_2,
     unsigned long *VAR_3,
     unsigned VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  enum pin_config_param VAR_7 =
     FUNC_2(VAR_3[VAR_5]);
  u32 VAR_8 = FUNC_1(VAR_3[VAR_5]);

  switch (VAR_7) {
  case 133:
  case 130:
  case 132:
  case 131:
   VAR_6 = FUNC_3(VAR_1, VAR_2,
        VAR_7, VAR_8);
   break;
  case 129:
   VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_8);
   break;
  case 128:
   VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_8);
   break;
  default:
   FUNC_0(VAR_1->dev,
    "unsupported configuration parameter %u\n",
    VAR_7);
   return -VAR_0;
  }

  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
