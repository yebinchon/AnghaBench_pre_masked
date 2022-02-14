
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsm_entry {int irq_falling; int irq_rising; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct smsm_entry* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct smsm_entry *VAR_6 = FUNC_1(VAR_4);
 irq_hw_number_t VAR_7 = FUNC_2(VAR_4);

 if (!(VAR_5 & VAR_1))
  return -VAR_0;

 if (VAR_5 & VAR_3)
  FUNC_3(VAR_7, VAR_6->irq_rising);
 else
  FUNC_0(VAR_7, VAR_6->irq_rising);

 if (VAR_5 & VAR_2)
  FUNC_3(VAR_7, VAR_6->irq_falling);
 else
  FUNC_0(VAR_7, VAR_6->irq_falling);

 return 0;
}
