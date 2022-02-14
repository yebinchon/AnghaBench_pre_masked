
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int phy; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct platform_device*,struct device_node*,int *) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct device_node *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(VAR_1, VAR_3, &VAR_0.phy);
 if (VAR_4)
  goto err;

 FUNC_1(VAR_3);
 return 0;

err:
 FUNC_1(VAR_3);
 return VAR_4;
}
