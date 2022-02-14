
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int flags; int power_on; int power_off; int detach_dev; int attach_dev; } ;
struct rmobile_pm_domain {struct dev_power_governor* gov; struct generic_pm_domain genpd; } ;
struct dev_power_governor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rmobile_pm_domain*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct generic_pm_domain*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct rmobile_pm_domain *VAR_8)
{
 struct generic_pm_domain *VAR_9 = &VAR_8->genpd;
 struct dev_power_governor *VAR_10 = VAR_8->gov;

 VAR_9->flags |= VAR_2 | VAR_0;
 VAR_9->attach_dev = VAR_3;
 VAR_9->detach_dev = VAR_4;

 if (!(VAR_9->flags & VAR_1)) {
  VAR_9->power_off = VAR_5;
  VAR_9->power_on = VAR_6;
  FUNC_0(VAR_8);
 }

 FUNC_1(VAR_9, VAR_10 ? : &VAR_7, 0);
}
