
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct u300_gpio {int dummy; } ;
struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;





 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 struct u300_gpio* FUNC_2 (struct gpio_chip*) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_3 (int ) ;

int FUNC_4(struct gpio_chip *VAR_8,
    unsigned VAR_9,
    unsigned long *VAR_10)
{
 struct u300_gpio *VAR_11 = FUNC_2(VAR_8);
 enum pin_config_param VAR_12 = (enum pin_config_param) *VAR_10;
 bool VAR_13;
 u32 VAR_14;


 VAR_13 = !!(FUNC_3(FUNC_1(VAR_9, VAR_7)) & FUNC_0(VAR_9));


 VAR_14 = FUNC_3(FUNC_1(VAR_9, VAR_6));
 VAR_14 &= (VAR_2 << ((VAR_9 & 0x07) << 1));
 VAR_14 >>= ((VAR_9 & 0x07) << 1);

 switch (VAR_12) {
 case 132:
  *VAR_10 = 0;
  if (VAR_13)
   return 0;
  else
   return -VAR_0;
  break;
 case 131:
  *VAR_10 = 0;
  if (!VAR_13)
   return 0;
  else
   return -VAR_0;
  break;
 case 128:
  *VAR_10 = 0;
  if (VAR_14 == VAR_5)
   return 0;
  else
   return -VAR_0;
  break;
 case 130:
  *VAR_10 = 0;
  if (VAR_14 == VAR_3)
   return 0;
  else
   return -VAR_0;
  break;
 case 129:
  *VAR_10 = 0;
  if (VAR_14 == VAR_4)
   return 0;
  else
   return -VAR_0;
  break;
 default:
  break;
 }
 return -VAR_1;
}
