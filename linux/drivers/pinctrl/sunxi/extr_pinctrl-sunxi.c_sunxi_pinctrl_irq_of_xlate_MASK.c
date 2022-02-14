
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_pinctrl {TYPE_1__* desc; } ;
struct sunxi_desc_function {int const irqbank; int const irqnum; } ;
struct irq_domain {struct sunxi_pinctrl* host_data; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int pin_base; } ;


 int VAR_0 ;
 int const VAR_1 ;
 struct sunxi_desc_function* FUNC_0 (struct sunxi_pinctrl*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct irq_domain *VAR_2,
          struct device_node *VAR_3,
          const u32 *VAR_4,
          unsigned int VAR_5,
          unsigned long *VAR_6,
          unsigned int *VAR_7)
{
 struct sunxi_pinctrl *VAR_8 = VAR_2->host_data;
 struct sunxi_desc_function *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_5 < 3)
  return -VAR_0;

 VAR_11 = VAR_1 * VAR_4[0];
 VAR_10 = VAR_8->desc->pin_base + VAR_11 + VAR_4[1];

 VAR_9 = FUNC_0(VAR_8, VAR_10, "irq");
 if (!VAR_9)
  return -VAR_0;

 *VAR_6 = VAR_9->irqbank * VAR_1 + VAR_9->irqnum;
 *VAR_7 = VAR_4[2];

 return 0;
}
