
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_output_handle {int dummy; } ;
struct hw_perf_event {int state; int period_left; } ;
struct perf_event {struct hw_perf_event hw; int pmu; } ;
struct arm_spe_pmu {int handle; } ;
typedef enum arm_spe_pmu_buf_fault_action { ____Placeholder_arm_spe_pmu_buf_fault_action } arm_spe_pmu_buf_fault_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_output_handle*) ;
 int FUNC_1 (struct perf_output_handle*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct perf_output_handle*) ;
 int FUNC_5 (int ) ;
 struct perf_output_handle* FUNC_6 (int ) ;
 struct arm_spe_pmu* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct perf_event *VAR_6, int VAR_7)
{
 struct arm_spe_pmu *VAR_8 = FUNC_7(VAR_6->pmu);
 struct hw_perf_event *VAR_9 = &VAR_6->hw;
 struct perf_output_handle *VAR_10 = FUNC_6(VAR_8->handle);


 if (VAR_9->state & VAR_1)
  return;


 FUNC_2();

 if (VAR_7 & VAR_0) {





  if (FUNC_4(VAR_10)) {
   enum arm_spe_pmu_buf_fault_action VAR_11;

   VAR_11 = FUNC_1(VAR_10);
   if (VAR_11 == VAR_3)
    FUNC_0(VAR_10);
   else
    FUNC_8(0, VAR_4);
  }






  FUNC_3(&VAR_9->period_left, FUNC_5(VAR_5));
  VAR_9->state |= VAR_2;
 }

 VAR_9->state |= VAR_1;
}
