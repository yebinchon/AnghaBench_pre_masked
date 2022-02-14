
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;

 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2,
      unsigned long VAR_3)
{
 enum pin_config_param VAR_4 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_1, VAR_2, 1);
  return -VAR_0;
 default:
  return -VAR_0;
 }
}
