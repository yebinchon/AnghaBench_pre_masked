
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pinctrl_dev {int dummy; } ;
struct atmel_pioctrl {struct atmel_group* groups; } ;
struct atmel_group {unsigned int pin; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 unsigned int FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 unsigned long FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct atmel_pioctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_8,
        unsigned VAR_9,
        unsigned long *VAR_10)
{
 struct atmel_pioctrl *VAR_11 = FUNC_3(VAR_8);
 unsigned VAR_12 = FUNC_2(*VAR_10), VAR_13 = 0;
 struct atmel_group *VAR_14 = VAR_11->groups + VAR_9;
 unsigned VAR_15 = VAR_14->pin;
 u32 VAR_16;

 VAR_16 = FUNC_0(VAR_8, VAR_15);

 switch (VAR_12) {
 case 130:
  if (!(VAR_16 & VAR_4))
   return -VAR_6;
  VAR_13 = 1;
  break;
 case 131:
  if ((VAR_16 & VAR_4) ||
      (!(VAR_16 & VAR_3)))
   return -VAR_6;
  VAR_13 = 1;
  break;
 case 132:
  if ((VAR_16 & VAR_4) ||
      ((VAR_16 & VAR_3)))
   return -VAR_6;
  VAR_13 = 1;
  break;
 case 129:
  if (!(VAR_16 & VAR_2))
   return -VAR_6;
  VAR_13 = 1;
  break;
 case 128:
  if (!(VAR_16 & VAR_5))
   return -VAR_6;
  VAR_13 = 1;
  break;
 case 133:
  if (!(VAR_16 & VAR_0))
   return -VAR_6;
  VAR_13 = (VAR_16 & VAR_0) >> VAR_1;
  break;
 default:
  return -VAR_7;
 }

 *VAR_10 = FUNC_1(VAR_12, VAR_13);
 return 0;
}
