
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_output_handle {int head; } ;
struct arm_spe_pmu_buf {int snapshot; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct arm_spe_pmu_buf*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (struct perf_output_handle*,int) ;
 struct arm_spe_pmu_buf* FUNC_3 (struct perf_output_handle*) ;

__attribute__((used)) static void FUNC_4(struct perf_output_handle *VAR_1, int VAR_2)
{
 struct arm_spe_pmu_buf *VAR_3 = FUNC_3(VAR_1);
 u64 VAR_4 = FUNC_0(VAR_1->head, VAR_3);

 FUNC_1(VAR_3->base + VAR_4, VAR_0, VAR_2);
 if (!VAR_3->snapshot)
  FUNC_2(VAR_1, VAR_2);
}
