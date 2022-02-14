
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w1_gpio_platform_data {int pullup_duration; int gpiod; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(void *VAR_0, int VAR_1)
{
 struct w1_gpio_platform_data *VAR_2 = VAR_0;

 if (VAR_1) {
  VAR_2->pullup_duration = VAR_1;
 } else {
  if (VAR_2->pullup_duration) {




   FUNC_0(VAR_2->gpiod, 1);
   FUNC_2(VAR_2->pullup_duration);




   FUNC_1(VAR_2->gpiod, 1);
  }
  VAR_2->pullup_duration = 0;
 }

 return 0;
}
