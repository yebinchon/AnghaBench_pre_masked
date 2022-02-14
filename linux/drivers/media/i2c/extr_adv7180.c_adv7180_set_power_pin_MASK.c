
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7180_state {int pwdn_gpio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct adv7180_state *VAR_0, bool VAR_1)
{
 if (!VAR_0->pwdn_gpio)
  return;

 if (VAR_1) {
  FUNC_0(VAR_0->pwdn_gpio, 0);
  FUNC_1(5000, 10000);
 } else {
  FUNC_0(VAR_0->pwdn_gpio, 1);
 }
}
