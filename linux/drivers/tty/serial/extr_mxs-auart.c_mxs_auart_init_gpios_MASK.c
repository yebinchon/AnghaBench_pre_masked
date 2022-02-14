
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_auart_port {int * gpio_irq; int gpios; int flags; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct gpio_desc*) ;
 int FUNC_7 (struct gpio_desc*) ;
 int FUNC_8 (struct device*,int ) ;
 struct gpio_desc* FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct mxs_auart_port *VAR_3, struct device *VAR_4)
{
 enum mctrl_gpio_idx VAR_5;
 struct gpio_desc *VAR_6;

 VAR_3->gpios = FUNC_8(VAR_4, 0);
 if (FUNC_1(VAR_3->gpios))
  return FUNC_2(VAR_3->gpios);


 if (!FUNC_3() || !FUNC_0()) {
  if (FUNC_10(VAR_1, &VAR_3->flags))
   FUNC_5(VAR_4,
     "DMA and flow control via gpio may cause some problems. DMA disabled!\n");
  FUNC_4(VAR_1, &VAR_3->flags);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_9(VAR_3->gpios, VAR_5);
  if (VAR_6 && (FUNC_6(VAR_6) == 1))
   VAR_3->gpio_irq[VAR_5] = FUNC_7(VAR_6);
  else
   VAR_3->gpio_irq[VAR_5] = -VAR_0;
 }

 return 0;
}
