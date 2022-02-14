
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int line; } ;
struct mxs_auart_port {int flags; TYPE_1__ port; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mxs_auart_port *VAR_1,
  struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 int VAR_4;

 if (!VAR_3)

  return 1;

 VAR_4 = FUNC_1(VAR_3, "serial");
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->dev, "failed to get alias id: %d\n", VAR_4);
  return VAR_4;
 }
 VAR_1->port.line = VAR_4;

 if (FUNC_2(VAR_3, "uart-has-rtscts", ((void*)0)) ||
     FUNC_2(VAR_3, "fsl,uart-has-rtscts", ((void*)0)) )
  FUNC_3(VAR_0, &VAR_1->flags);

 return 0;
}
