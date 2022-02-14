
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static struct device_node *FUNC_2(struct platform_device *VAR_0)
{
 struct device_node *VAR_1;

 VAR_1 = FUNC_1(VAR_0->dev.of_node, "renesas,bonding", 0);
 if (VAR_1 && FUNC_0(VAR_1))
  return VAR_1;

 return ((void*)0);
}
