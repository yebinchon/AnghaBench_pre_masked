
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_pinctrl {int domain; TYPE_1__* desc; } ;
struct sunxi_desc_function {unsigned int irqbank; unsigned int irqnum; } ;
struct gpio_chip {unsigned int ngpio; scalar_t__ base; int label; int parent; } ;
struct TYPE_2__ {unsigned int pin_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,unsigned int) ;
 struct sunxi_pinctrl* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,unsigned int) ;
 struct sunxi_desc_function* FUNC_3 (struct sunxi_pinctrl*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct sunxi_pinctrl *VAR_5 = FUNC_1(VAR_3);
 struct sunxi_desc_function *VAR_6;
 unsigned VAR_7 = VAR_5->desc->pin_base + VAR_4;
 unsigned VAR_8;

 if (VAR_4 >= VAR_3->ngpio)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5, VAR_7, "irq");
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_6->irqbank * VAR_2 + VAR_6->irqnum;

 FUNC_0(VAR_3->parent, "%s: request IRQ for GPIO %d, return %d\n",
  VAR_3->label, VAR_4 + VAR_3->base, VAR_8);

 return FUNC_2(VAR_5->domain, VAR_8);
}
