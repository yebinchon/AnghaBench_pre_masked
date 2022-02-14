
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_5__ {int line; } ;
struct TYPE_4__ {int location; } ;
struct efm32_uart_port {TYPE_2__ port; TYPE_1__ pdata; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 int FUNC_1 (struct efm32_uart_port*,char*,...) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1,
  struct efm32_uart_port *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 u32 VAR_4;
 int VAR_5;

 if (!VAR_3)
  return 1;

 VAR_5 = FUNC_3(VAR_3, "energymicro,location", &VAR_4);

 if (VAR_5)

  VAR_5 = FUNC_3(VAR_3, "efm32,location", &VAR_4);

 if (VAR_5)

  VAR_5 = FUNC_3(VAR_3, "location", &VAR_4);

 if (!VAR_5) {
  if (VAR_4 > 5) {
   FUNC_0(&VAR_1->dev, "invalid location\n");
   return -VAR_0;
  }
  FUNC_1(VAR_2, "using location %u\n", VAR_4);
  VAR_2->pdata.location = VAR_4;
 } else {
  FUNC_1(VAR_2, "fall back to location 0\n");
 }

 VAR_5 = FUNC_2(VAR_3, "serial");
 if (VAR_5 < 0) {
  FUNC_0(&VAR_1->dev, "failed to get alias id: %d\n", VAR_5);
  return VAR_5;
 } else {
  VAR_2->port.line = VAR_5;
  return 0;
 }

}
