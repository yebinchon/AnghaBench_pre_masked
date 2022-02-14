
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct lpc18xx_pin_caps {int type; } ;


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
 int FUNC_0 (struct pinctrl_dev*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_10, unsigned VAR_11,
     int *VAR_12, u32 VAR_13, unsigned VAR_14,
     struct lpc18xx_pin_caps *VAR_15)
{
 switch (VAR_11) {
 case 135:
  if ((!(VAR_13 & VAR_5)) && (VAR_13 & VAR_6))
   ;
  else
   return -VAR_0;
  break;

 case 133:
  if (VAR_13 & VAR_6)
   return -VAR_0;
  else
   *VAR_12 = 1;
  break;

 case 134:
  if (VAR_13 & VAR_5)
   *VAR_12 = 1;
  else
   return -VAR_0;
  break;

 case 130:
  if (VAR_13 & VAR_7)
   *VAR_12 = 1;
  else
   return -VAR_0;
  break;

 case 128:
  if (VAR_15->type == VAR_9)
   return -VAR_1;

  if (VAR_13 & VAR_4)
   *VAR_12 = 1;
  else
   *VAR_12 = 0;
  break;

 case 129:
  if (VAR_13 & VAR_8)
   return -VAR_0;
  else
   *VAR_12 = 1;
  break;

 case 132:
  if (VAR_15->type != VAR_9)
   return -VAR_1;

  *VAR_12 = (VAR_13 & VAR_2) >> VAR_3;
  switch (*VAR_12) {
  case 3: *VAR_12 += 5;

  case 2: *VAR_12 += 5;

  case 1: *VAR_12 += 3;

  case 0: *VAR_12 += 4;
  }
  break;

 case 131:
  return FUNC_0(VAR_10, VAR_12, VAR_14);

 default:
  return -VAR_1;
 }

 return 0;
}
