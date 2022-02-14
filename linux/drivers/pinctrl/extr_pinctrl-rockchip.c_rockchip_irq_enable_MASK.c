
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pin_bank {int clk; } ;
struct irq_data {int dummy; } ;
struct irq_chip_generic {struct rockchip_pin_bank* private; } ;


 int FUNC_0 (int ) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct rockchip_pin_bank *VAR_2 = VAR_1->private;

 FUNC_0(VAR_2->clk);
 FUNC_2(VAR_0);
}
