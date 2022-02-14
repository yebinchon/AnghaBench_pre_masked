
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static void
FUNC_3(struct platform_device *VAR_2, int *VAR_3, int *VAR_4)
{
 struct device_node *VAR_5 = VAR_2->dev.of_node;

 *VAR_3 = *VAR_4 = 1;

 if (!VAR_5 || !FUNC_1(VAR_5))
  return;


 FUNC_2(VAR_5, "fsl,num-tx-queues", VAR_3);

 FUNC_2(VAR_5, "fsl,num-rx-queues", VAR_4);

 if (*VAR_3 < 1 || *VAR_3 > VAR_1) {
  FUNC_0(&VAR_2->dev, "Invalid num_tx(=%d), fall back to 1\n",
    *VAR_3);
  *VAR_3 = 1;
  return;
 }

 if (*VAR_4 < 1 || *VAR_4 > VAR_0) {
  FUNC_0(&VAR_2->dev, "Invalid num_rx(=%d), fall back to 1\n",
    *VAR_4);
  *VAR_4 = 1;
  return;
 }

}
