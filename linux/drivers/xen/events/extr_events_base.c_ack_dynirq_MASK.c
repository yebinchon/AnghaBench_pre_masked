
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct irq_data *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0->irq);

 if (!FUNC_0(VAR_1))
  return;

 if (FUNC_8(FUNC_5(VAR_0)) &&
     FUNC_6(!FUNC_4(VAR_0))) {
  int VAR_2 = FUNC_7(VAR_1);

  FUNC_1(VAR_1);

  FUNC_3(VAR_0);

  if (!VAR_2)
   FUNC_9(VAR_1);
 } else
  FUNC_1(VAR_1);
}
