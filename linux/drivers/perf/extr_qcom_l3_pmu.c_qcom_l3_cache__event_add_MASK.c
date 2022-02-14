
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct l3cache_pmu {struct perf_event** events; int used_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,int ) ;
 struct l3cache_pmu* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_5, int VAR_6)
{
 struct l3cache_pmu *VAR_7 = FUNC_4(VAR_5->pmu);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 int VAR_9 = FUNC_1(VAR_5) ? 1 : 0;
 int VAR_10;




 VAR_10 = FUNC_0(VAR_7->used_mask, VAR_1, VAR_9);
 if (VAR_10 < 0)

  return -VAR_0;

 VAR_8->idx = VAR_10;
 VAR_8->state = VAR_3 | VAR_4;
 VAR_7->events[VAR_10] = VAR_5;

 if (VAR_6 & VAR_2)
  FUNC_3(VAR_5, 0);


 FUNC_2(VAR_5);

 return 0;
}
