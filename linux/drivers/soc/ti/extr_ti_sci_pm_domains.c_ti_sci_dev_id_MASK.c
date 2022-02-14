
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_genpd_dev_data {int idx; } ;
struct generic_pm_domain_data {struct ti_sci_genpd_dev_data* data; } ;
struct device {int dummy; } ;


 struct generic_pm_domain_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct generic_pm_domain_data *VAR_1 = FUNC_0(VAR_0);
 struct ti_sci_genpd_dev_data *VAR_2 = VAR_1->data;

 return VAR_2->idx;
}
