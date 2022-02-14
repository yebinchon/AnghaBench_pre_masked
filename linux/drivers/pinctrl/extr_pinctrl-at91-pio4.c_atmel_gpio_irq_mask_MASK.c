
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;
struct atmel_pioctrl {struct atmel_pin** pins; } ;
struct atmel_pin {int line; int bank; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct atmel_pioctrl*,int ,int ,int ) ;
 struct atmel_pioctrl* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct atmel_pioctrl *VAR_2 = FUNC_2(VAR_1);
 struct atmel_pin *VAR_3 = VAR_2->pins[VAR_1->hwirq];

 FUNC_1(VAR_2, VAR_3->bank, VAR_0,
    FUNC_0(VAR_3->line));
}
