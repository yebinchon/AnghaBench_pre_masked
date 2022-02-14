
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,struct platform_device*,int) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0);
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 struct platform_device *VAR_4 = ((void*)0);
 int VAR_5 = 0;
 int VAR_6;

 if (FUNC_2(VAR_3->parent, "espdma") ||
     FUNC_2(VAR_3->parent, "dma"))
  VAR_2 = VAR_3->parent;
 else if (FUNC_2(VAR_3, "SUNW,fas")) {
  VAR_2 = VAR_1->dev.of_node;
  VAR_5 = 1;
 }
 if (VAR_2)
  VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3(&VAR_4->dev);

 return VAR_6;
}
