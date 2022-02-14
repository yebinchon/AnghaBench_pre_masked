
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv76xx_state {scalar_t__ reset_gpio; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct adv76xx_state *VAR_0)
{
 if (VAR_0->reset_gpio) {

  FUNC_0(VAR_0->reset_gpio, 0);
  FUNC_1(5000, 10000);
  FUNC_0(VAR_0->reset_gpio, 1);


  FUNC_1(5000, 10000);
 }
}
