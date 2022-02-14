
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;





 unsigned long FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pinctrl_dev*,unsigned int,int) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int *) ;
 int FUNC_4 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
     unsigned VAR_2,
     unsigned long *VAR_3)
{
 enum pin_config_param VAR_4 = FUNC_1(*VAR_3);
 bool VAR_5 = 0;
 u32 VAR_6;
 int VAR_7;

 switch (VAR_4) {
 case 132:
 case 130:
 case 131:
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_4);
  break;
 case 129:
  VAR_7 = FUNC_3(VAR_1, VAR_2, &VAR_6);
  VAR_5 = 1;
  break;
 case 128:
  VAR_7 = FUNC_4(VAR_1, VAR_2);
  break;
 default:

  VAR_7 = -VAR_0;
  break;
 }

 if (VAR_7 == 0 && VAR_5)
  *VAR_3 = FUNC_0(VAR_4, VAR_6);

 return VAR_7;
}
