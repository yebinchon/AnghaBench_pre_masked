
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {scalar_t__ regulator_count; } ;
struct dev_pm_opp_supply {int dummy; } ;
struct dev_pm_opp {int node; struct dev_pm_opp_supply* supplies; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dev_pm_opp* FUNC_1 (int,int ) ;

struct dev_pm_opp *FUNC_2(struct opp_table *VAR_1)
{
 struct dev_pm_opp *VAR_2;
 int VAR_3, VAR_4;


 VAR_3 = VAR_1->regulator_count > 0 ? VAR_1->regulator_count : 1;
 VAR_4 = sizeof(*VAR_2->supplies) * VAR_3;


 VAR_2 = FUNC_1(sizeof(*VAR_2) + VAR_4, VAR_0);
 if (!VAR_2)
  return ((void*)0);


 VAR_2->supplies = (struct dev_pm_opp_supply *)(VAR_2 + 1);
 FUNC_0(&VAR_2->node);

 return VAR_2;
}
