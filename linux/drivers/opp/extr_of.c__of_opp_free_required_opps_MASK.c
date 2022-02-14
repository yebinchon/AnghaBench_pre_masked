
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int required_opp_count; } ;
struct dev_pm_opp {struct dev_pm_opp** required_opps; } ;


 int FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp**) ;

void FUNC_2(struct opp_table *VAR_0,
    struct dev_pm_opp *VAR_1)
{
 struct dev_pm_opp **VAR_2 = VAR_1->required_opps;
 int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->required_opp_count; VAR_3++) {
  if (!VAR_2[VAR_3])
   break;


  FUNC_0(VAR_2[VAR_3]);
 }

 FUNC_1(VAR_2);
 VAR_1->required_opps = ((void*)0);
}
