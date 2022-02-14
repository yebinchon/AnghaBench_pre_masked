
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {scalar_t__ core_irq; } ;


 int FUNC_0 (scalar_t__,struct pm860x_chip*) ;

__attribute__((used)) static void FUNC_1(struct pm860x_chip *VAR_0)
{
 if (VAR_0->core_irq)
  FUNC_0(VAR_0->core_irq, VAR_0);
}
