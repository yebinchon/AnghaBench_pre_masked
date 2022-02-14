
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_pm_domain {struct ti_sci_handle const* ti_sci; } ;
struct ti_sci_handle {int dummy; } ;
struct generic_pm_domain {int dummy; } ;
struct device {int pm_domain; } ;


 struct ti_sci_pm_domain* FUNC_0 (struct generic_pm_domain*) ;
 struct generic_pm_domain* FUNC_1 (int ) ;

__attribute__((used)) static const struct ti_sci_handle *FUNC_2(struct device *VAR_0)
{
 struct generic_pm_domain *VAR_1 = FUNC_1(VAR_0->pm_domain);
 struct ti_sci_pm_domain *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->ti_sci;
}
