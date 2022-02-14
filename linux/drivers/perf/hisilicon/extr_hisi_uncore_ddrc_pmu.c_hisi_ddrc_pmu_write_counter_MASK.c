
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct hw_perf_event {int dummy; } ;
struct hisi_pmu {scalar_t__ base; int dev; } ;


 int FUNC_0 (struct hw_perf_event*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hisi_pmu*,int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hisi_pmu *VAR_0,
     struct hw_perf_event *VAR_1, u64 VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1);

 if (!FUNC_3(VAR_0, VAR_3)) {
  FUNC_1(VAR_0->dev, "Unsupported event index:%d!\n", VAR_3);
  return;
 }

 FUNC_4((u32)VAR_2,
        VAR_0->base + FUNC_2(VAR_3));
}
