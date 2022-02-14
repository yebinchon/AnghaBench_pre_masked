
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct hisi_pmu {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_counter ) (struct hisi_pmu*,struct hw_perf_event*) ;int (* enable_counter_int ) (struct hisi_pmu*,struct hw_perf_event*) ;int (* write_evtype ) (struct hisi_pmu*,int ,int ) ;} ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct hisi_pmu*,int ,int ) ;
 int FUNC_2 (struct hisi_pmu*,struct hw_perf_event*) ;
 int FUNC_3 (struct hisi_pmu*,struct hw_perf_event*) ;
 struct hisi_pmu* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_4(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;

 VAR_1->ops->write_evtype(VAR_1, VAR_2->idx,
        FUNC_0(VAR_0));

 VAR_1->ops->enable_counter_int(VAR_1, VAR_2);
 VAR_1->ops->enable_counter(VAR_1, VAR_2);
}
