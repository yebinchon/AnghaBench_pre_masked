
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {unsigned int irq_ris_enbl; int irq_mask; unsigned int irq_fal_enbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucb1x00*) ;
 int FUNC_1 (struct ucb1x00*) ;
 int FUNC_2 (struct ucb1x00*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ucb1x00 *VAR_2, unsigned VAR_3)
{
 FUNC_1(VAR_2);
 if (VAR_2->irq_ris_enbl & VAR_3)
  FUNC_2(VAR_2, VAR_1, VAR_2->irq_ris_enbl &
      VAR_2->irq_mask);
 if (VAR_2->irq_fal_enbl & VAR_3)
  FUNC_2(VAR_2, VAR_0, VAR_2->irq_fal_enbl &
      VAR_2->irq_mask);
 FUNC_0(VAR_2);
}
