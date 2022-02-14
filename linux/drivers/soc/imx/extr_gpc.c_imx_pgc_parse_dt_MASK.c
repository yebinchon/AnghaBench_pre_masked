
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_pm_domain {int * supply; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct imx_pm_domain*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct imx_pm_domain *VAR_2)
{

 VAR_2->supply = FUNC_2(VAR_1, "power");
 if (FUNC_0(VAR_2->supply)) {
  if (FUNC_1(VAR_2->supply) == -VAR_0)
   VAR_2->supply = ((void*)0);
  else
   return FUNC_1(VAR_2->supply);
 }


 return FUNC_3(VAR_1, VAR_2);
}
