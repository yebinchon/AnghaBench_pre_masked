
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_irq_data {int irq_lock; int lp; int * enabled; } ;
struct irq_data {int hwirq; } ;
typedef enum lp8788_int_id { ____Placeholder_lp8788_int_id } lp8788_int_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 struct lp8788_irq_data* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct lp8788_irq_data *VAR_1 = FUNC_3(VAR_0);
 enum lp8788_int_id VAR_2 = VAR_0->hwirq;
 u8 VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_2, VAR_1->enabled[VAR_2]);

 FUNC_4(VAR_1->lp, VAR_3, VAR_4, VAR_5);

 FUNC_5(&VAR_1->irq_lock);
}
