
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_output_handle {scalar_t__ head; } ;
struct arm_spe_pmu_buf {scalar_t__ snapshot; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct arm_spe_pmu_buf*) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_output_handle*,scalar_t__) ;
 struct arm_spe_pmu_buf* FUNC_2 (struct perf_output_handle*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_output_handle *VAR_1)
{
 struct arm_spe_pmu_buf *VAR_2 = FUNC_2(VAR_1);
 u64 VAR_3, VAR_4;

 VAR_3 = FUNC_3(VAR_0) - (u64)VAR_2->base;
 VAR_4 = VAR_3 - FUNC_0(VAR_1->head, VAR_2);

 if (VAR_2->snapshot)
  VAR_1->head = VAR_3;

 FUNC_1(VAR_1, VAR_4);
}
