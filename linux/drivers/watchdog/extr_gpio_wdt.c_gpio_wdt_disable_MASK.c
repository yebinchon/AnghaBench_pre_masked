
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_wdt_priv {scalar_t__ hw_algo; int gpiod; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_wdt_priv *VAR_1)
{

 FUNC_1(VAR_1->gpiod, 1);


 if (VAR_1->hw_algo == VAR_0)
  FUNC_0(VAR_1->gpiod);
}
