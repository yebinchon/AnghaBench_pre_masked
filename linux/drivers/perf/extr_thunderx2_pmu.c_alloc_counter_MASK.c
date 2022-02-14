
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx2_uncore_pmu {int max_counters; int active_counters; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct tx2_uncore_pmu *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->active_counters,
    VAR_1->max_counters);
 if (VAR_2 == VAR_1->max_counters)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_1->active_counters);
 return VAR_2;
}
