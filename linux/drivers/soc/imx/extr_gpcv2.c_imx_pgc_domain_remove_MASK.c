
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct imx_pgc_domain* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct imx_pgc_domain {int genpd; TYPE_2__* dev; } ;
struct TYPE_4__ {int of_node; } ;


 int FUNC_0 (struct imx_pgc_domain*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct imx_pgc_domain *VAR_1 = VAR_0->dev.platform_data;

 FUNC_1(VAR_1->dev->of_node);
 FUNC_2(&VAR_1->genpd);
 FUNC_0(VAR_1);

 return 0;
}
