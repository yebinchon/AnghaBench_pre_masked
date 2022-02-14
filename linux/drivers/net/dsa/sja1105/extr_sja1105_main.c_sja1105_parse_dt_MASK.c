
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sja1105_private {TYPE_1__* spidev; } ;
struct sja1105_dt_port {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct device_node* FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct sja1105_private*,struct sja1105_dt_port*,struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct sja1105_private *VAR_1,
       struct sja1105_dt_port *VAR_2)
{
 struct device *VAR_3 = &VAR_1->spidev->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct device_node *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_4, "ports");
 if (!VAR_5) {
  FUNC_0(VAR_3, "Incorrect bindings: absent \"ports\" node\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_5);
 FUNC_2(VAR_5);

 return VAR_6;
}
