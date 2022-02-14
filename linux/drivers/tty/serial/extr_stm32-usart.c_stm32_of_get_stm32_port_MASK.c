
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; } ;
struct stm32_port {int last_res; scalar_t__ cr3_irq; int cr1_irq; TYPE_1__ port; int hw_flow_control; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 struct stm32_port* VAR_3 ;

__attribute__((used)) static struct stm32_port *FUNC_4(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 int VAR_6;

 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_5, "serial");
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "failed to get alias id, errno %d\n", VAR_6);
  return ((void*)0);
 }

 if (FUNC_0(VAR_6 >= VAR_1))
  return ((void*)0);

 VAR_3[VAR_6].hw_flow_control = FUNC_3(VAR_5,
       "st,hw-flow-ctrl");
 VAR_3[VAR_6].port.line = VAR_6;
 VAR_3[VAR_6].cr1_irq = VAR_2;
 VAR_3[VAR_6].cr3_irq = 0;
 VAR_3[VAR_6].last_res = VAR_0;
 return &VAR_3[VAR_6];
}
