
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmk_gpio_chip {int real_wake; int clk; int lock; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nmk_gpio_chip*,int ,int ,int) ;
 int FUNC_2 (struct nmk_gpio_chip*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct nmk_gpio_chip* FUNC_5 (struct irq_data*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct irq_data *VAR_3, bool VAR_4)
{
 struct nmk_gpio_chip *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_5(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_5->clk);
 FUNC_7(&VAR_2, VAR_6);
 FUNC_6(&VAR_5->lock);

 FUNC_1(VAR_5, VAR_3->hwirq, VAR_1, VAR_4);

 if (!(VAR_5->real_wake & FUNC_0(VAR_3->hwirq)))
  FUNC_2(VAR_5, VAR_3->hwirq, VAR_4);

 FUNC_8(&VAR_5->lock);
 FUNC_9(&VAR_2, VAR_6);
 FUNC_3(VAR_5->clk);

 return 0;
}
