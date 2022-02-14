
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event {int dummy; } ;
struct arm_ccn_dt {TYPE_1__* pmu_counters; scalar_t__ base; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct perf_event* event; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct arm_ccn_dt *VAR_6)
{
 u32 VAR_7 = FUNC_4(VAR_6->base + VAR_0);
 int VAR_8;

 if (!VAR_7)
  return VAR_5;

 FUNC_5(VAR_7, VAR_6->base + VAR_1);

 FUNC_1(VAR_2 != VAR_3);

 for (VAR_8 = 0; VAR_8 < VAR_3 + 1; VAR_8++) {
  struct perf_event *VAR_9 = VAR_6->pmu_counters[VAR_8].event;
  int VAR_10 = VAR_7 & FUNC_0(VAR_8);

  FUNC_2(VAR_10 && !VAR_9 &&
    VAR_8 != VAR_2);

  if (!VAR_9 || !VAR_10)
   continue;

  FUNC_3(VAR_9);
 }

 return VAR_4;
}
