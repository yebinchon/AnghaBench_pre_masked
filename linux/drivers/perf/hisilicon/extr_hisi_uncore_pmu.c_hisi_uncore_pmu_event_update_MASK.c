
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hw_perf_event {int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; int pmu; } ;
struct hisi_pmu {int counter_bits; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* read_counter ) (struct hisi_pmu*,struct hw_perf_event*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct hisi_pmu*,struct hw_perf_event*) ;
 struct hisi_pmu* FUNC_5 (int ) ;

void FUNC_6(struct perf_event *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_5(VAR_0->pmu);
 struct hw_perf_event *VAR_2 = &VAR_0->hw;
 u64 VAR_3, VAR_4, VAR_5;

 do {

  VAR_5 = VAR_1->ops->read_counter(VAR_1, VAR_2);
  VAR_4 = FUNC_3(&VAR_2->prev_count);
 } while (FUNC_2(&VAR_2->prev_count, VAR_4,
     VAR_5) != VAR_4);



 VAR_3 = (VAR_5 - VAR_4) &
  FUNC_0(VAR_1->counter_bits);
 FUNC_1(VAR_3, &VAR_0->count);
}
