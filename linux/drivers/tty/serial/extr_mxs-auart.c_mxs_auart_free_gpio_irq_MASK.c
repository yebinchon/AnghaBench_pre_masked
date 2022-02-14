
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_auart_port {scalar_t__* gpio_irq; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,struct mxs_auart_port*) ;

__attribute__((used)) static void FUNC_1(struct mxs_auart_port *VAR_1)
{
 enum mctrl_gpio_idx VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->gpio_irq[VAR_2] >= 0)
   FUNC_0(VAR_1->gpio_irq[VAR_2], VAR_1);
}
