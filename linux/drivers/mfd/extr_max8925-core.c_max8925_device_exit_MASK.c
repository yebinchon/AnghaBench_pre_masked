
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_chip {int dev; scalar_t__ tsc_irq; scalar_t__ core_irq; } ;


 int FUNC_0 (scalar_t__,struct max8925_chip*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct max8925_chip *VAR_0)
{
 if (VAR_0->core_irq)
  FUNC_0(VAR_0->core_irq, VAR_0);
 if (VAR_0->tsc_irq)
  FUNC_0(VAR_0->tsc_irq, VAR_0);
 FUNC_1(VAR_0->dev);
}
