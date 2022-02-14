
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->of_node;

 return FUNC_0(VAR_1, "renesas,xhci-r8a7790") ||
  FUNC_0(VAR_1, "renesas,xhci-r8a7791") ||
  FUNC_0(VAR_1, "renesas,xhci-r8a7793") ||
  FUNC_0(VAR_1, "renesas,rcar-gen2-xhci");
}
