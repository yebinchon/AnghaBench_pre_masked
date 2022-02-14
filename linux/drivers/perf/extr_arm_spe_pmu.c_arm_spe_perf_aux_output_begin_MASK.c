
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_output_handle {int head; } ;
struct TYPE_2__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct arm_spe_pmu_buf {scalar_t__ base; scalar_t__ snapshot; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct arm_spe_pmu_buf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct perf_output_handle*) ;
 int FUNC_3 (struct perf_output_handle*) ;
 struct arm_spe_pmu_buf* FUNC_4 (struct perf_output_handle*,struct perf_event*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct perf_output_handle *VAR_4,
       struct perf_event *VAR_5)
{
 u64 VAR_6, VAR_7;
 struct arm_spe_pmu_buf *VAR_8;


 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (!VAR_8) {
  VAR_5->hw.state |= VAR_0;




  VAR_7 = 0;
  goto out_write_limit;
 }

 VAR_7 = VAR_8->snapshot ? FUNC_3(VAR_4)
         : FUNC_2(VAR_4);
 if (VAR_7)
  VAR_7 |= FUNC_0(VAR_2);

 VAR_7 += (u64)VAR_8->base;
 VAR_6 = (u64)VAR_8->base + FUNC_1(VAR_4->head, VAR_8);
 FUNC_5(VAR_6, VAR_3);

out_write_limit:
 FUNC_5(VAR_7, VAR_1);
}
