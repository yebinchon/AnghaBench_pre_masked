
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc5t583_irq_data {int int_type; int int_en_bit; } ;
struct rc5t583 {unsigned int irq_base; int* gpedge_reg; } ;
struct irq_data {unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct rc5t583* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 struct rc5t583_irq_data* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct rc5t583 *VAR_8 = FUNC_0(VAR_6);
 unsigned int VAR_9 = VAR_6->irq - VAR_8->irq_base;
 const struct rc5t583_irq_data *VAR_10 = &VAR_5[VAR_9];
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;


 if ((VAR_10->int_type & VAR_1) && (VAR_7 & VAR_2)) {
  VAR_12 = VAR_10->int_en_bit / 4;
  VAR_13 = VAR_10->int_en_bit % 4;

  if (VAR_7 & VAR_3)
   VAR_11 |= 0x2;

  if (VAR_7 & VAR_4)
   VAR_11 |= 0x1;

  VAR_8->gpedge_reg[VAR_12] &= ~(3 << VAR_13);
  VAR_8->gpedge_reg[VAR_12] |= (VAR_11 << VAR_13);
  FUNC_1(VAR_6);
  return 0;
 }
 return -VAR_0;
}
