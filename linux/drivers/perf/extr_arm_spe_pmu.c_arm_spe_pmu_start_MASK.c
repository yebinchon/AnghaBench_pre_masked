
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_output_handle {int dummy; } ;
struct hw_perf_event {int period_left; scalar_t__ state; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_spe_pmu {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_output_handle*,struct perf_event*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 struct perf_output_handle* FUNC_8 (int ) ;
 struct arm_spe_pmu* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_7, int VAR_8)
{
 u64 VAR_9;
 struct arm_spe_pmu *VAR_10 = FUNC_9(VAR_7->pmu);
 struct hw_perf_event *VAR_11 = &VAR_7->hw;
 struct perf_output_handle *VAR_12 = FUNC_8(VAR_10->handle);

 VAR_11->state = 0;
 FUNC_5(VAR_12, VAR_7);
 if (VAR_11->state)
  return;

 VAR_9 = FUNC_2(VAR_7);
 FUNC_10(VAR_9, VAR_3);

 VAR_9 = FUNC_1(VAR_7);
 FUNC_10(VAR_9, VAR_2);

 VAR_9 = FUNC_4(VAR_7);
 FUNC_10(VAR_9, VAR_6);

 if (VAR_8 & VAR_0) {
  VAR_9 = FUNC_3(VAR_7);
  FUNC_10(VAR_9, VAR_5);
  FUNC_6();
  VAR_9 = FUNC_7(&VAR_11->period_left);
  FUNC_10(VAR_9, VAR_4);
 }

 VAR_9 = FUNC_0(VAR_7);
 FUNC_6();
 FUNC_10(VAR_9, VAR_1);
}
