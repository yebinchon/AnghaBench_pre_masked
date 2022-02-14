
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int state; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct hisi_pmu {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_counter ) (struct hisi_pmu*,struct hw_perf_event*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct hisi_pmu*,struct hw_perf_event*,int ) ;
 struct hisi_pmu* FUNC_6 (int ) ;

void FUNC_7(struct perf_event *VAR_3, int VAR_4)
{
 struct hisi_pmu *VAR_5 = FUNC_6(VAR_3->pmu);
 struct hw_perf_event *VAR_6 = &VAR_3->hw;

 if (FUNC_0(!(VAR_6->state & VAR_1)))
  return;

 FUNC_0(!(VAR_6->state & VAR_2));
 VAR_6->state = 0;
 FUNC_2(VAR_3);

 if (VAR_4 & VAR_0) {
  u64 VAR_7 = FUNC_3(&VAR_6->prev_count);

  VAR_5->ops->write_counter(VAR_5, VAR_6, VAR_7);
 }

 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
}
