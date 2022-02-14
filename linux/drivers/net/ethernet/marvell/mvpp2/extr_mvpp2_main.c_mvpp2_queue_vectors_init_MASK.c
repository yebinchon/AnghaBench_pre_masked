
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_port {scalar_t__ has_tx_irqs; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct mvpp2_port*,struct device_node*) ;
 int FUNC_1 (struct mvpp2_port*,struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct mvpp2_port *VAR_0,
        struct device_node *VAR_1)
{
 if (VAR_0->has_tx_irqs)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}
