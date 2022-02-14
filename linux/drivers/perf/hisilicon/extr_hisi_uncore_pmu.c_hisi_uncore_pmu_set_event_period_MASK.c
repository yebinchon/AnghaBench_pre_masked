
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int prev_count; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct hisi_pmu {TYPE_1__* ops; scalar_t__ counter_bits; } ;
struct TYPE_2__ {int (* write_counter ) (struct hisi_pmu*,struct hw_perf_event*,int ) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hisi_pmu*,struct hw_perf_event*,int ) ;
 struct hisi_pmu* FUNC_3 (int ) ;

void FUNC_4(struct perf_event *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_3(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 u64 VAR_3 = FUNC_0(VAR_1->counter_bits - 1);

 FUNC_1(&VAR_2->prev_count, VAR_3);

 VAR_1->ops->write_counter(VAR_1, VAR_2, VAR_3);
}
