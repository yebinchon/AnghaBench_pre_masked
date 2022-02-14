
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct opp_table {long voltage_tolerance_v1; int head; } ;
struct device {int dummy; } ;
struct dev_pm_opp {unsigned long rate; int available; int dynamic; TYPE_1__* supplies; } ;
struct TYPE_2__ {long u_volt; long u_volt_min; long u_volt_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct dev_pm_opp*,struct opp_table*,int) ;
 struct dev_pm_opp* FUNC_1 (struct opp_table*) ;
 int FUNC_2 (struct dev_pm_opp*) ;
 int FUNC_3 (int *,int ,struct dev_pm_opp*) ;

int FUNC_4(struct opp_table *VAR_3, struct device *VAR_4,
  unsigned long VAR_5, long VAR_6, bool VAR_7)
{
 struct dev_pm_opp *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_3);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->rate = VAR_5;
 VAR_9 = VAR_6 * VAR_3->voltage_tolerance_v1 / 100;
 VAR_8->supplies[0].u_volt = VAR_6;
 VAR_8->supplies[0].u_volt_min = VAR_6 - VAR_9;
 VAR_8->supplies[0].u_volt_max = VAR_6 + VAR_9;
 VAR_8->available = 1;
 VAR_8->dynamic = VAR_7;

 VAR_10 = FUNC_0(VAR_4, VAR_8, VAR_3, 0);
 if (VAR_10) {

  if (VAR_10 == -VAR_0)
   VAR_10 = 0;
  goto free_opp;
 }





 FUNC_3(&VAR_3->head, VAR_2, VAR_8);
 return 0;

free_opp:
 FUNC_2(VAR_8);

 return VAR_10;
}
