
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int dummy; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct hisi_pmu {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable_counter_int ) (struct hisi_pmu*,struct hw_perf_event*) ;int (* disable_counter ) (struct hisi_pmu*,struct hw_perf_event*) ;} ;


 int FUNC_0 (struct hisi_pmu*,struct hw_perf_event*) ;
 int FUNC_1 (struct hisi_pmu*,struct hw_perf_event*) ;
 struct hisi_pmu* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_2(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;

 VAR_1->ops->disable_counter(VAR_1, VAR_2);
 VAR_1->ops->disable_counter_int(VAR_1, VAR_2);
}
