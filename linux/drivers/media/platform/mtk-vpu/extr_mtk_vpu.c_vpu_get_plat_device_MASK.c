
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;

struct platform_device *FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct device_node *VAR_2;
 struct platform_device *VAR_3;

 VAR_2 = FUNC_4(VAR_1->of_node, "mediatek,vpu", 0);
 if (!VAR_2) {
  FUNC_1(VAR_1, "can't get vpu node\n");
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 if (FUNC_0(!VAR_3)) {
  FUNC_1(VAR_1, "vpu pdev failed\n");
  return ((void*)0);
 }

 return VAR_3;
}
