
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sunxi_pinctrl {scalar_t__ membase; int desc; } ;
struct irq_data {int hwirq; } ;


 struct sunxi_pinctrl* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct sunxi_pinctrl *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2 = FUNC_2(VAR_1->desc, VAR_0->hwirq);
 u8 VAR_3 = FUNC_1(VAR_0->hwirq);


 FUNC_3(1 << VAR_3, VAR_1->membase + VAR_2);
}
