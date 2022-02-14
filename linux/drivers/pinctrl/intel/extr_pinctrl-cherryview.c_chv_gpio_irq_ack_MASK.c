
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct chv_pinctrl {scalar_t__ regs; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct chv_pinctrl*,int,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct chv_pinctrl* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_5)
{
 struct gpio_chip *VAR_6 = FUNC_4(VAR_5);
 struct chv_pinctrl *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = FUNC_5(VAR_5);
 u32 VAR_9;

 FUNC_6(&VAR_4);

 VAR_9 = FUNC_8(FUNC_1(VAR_7, VAR_8, VAR_1));
 VAR_9 &= VAR_2;
 VAR_9 >>= VAR_3;
 FUNC_2(FUNC_0(VAR_9), VAR_7->regs + VAR_0);

 FUNC_7(&VAR_4);
}
