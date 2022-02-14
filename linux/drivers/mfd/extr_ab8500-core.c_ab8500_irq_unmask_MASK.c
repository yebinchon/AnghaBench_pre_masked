
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct ab8500 {int* mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct ab8500* FUNC_0 (struct irq_data*) ;
 unsigned int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_8)
{
 struct ab8500 *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10 = FUNC_1(VAR_8);
 int VAR_11 = VAR_8->hwirq;
 int VAR_12 = VAR_11 / 8;
 int VAR_13 = 1 << (VAR_11 % 8);

 if (VAR_10 & VAR_7)
  VAR_9->mask[VAR_12] &= ~VAR_13;


 if (VAR_10 & VAR_6) {
  if (VAR_11 >= VAR_1 && VAR_11 <= VAR_0)
   VAR_9->mask[VAR_12 + 2] &= ~VAR_13;
  else if (VAR_11 >= VAR_4 &&
    VAR_11 <= VAR_5)
   VAR_9->mask[VAR_12 + 1] &= ~VAR_13;
  else if (VAR_11 == VAR_2 ||
    VAR_11 == VAR_3)

   VAR_9->mask[VAR_12] &= ~(VAR_13 << 1);
  else
   VAR_9->mask[VAR_12] &= ~VAR_13;
 } else {

  VAR_9->mask[VAR_12] &= ~VAR_13;
 }
}
