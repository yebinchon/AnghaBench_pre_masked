
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idx; } ;
struct perf_event {TYPE_1__ hw; } ;
struct ddr_pmu {struct perf_event** events; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ddr_pmu*,int ,scalar_t__,int) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct ddr_pmu *VAR_7 = (struct ddr_pmu *) VAR_5;
 struct perf_event *VAR_8, *VAR_9 = ((void*)0);


 FUNC_0(VAR_7,
         VAR_1,
         VAR_0,
         0);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {

  if (!VAR_7->events[VAR_6])
   continue;

  VAR_8 = VAR_7->events[VAR_6];

  FUNC_1(VAR_8);

  if (VAR_8->hw.idx == VAR_0)
   VAR_9 = VAR_8;
 }

 FUNC_0(VAR_7,
         VAR_1,
         VAR_0,
         1);
 if (VAR_9)
  FUNC_1(VAR_9);

 return VAR_2;
}
