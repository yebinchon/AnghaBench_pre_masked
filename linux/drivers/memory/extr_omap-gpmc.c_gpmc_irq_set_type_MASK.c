
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_4, unsigned int VAR_5)
{

 if (VAR_4->hwirq < VAR_1)
  return -VAR_0;


 if (VAR_5 == VAR_2)
  FUNC_0(VAR_4->hwirq, 0);
 else if (VAR_5 == VAR_3)
  FUNC_0(VAR_4->hwirq, 1);
 else
  return -VAR_0;

 return 0;
}
