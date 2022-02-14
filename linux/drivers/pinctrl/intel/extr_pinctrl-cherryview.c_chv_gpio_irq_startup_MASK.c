
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct chv_pinctrl {unsigned int* intr_lines; } ;
typedef int irq_flow_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct irq_data*) ;
 int VAR_6 ;
 int FUNC_1 (struct chv_pinctrl*,unsigned int,int ) ;
 struct chv_pinctrl* FUNC_2 (struct gpio_chip*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 scalar_t__ FUNC_5 (struct irq_data*) ;
 unsigned int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static unsigned FUNC_10(struct irq_data *VAR_9)
{
 if (FUNC_5(VAR_9) == VAR_5) {
  struct gpio_chip *VAR_10 = FUNC_3(VAR_9);
  struct chv_pinctrl *VAR_11 = FUNC_2(VAR_10);
  unsigned int VAR_12 = FUNC_6(VAR_9);
  irq_flow_handler_t VAR_13;
  unsigned long VAR_14;
  u32 VAR_15, VAR_16;

  FUNC_7(&VAR_6, VAR_14);
  VAR_15 = FUNC_9(FUNC_1(VAR_11, VAR_12, VAR_0));
  VAR_15 &= VAR_1;
  VAR_15 >>= VAR_2;

  VAR_16 = FUNC_9(FUNC_1(VAR_11, VAR_12, VAR_3));
  if (VAR_16 & VAR_4)
   VAR_13 = VAR_8;
  else
   VAR_13 = VAR_7;

  if (!VAR_11->intr_lines[VAR_15]) {
   FUNC_4(VAR_9, VAR_13);
   VAR_11->intr_lines[VAR_15] = VAR_12;
  }
  FUNC_8(&VAR_6, VAR_14);
 }

 FUNC_0(VAR_9);
 return 0;
}
