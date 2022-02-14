
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct slim_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct slim_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct device_node *VAR_2 = VAR_1;
 struct slim_device *VAR_3 = FUNC_0(VAR_0);

 return (VAR_3->dev.of_node == VAR_2);
}
