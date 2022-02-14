
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_output_handle {int head; TYPE_1__* event; } ;
struct arm_spe_pmu_buf {int dummy; } ;
struct arm_spe_pmu {scalar_t__ max_record_sz; } ;
struct TYPE_2__ {int pmu; } ;


 scalar_t__ FUNC_0 (int ,struct arm_spe_pmu_buf*) ;
 scalar_t__ FUNC_1 (struct perf_output_handle*) ;
 int FUNC_2 (struct perf_output_handle*,scalar_t__) ;
 struct arm_spe_pmu_buf* FUNC_3 (struct perf_output_handle*) ;
 struct arm_spe_pmu* FUNC_4 (int ) ;

__attribute__((used)) static u64 FUNC_5(struct perf_output_handle *VAR_0)
{
 struct arm_spe_pmu_buf *VAR_1 = FUNC_3(VAR_0);
 struct arm_spe_pmu *VAR_2 = FUNC_4(VAR_0->event->pmu);
 u64 VAR_3 = FUNC_1(VAR_0);
 u64 VAR_4 = FUNC_0(VAR_0->head, VAR_1);





 if (VAR_3 && (VAR_3 - VAR_4 < VAR_2->max_record_sz)) {
  FUNC_2(VAR_0, VAR_3 - VAR_4);
  VAR_3 = FUNC_1(VAR_0);
 }

 return VAR_3;
}
