
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct chv_pinctrl {int dummy; } ;
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
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;
 int FUNC_0 (struct chv_pinctrl*,unsigned int,int ) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct chv_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_12, unsigned int VAR_13,
     unsigned long *VAR_14)
{
 struct chv_pinctrl *VAR_15 = FUNC_3(VAR_12);
 enum pin_config_param VAR_16 = FUNC_2(*VAR_14);
 unsigned long VAR_17;
 u32 VAR_18, VAR_19;
 u16 VAR_20 = 0;
 u32 VAR_21;

 FUNC_4(&VAR_11, VAR_17);
 VAR_18 = FUNC_6(FUNC_0(VAR_15, VAR_13, VAR_0));
 VAR_19 = FUNC_6(FUNC_0(VAR_15, VAR_13, VAR_7));
 FUNC_5(&VAR_11, VAR_17);

 VAR_21 = (VAR_18 & VAR_4) >> VAR_5;

 switch (VAR_16) {
 case 132:
  if (VAR_21)
   return -VAR_9;
  break;

 case 129:
  if (!(VAR_18 & VAR_6))
   return -VAR_9;

  switch (VAR_21) {
  case 134:
   VAR_20 = 20000;
   break;
  case 133:
   VAR_20 = 5000;
   break;
  case 135:
   VAR_20 = 1000;
   break;
  }

  break;

 case 130:
  if (!VAR_21 || (VAR_18 & VAR_6))
   return -VAR_9;

  switch (VAR_21) {
  case 134:
   VAR_20 = 20000;
   break;
  case 133:
   VAR_20 = 5000;
   break;
  }

  break;

 case 128:
  if (!(VAR_19 & VAR_8))
   return -VAR_9;
  break;

 case 131: {
  u32 VAR_22;

  VAR_22 = VAR_18 & VAR_2;
  VAR_22 >>= VAR_3;
  if (VAR_22 != VAR_1)
   return -VAR_9;

  break;
 }

 default:
  return -VAR_10;
 }

 *VAR_14 = FUNC_1(VAR_16, VAR_20);
 return 0;
}
