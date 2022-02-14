
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; struct imx_pm_domain* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct imx_pm_domain {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct imx_pm_domain*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct imx_pm_domain *VAR_2 = VAR_1->dev.platform_data;

 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_1->dev.of_node);
  FUNC_3(&VAR_2->base);
  FUNC_1(VAR_2);
 }

 return 0;
}
