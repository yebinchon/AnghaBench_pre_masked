
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; } ;
struct uart_pxa_port {TYPE_1__ port; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
          struct uart_pxa_port *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 int VAR_3;

 if (!VAR_2)
  return 1;

 VAR_3 = FUNC_1(VAR_2, "serial");
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev, "failed to get alias id, errno %d\n", VAR_3);
  return VAR_3;
 }
 VAR_1->port.line = VAR_3;
 return 0;
}
