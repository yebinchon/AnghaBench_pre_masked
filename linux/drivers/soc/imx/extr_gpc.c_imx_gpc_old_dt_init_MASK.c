
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_4__ {int (* power_on ) (TYPE_1__*) ;} ;
struct imx_pm_domain {int ipg_rate_mhz; TYPE_1__ base; int supply; struct regmap* regmap; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct imx_pm_domain* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct device*,struct imx_pm_domain*) ;
 int FUNC_5 (struct imx_pm_domain*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4, struct regmap *VAR_5,
          unsigned int VAR_6)
{
 struct imx_pm_domain *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = &VAR_2[VAR_8];
  VAR_7->regmap = VAR_5;
  VAR_7->ipg_rate_mhz = 66;

  if (VAR_8 == 1) {
   VAR_7->supply = FUNC_3(VAR_4, "pu");
   if (FUNC_1(VAR_7->supply))
    return FUNC_2(VAR_7->supply);

   VAR_9 = FUNC_4(VAR_4, VAR_7);
   if (VAR_9)
    goto clk_err;

   VAR_7->base.power_on(&VAR_7->base);
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_7(&VAR_2[VAR_8].base, ((void*)0), 0);

 if (FUNC_0(VAR_0)) {
  VAR_9 = FUNC_6(VAR_4->of_node,
          &VAR_3);
  if (VAR_9)
   goto genpd_err;
 }

 return 0;

genpd_err:
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_8(&VAR_2[VAR_8].base);
 FUNC_5(&VAR_2[VAR_1]);
clk_err:
 return VAR_9;
}
