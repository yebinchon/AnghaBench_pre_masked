
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pin_bank {int clk; int saved_masks; } ;
struct irq_data {int dummy; } ;
struct irq_chip_generic {int wake_active; struct rockchip_pin_bank* private; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_chip_generic*,int ) ;
 int FUNC_4 (struct irq_chip_generic*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct irq_chip_generic *VAR_2 = FUNC_2(VAR_1);
 struct rockchip_pin_bank *VAR_3 = VAR_2->private;

 FUNC_1(VAR_3->clk);
 VAR_3->saved_masks = FUNC_3(VAR_2, VAR_0);
 FUNC_4(VAR_2, ~VAR_2->wake_active, VAR_0);
 FUNC_0(VAR_3->clk);
}
