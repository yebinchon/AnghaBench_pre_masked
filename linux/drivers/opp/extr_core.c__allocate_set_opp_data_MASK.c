
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct opp_table {int regulator_count; struct dev_pm_set_opp_data* set_opp_data; int regulators; } ;
struct TYPE_4__ {void* supplies; } ;
struct TYPE_3__ {void* supplies; } ;
struct dev_pm_set_opp_data {TYPE_2__ old_opp; TYPE_1__ new_opp; } ;
struct dev_pm_opp_supply {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct dev_pm_set_opp_data* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct opp_table *VAR_3)
{
 struct dev_pm_set_opp_data *VAR_4;
 int VAR_5, VAR_6 = VAR_3->regulator_count;

 if (FUNC_0(!VAR_3->regulators))
  return -VAR_0;


 VAR_5 = sizeof(*VAR_4);


 VAR_5 += 2 * sizeof(struct dev_pm_opp_supply) * VAR_6;

 VAR_4 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_4->old_opp.supplies = (void *)(VAR_4 + 1);
 VAR_4->new_opp.supplies = VAR_4->old_opp.supplies + VAR_6;

 VAR_3->set_opp_data = VAR_4;

 return 0;
}
