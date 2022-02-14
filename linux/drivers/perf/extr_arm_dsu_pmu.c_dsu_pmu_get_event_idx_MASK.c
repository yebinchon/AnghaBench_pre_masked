
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long config; } ;
struct perf_event {int pmu; TYPE_1__ attr; } ;
struct dsu_pmu {int num_counters; } ;
struct dsu_hw_events {unsigned long* used_mask; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (int,unsigned long*) ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;
 struct dsu_pmu* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dsu_hw_events *VAR_3,
     struct perf_event *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_4->attr.config;
 struct dsu_pmu *VAR_7 = FUNC_3(VAR_4->pmu);
 unsigned long *VAR_8 = VAR_3->used_mask;

 if (VAR_6 == VAR_0) {
  if (FUNC_2(VAR_1, VAR_8))
   return -VAR_2;
  return VAR_1;
 }

 VAR_5 = FUNC_0(VAR_8, VAR_7->num_counters);
 if (VAR_5 >= VAR_7->num_counters)
  return -VAR_2;
 FUNC_1(VAR_5, VAR_3->used_mask);
 return VAR_5;
}
