
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int irq_base; unsigned int irq_ris_enbl; unsigned int irq_fal_enbl; unsigned int irq_mask; int irq_lock; } ;
struct irq_data {int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ucb1x00* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucb1x00*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct ucb1x00 *VAR_6 = FUNC_0(VAR_4);
 unsigned VAR_7 = 1 << (VAR_4->irq - VAR_6->irq_base);

 FUNC_1(&VAR_6->irq_lock);
 if (VAR_5 & VAR_1)
  VAR_6->irq_ris_enbl |= VAR_7;
 else
  VAR_6->irq_ris_enbl &= ~VAR_7;

 if (VAR_5 & VAR_0)
  VAR_6->irq_fal_enbl |= VAR_7;
 else
  VAR_6->irq_fal_enbl &= ~VAR_7;
 if (VAR_6->irq_mask & VAR_7) {
  FUNC_3(VAR_6, VAR_3, VAR_6->irq_ris_enbl &
      VAR_6->irq_mask);
  FUNC_3(VAR_6, VAR_2, VAR_6->irq_fal_enbl &
      VAR_6->irq_mask);
 }
 FUNC_2(&VAR_6->irq_lock);

 return 0;
}
