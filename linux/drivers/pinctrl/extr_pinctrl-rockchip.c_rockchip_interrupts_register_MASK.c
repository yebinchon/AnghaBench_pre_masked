
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int nr_banks; struct rockchip_pin_bank* pin_banks; } ;
struct rockchip_pin_bank {int clk; int domain; int irq; int nr_pins; scalar_t__ reg_base; int name; int of_node; int valid; } ;
struct platform_device {int dev; } ;
struct irq_chip_generic {int wake_enabled; TYPE_3__* chip_types; struct rockchip_pin_bank* private; scalar_t__ reg_base; } ;
struct TYPE_5__ {int irq_set_type; int irq_resume; int irq_suspend; int irq_set_wake; int irq_disable; int irq_enable; int irq_unmask; int irq_mask; int irq_ack; } ;
struct TYPE_4__ {int ack; scalar_t__ mask; } ;
struct TYPE_6__ {TYPE_2__ chip; TYPE_1__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_7 ;
 int FUNC_5 (int ,int,int,char*,int ,unsigned int,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int *,int *) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct irq_chip_generic* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,struct rockchip_pin_bank*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_19,
      struct rockchip_pinctrl *VAR_20)
{
 struct rockchip_pin_ctrl *VAR_21 = VAR_20->ctrl;
 struct rockchip_pin_bank *VAR_22 = VAR_21->pin_banks;
 unsigned int VAR_23 = VAR_6 | VAR_5 | VAR_4;
 struct irq_chip_generic *VAR_24;
 int VAR_25;
 int VAR_26, VAR_27;

 for (VAR_26 = 0; VAR_26 < VAR_21->nr_banks; ++VAR_26, ++VAR_22) {
  if (!VAR_22->valid) {
   FUNC_4(&VAR_19->dev, "bank %s is not valid\n",
     VAR_22->name);
   continue;
  }

  VAR_25 = FUNC_2(VAR_22->clk);
  if (VAR_25) {
   FUNC_3(&VAR_19->dev, "failed to enable clock for bank %s\n",
    VAR_22->name);
   continue;
  }

  VAR_22->domain = FUNC_7(VAR_22->of_node, 32,
      &VAR_12, ((void*)0));
  if (!VAR_22->domain) {
   FUNC_4(&VAR_19->dev, "could not initialize irq domain for bank %s\n",
     VAR_22->name);
   FUNC_1(VAR_22->clk);
   continue;
  }

  VAR_25 = FUNC_5(VAR_22->domain, 32, 1,
      "rockchip_gpio_irq", VAR_7,
      VAR_23, 0, VAR_3);
  if (VAR_25) {
   FUNC_3(&VAR_19->dev, "could not alloc generic chips for bank %s\n",
    VAR_22->name);
   FUNC_8(VAR_22->domain);
   FUNC_1(VAR_22->clk);
   continue;
  }






  FUNC_11(0xffffffff, VAR_22->reg_base + VAR_1);
  FUNC_11(0xffffffff, VAR_22->reg_base + VAR_0);

  VAR_24 = FUNC_9(VAR_22->domain, 0);
  VAR_24->reg_base = VAR_22->reg_base;
  VAR_24->private = VAR_22;
  VAR_24->chip_types[0].regs.mask = VAR_1;
  VAR_24->chip_types[0].regs.ack = VAR_2;
  VAR_24->chip_types[0].chip.irq_ack = VAR_8;
  VAR_24->chip_types[0].chip.irq_mask = VAR_10;
  VAR_24->chip_types[0].chip.irq_unmask = VAR_9;
  VAR_24->chip_types[0].chip.irq_enable = VAR_15;
  VAR_24->chip_types[0].chip.irq_disable = VAR_14;
  VAR_24->chip_types[0].chip.irq_set_wake = VAR_11;
  VAR_24->chip_types[0].chip.irq_suspend = VAR_18;
  VAR_24->chip_types[0].chip.irq_resume = VAR_16;
  VAR_24->chip_types[0].chip.irq_set_type = VAR_17;
  VAR_24->wake_enabled = FUNC_0(VAR_22->nr_pins);

  FUNC_10(VAR_22->irq,
       VAR_13, VAR_22);


  for (VAR_27 = 0 ; VAR_27 < 32 ; VAR_27++)
   FUNC_6(VAR_22->domain, VAR_27);

  FUNC_1(VAR_22->clk);
 }

 return 0;
}
