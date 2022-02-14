
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sunxi_pinctrl {int membase; int lock; int desc; } ;
struct irq_data {int hwirq; } ;


 struct sunxi_pinctrl* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct sunxi_pinctrl *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = FUNC_5(VAR_1->desc, VAR_0->hwirq);
 u8 VAR_3 = FUNC_4(VAR_0->hwirq);
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_1->lock, VAR_4);


 VAR_5 = FUNC_3(VAR_1->membase + VAR_2);
 FUNC_6(VAR_5 | (1 << VAR_3), VAR_1->membase + VAR_2);

 FUNC_2(&VAR_1->lock, VAR_4);
}
