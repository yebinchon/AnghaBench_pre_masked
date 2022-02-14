
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mdio_platform_data {int bus_freq; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct mdio_platform_data *VAR_1,
    struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.of_node;
 u32 VAR_4;

 if (!VAR_3)
  return -VAR_0;

 if (FUNC_1(VAR_3, "bus_freq", &VAR_4)) {
  FUNC_0(&VAR_2->dev, "Missing bus_freq property in the DT.\n");
  return -VAR_0;
 }
 VAR_1->bus_freq = VAR_4;

 return 0;
}
