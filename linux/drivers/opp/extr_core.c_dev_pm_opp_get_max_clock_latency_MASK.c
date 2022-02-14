
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {unsigned long clock_latency_ns_max; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct opp_table*) ;
 struct opp_table* FUNC_1 (struct device*) ;
 int FUNC_2 (struct opp_table*) ;

unsigned long FUNC_3(struct device *VAR_0)
{
 struct opp_table *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1))
  return 0;

 VAR_2 = VAR_1->clock_latency_ns_max;

 FUNC_2(VAR_1);

 return VAR_2;
}
