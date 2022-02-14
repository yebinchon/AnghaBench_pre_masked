
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opp_table {int required_opp_count; int genpd_virt_dev_lock; struct device** genpd_virt_devs; struct opp_table** required_opp_tables; } ;
struct device {int dummy; } ;
struct dev_pm_opp {TYPE_1__** required_opps; } ;
struct TYPE_2__ {unsigned int pstate; } ;


 int FUNC_0 (struct device*,char*,int ,unsigned int,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,unsigned int) ;
 scalar_t__ FUNC_3 (struct dev_pm_opp*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0,
         struct opp_table *VAR_1,
         struct dev_pm_opp *VAR_2)
{
 struct opp_table **VAR_3 = VAR_1->required_opp_tables;
 struct device **VAR_4 = VAR_1->genpd_virt_devs;
 unsigned int VAR_5;
 int VAR_6, VAR_7 = 0;

 if (!VAR_3)
  return 0;


 if (!VAR_4) {
  VAR_5 = FUNC_3(VAR_2) ? VAR_2->required_opps[0]->pstate : 0;
  VAR_7 = FUNC_2(VAR_0, VAR_5);
  if (VAR_7) {
   FUNC_0(VAR_0, "Failed to set performance state of %s: %d (%d)\n",
    FUNC_1(VAR_0), VAR_5, VAR_7);
  }
  return VAR_7;
 }







 FUNC_4(&VAR_1->genpd_virt_dev_lock);

 for (VAR_6 = 0; VAR_6 < VAR_1->required_opp_count; VAR_6++) {
  VAR_5 = FUNC_3(VAR_2) ? VAR_2->required_opps[VAR_6]->pstate : 0;

  if (!VAR_4[VAR_6])
   continue;

  VAR_7 = FUNC_2(VAR_4[VAR_6], VAR_5);
  if (VAR_7) {
   FUNC_0(VAR_0, "Failed to set performance rate of %s: %d (%d)\n",
    FUNC_1(VAR_4[VAR_6]), VAR_5, VAR_7);
   break;
  }
 }
 FUNC_5(&VAR_1->genpd_virt_dev_lock);

 return VAR_7;
}
