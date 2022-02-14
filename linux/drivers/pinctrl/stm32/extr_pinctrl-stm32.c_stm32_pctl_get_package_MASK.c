
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pinctrl {scalar_t__ pkg; int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_0,
       struct stm32_pinctrl *VAR_1)
{
 if (FUNC_2(VAR_0, "st,package", &VAR_1->pkg)) {
  VAR_1->pkg = 0;
  FUNC_1(VAR_1->dev, "No package detected, use default one\n");
 } else {
  FUNC_0(VAR_1->dev, "package detected: %x\n", VAR_1->pkg);
 }
}
