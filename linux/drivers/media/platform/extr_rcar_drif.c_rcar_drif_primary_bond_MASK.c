
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct platform_device *VAR_0)
{
 return FUNC_0(VAR_0->dev.of_node, "renesas,primary-bond");
}
