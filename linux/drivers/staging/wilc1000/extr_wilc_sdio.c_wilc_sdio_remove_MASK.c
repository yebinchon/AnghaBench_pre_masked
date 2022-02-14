
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {int rtc_clk; scalar_t__ gpio_irq; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct wilc* FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct wilc*) ;

__attribute__((used)) static void FUNC_5(struct sdio_func *VAR_0)
{
 struct wilc *VAR_1 = FUNC_3(VAR_0);


 if (VAR_1->gpio_irq)
  FUNC_2(VAR_1->gpio_irq);

 if (!FUNC_0(VAR_1->rtc_clk))
  FUNC_1(VAR_1->rtc_clk);

 FUNC_4(VAR_1);
}
