
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int num_masters; int regmap; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct pm_irq_chip* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct pm_irq_chip*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_1)
{
 struct pm_irq_chip *VAR_2 = FUNC_3(VAR_1);
 struct irq_chip *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;
 int VAR_5, VAR_6, VAR_7 = 0;

 FUNC_0(VAR_3, VAR_1);

 VAR_6 = FUNC_6(VAR_2->regmap, VAR_0, &VAR_4);
 if (VAR_6) {
  FUNC_5("Can't read root status ret=%d\n", VAR_6);
  return;
 }


 VAR_7 = VAR_4 >> 1;


 for (VAR_5 = 0; VAR_5 < VAR_2->num_masters; VAR_5++)
  if (VAR_7 & (1 << VAR_5))
   FUNC_4(VAR_2, VAR_5);

 FUNC_1(VAR_3, VAR_1);
}
