
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_eint_data {int * domains; } ;
struct irq_desc {int dummy; } ;
struct irq_data {size_t hwirq; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (unsigned int) ;
 struct irq_chip* FUNC_4 (struct irq_data*) ;
 struct s3c24xx_eint_data* FUNC_5 (struct irq_desc*) ;
 struct irq_data* FUNC_6 (struct irq_desc*) ;
 unsigned int FUNC_7 (int ,size_t) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_0)
{
 struct s3c24xx_eint_data *VAR_1 = FUNC_5(VAR_0);
 struct irq_data *VAR_2 = FUNC_6(VAR_0);
 struct irq_chip *VAR_3 = FUNC_4(VAR_2);
 unsigned int VAR_4;

 FUNC_1(VAR_3, VAR_0);


 VAR_4 = FUNC_7(VAR_1->domains[VAR_2->hwirq], VAR_2->hwirq);

 FUNC_0(!VAR_4);

 FUNC_3(VAR_4);

 FUNC_2(VAR_3, VAR_0);
}
