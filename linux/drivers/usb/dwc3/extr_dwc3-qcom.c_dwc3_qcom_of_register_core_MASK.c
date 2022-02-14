
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dwc3_qcom {int dwc3; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*,int *,int *,struct device*) ;
 struct dwc3_qcom* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct dwc3_qcom *VAR_2 = FUNC_4(VAR_1);
 struct device_node *VAR_3 = VAR_1->dev.of_node, *VAR_4;
 struct device *VAR_5 = &VAR_1->dev;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3, "dwc3");
 if (!VAR_4) {
  FUNC_0(VAR_5, "failed to find dwc3 core child\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_3(VAR_3, ((void*)0), ((void*)0), VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_5, "failed to register dwc3 core - %d\n", VAR_6);
  return VAR_6;
 }

 VAR_2->dwc3 = FUNC_1(VAR_4);
 if (!VAR_2->dwc3) {
  FUNC_0(VAR_5, "failed to get dwc3 platform device\n");
  return -VAR_0;
 }

 return 0;
}
