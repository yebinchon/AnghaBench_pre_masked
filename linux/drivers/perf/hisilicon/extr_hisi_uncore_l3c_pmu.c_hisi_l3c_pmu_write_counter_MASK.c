
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hw_perf_event {int idx; } ;
struct hisi_pmu {scalar_t__ base; int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_pmu*,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hisi_pmu *VAR_0,
           struct hw_perf_event *VAR_1, u64 VAR_2)
{
 u32 VAR_3 = VAR_1->idx;

 if (!FUNC_2(VAR_0, VAR_3)) {
  FUNC_0(VAR_0->dev, "Unsupported event index:%d!\n", VAR_3);
  return;
 }


 FUNC_3(VAR_2, VAR_0->base + FUNC_1(VAR_3));
}
