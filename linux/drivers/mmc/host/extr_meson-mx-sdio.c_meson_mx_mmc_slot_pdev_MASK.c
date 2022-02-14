
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device_node*) ;
 struct platform_device* FUNC_4 (struct device_node*,int *,struct device*) ;

__attribute__((used)) static struct platform_device *FUNC_5(struct device *VAR_1)
{
 struct device_node *VAR_2;
 struct platform_device *VAR_3;






 VAR_2 = FUNC_2(VAR_1->of_node, "mmc-slot");
 if (!VAR_2) {
  FUNC_1(VAR_1, "no 'mmc-slot' sub-node found\n");
  return FUNC_0(-VAR_0);
 }

 VAR_3 = FUNC_4(VAR_2, ((void*)0), VAR_1);
 FUNC_3(VAR_2);

 return VAR_3;
}
