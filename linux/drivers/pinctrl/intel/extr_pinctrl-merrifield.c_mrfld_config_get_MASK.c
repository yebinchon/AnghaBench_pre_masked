
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct mrfld_pinctrl {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_0 (struct mrfld_pinctrl*,unsigned int,int*) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct mrfld_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_9, unsigned int VAR_10,
       unsigned long *VAR_11)
{
 struct mrfld_pinctrl *VAR_12 = FUNC_3(VAR_9);
 enum pin_config_param VAR_13 = FUNC_2(*VAR_11);
 u32 VAR_14, VAR_15;
 u16 VAR_16 = 0;
 int VAR_17;

 VAR_17 = FUNC_0(VAR_12, VAR_10, &VAR_14);
 if (VAR_17)
  return -VAR_8;

 VAR_15 = (VAR_14 & VAR_2) >> VAR_3;

 switch (VAR_13) {
 case 132:
  if (VAR_14 & VAR_5)
   return -VAR_7;
  break;

 case 130:
  if ((VAR_14 & VAR_5) != VAR_4)
   return -VAR_7;

  switch (VAR_15) {
  case 133:
   VAR_16 = 910;
   break;
  case 135:
   VAR_16 = 2000;
   break;
  case 136:
   VAR_16 = 20000;
   break;
  case 134:
   VAR_16 = 50000;
   break;
  }

  break;

 case 131:
  if ((VAR_14 & VAR_5) != VAR_1)
   return -VAR_7;

  switch (VAR_15) {
  case 133:
   VAR_16 = 910;
   break;
  case 135:
   VAR_16 = 2000;
   break;
  case 136:
   VAR_16 = 20000;
   break;
  case 134:
   VAR_16 = 50000;
   break;
  }

  break;

 case 129:
  if (!(VAR_14 & VAR_0))
   return -VAR_7;
  break;

 case 128:
  if (!(VAR_14 & VAR_6))
   VAR_16 = 0;
  else
   VAR_16 = 1;
  break;

 default:
  return -VAR_8;
 }

 *VAR_11 = FUNC_1(VAR_13, VAR_16);
 return 0;
}
