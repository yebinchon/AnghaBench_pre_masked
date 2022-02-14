
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc6387xb {int clk32k; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct tc6387xb* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct tc6387xb *VAR_1 = FUNC_1(VAR_0->dev.parent);

 FUNC_0(VAR_1->clk32k);

 return 0;
}
