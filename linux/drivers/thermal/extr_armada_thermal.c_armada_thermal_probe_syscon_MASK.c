
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct armada_thermal_priv {int syscon; } ;
struct TYPE_3__ {int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
           struct armada_thermal_priv *VAR_1)
{
 VAR_1->syscon = FUNC_1(VAR_0->dev.parent->of_node);
 return FUNC_0(VAR_1->syscon);
}
