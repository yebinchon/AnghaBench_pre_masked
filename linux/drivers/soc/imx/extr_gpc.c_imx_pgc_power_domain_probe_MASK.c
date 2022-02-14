
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int parent; scalar_t__ of_node; struct imx_pm_domain* platform_data; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int (* power_on ) (TYPE_1__*) ;} ;
struct imx_pm_domain {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int ) ;
 int FUNC_2 (struct device*,struct imx_pm_domain*) ;
 int FUNC_3 (struct imx_pm_domain*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct imx_pm_domain *VAR_3 = VAR_2->dev.platform_data;
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;


 if (VAR_4->of_node) {
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  if (VAR_5)
   return VAR_5;
 }


 if (VAR_3->base.power_on)
  VAR_3->base.power_on(&VAR_3->base);

 if (FUNC_0(VAR_0)) {
  FUNC_5(&VAR_3->base, ((void*)0), 0);
  VAR_5 = FUNC_4(VAR_4->of_node, &VAR_3->base);
  if (VAR_5)
   goto genpd_err;
 }

 FUNC_1(VAR_4, VAR_4->parent, VAR_1);

 return 0;

genpd_err:
 FUNC_6(&VAR_3->base);
 FUNC_3(VAR_3);

 return VAR_5;
}
