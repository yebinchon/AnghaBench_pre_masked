
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_eint_data {int * domains; } ;
struct irq_desc {int dummy; } ;
struct irq_data {size_t hwirq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 struct s3c24xx_eint_data* FUNC_2 (struct irq_desc*) ;
 struct irq_data* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0)
{
 struct irq_data *VAR_1 = FUNC_3(VAR_0);
 struct s3c24xx_eint_data *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;


 VAR_3 = FUNC_4(VAR_2->domains[VAR_1->hwirq], VAR_1->hwirq);

 FUNC_0(!VAR_3);

 FUNC_1(VAR_3);
}
