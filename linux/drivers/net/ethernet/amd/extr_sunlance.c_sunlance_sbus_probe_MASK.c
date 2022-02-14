
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct platform_device*,struct platform_device*,struct platform_device*) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(VAR_0->dev.parent);
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 int VAR_3;

 if (FUNC_0(VAR_2, "ledma")) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0));
 } else if (FUNC_0(VAR_2, "lebuffer")) {
  VAR_3 = FUNC_1(VAR_0, ((void*)0), VAR_1);
 } else
  VAR_3 = FUNC_1(VAR_0, ((void*)0), ((void*)0));

 return VAR_3;
}
