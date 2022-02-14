
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmfx {int lock; int irq_src; int map; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 struct stmfx* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct stmfx *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->map, VAR_0, VAR_2->irq_src);

 FUNC_1(&VAR_2->lock);
}
