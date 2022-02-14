
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct intel_pinctrl {int lock; } ;
struct intel_padgroup {unsigned int reg_num; } ;
struct intel_community {unsigned int is_offset; scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 struct intel_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct intel_pinctrl*,int ,struct intel_community const**,struct intel_padgroup const**) ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 unsigned int FUNC_5 (struct intel_padgroup const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_3(VAR_0);
 struct intel_pinctrl *VAR_2 = FUNC_1(VAR_1);
 const struct intel_community *VAR_3;
 const struct intel_padgroup *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, FUNC_4(VAR_0), &VAR_3, &VAR_4);
 if (VAR_5 >= 0) {
  unsigned int VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_4->reg_num;
  VAR_7 = FUNC_5(VAR_4, VAR_5);
  VAR_8 = VAR_3->is_offset + VAR_6 * 4;

  FUNC_6(&VAR_2->lock);
  FUNC_8(FUNC_0(VAR_7), VAR_3->regs + VAR_8);
  FUNC_7(&VAR_2->lock);
 }
}
