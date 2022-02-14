
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct da850_pupd_data {scalar_t__ base; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct da850_pupd_data* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_3,
        unsigned int VAR_4,
        unsigned long *VAR_5)
{
 struct da850_pupd_data *VAR_6 = FUNC_3(VAR_3);
 enum pin_config_param VAR_7 = FUNC_2(*VAR_5);
 u32 VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_4(VAR_6->base + VAR_0);
 VAR_9 = !!(~VAR_8 & FUNC_0(VAR_4));

 switch (VAR_7) {
 case 130:
  break;
 case 128:
 case 129:
  if (VAR_9) {

   VAR_9 = 0;
   break;
  }
  VAR_8 = FUNC_4(VAR_6->base + VAR_1);
  if (VAR_7 == 129)
   VAR_8 = ~VAR_8;
  VAR_9 = !!(VAR_8 & FUNC_0(VAR_4));
  break;
 default:
  return -VAR_2;
 }

 *VAR_5 = FUNC_1(VAR_7, VAR_9);

 return 0;
}
