
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsensor_group_thermtrips {int id; int temp; } ;
struct tegra_soctherm {TYPE_1__* soc; } ;
struct TYPE_2__ {int num_ttgs; struct tsensor_group_thermtrips* thermtrips; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct tegra_soctherm *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_1;
 struct tsensor_group_thermtrips *VAR_6 = VAR_2->soc->thermtrips;

 if (VAR_3 >= VAR_0)
  return VAR_5;

 if (VAR_6) {
  for (VAR_4 = 0; VAR_4 < VAR_2->soc->num_ttgs; VAR_4++) {
   if (VAR_6[VAR_4].id == VAR_3)
    return VAR_6[VAR_4].temp;
  }
 }

 return VAR_5;
}
