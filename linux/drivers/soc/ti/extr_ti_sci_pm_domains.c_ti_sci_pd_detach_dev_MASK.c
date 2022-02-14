
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_genpd_dev_data {int dummy; } ;
struct generic_pm_domain_data {struct ti_sci_genpd_dev_data* data; } ;
struct generic_pm_domain {int dummy; } ;
struct device {int dummy; } ;


 struct generic_pm_domain_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ti_sci_genpd_dev_data*) ;

__attribute__((used)) static void FUNC_2(struct generic_pm_domain *VAR_0,
     struct device *VAR_1)
{
 struct generic_pm_domain_data *VAR_2 = FUNC_0(VAR_1);
 struct ti_sci_genpd_dev_data *VAR_3 = VAR_2->data;

 FUNC_1(VAR_3);
 VAR_2->data = ((void*)0);
}
