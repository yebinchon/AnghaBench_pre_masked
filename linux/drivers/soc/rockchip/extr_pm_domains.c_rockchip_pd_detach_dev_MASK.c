
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct generic_pm_domain *VAR_0,
       struct device *VAR_1)
{
 FUNC_0(VAR_1, "detaching from power domain '%s'\n", VAR_0->name);

 FUNC_1(VAR_1);
}
