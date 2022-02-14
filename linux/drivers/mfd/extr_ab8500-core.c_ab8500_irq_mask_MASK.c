
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
 struct ab8500* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_6)
{
 struct ab8500 *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = VAR_6->hwirq;
 int VAR_9 = VAR_8 / 8;
 int VAR_10 = 1 << (VAR_8 % 8);

 VAR_7->mask[VAR_9] |= VAR_10;


 if (VAR_8 >= VAR_1 && VAR_8 <= VAR_0)
  VAR_7->mask[VAR_9 + 2] |= VAR_10;
 if (VAR_8 >= VAR_4 && VAR_8 <= VAR_5)
  VAR_7->mask[VAR_9 + 1] |= VAR_10;
 if (VAR_8 == VAR_2 || VAR_8 == VAR_3)

  VAR_7->mask[VAR_9] |= (VAR_10 << 1);
}
