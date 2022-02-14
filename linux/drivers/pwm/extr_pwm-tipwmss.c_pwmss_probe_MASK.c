
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (struct device_node*,int *,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 int VAR_1;
 struct device_node *VAR_2 = VAR_0->dev.of_node;

 FUNC_2(&VAR_0->dev);


 VAR_1 = FUNC_1(VAR_2, ((void*)0), ((void*)0), &VAR_0->dev);
 if (VAR_1)
  FUNC_0(&VAR_0->dev, "no child node found\n");

 return VAR_1;
}
