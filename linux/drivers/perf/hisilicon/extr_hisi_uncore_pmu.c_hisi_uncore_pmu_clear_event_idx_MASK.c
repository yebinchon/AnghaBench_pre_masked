
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used_mask; } ;
struct hisi_pmu {TYPE_1__ pmu_events; int dev; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hisi_pmu*,int) ;

__attribute__((used)) static void FUNC_3(struct hisi_pmu *VAR_0, int VAR_1)
{
 if (!FUNC_2(VAR_0, VAR_1)) {
  FUNC_1(VAR_0->dev, "Unsupported event index:%d!\n", VAR_1);
  return;
 }

 FUNC_0(VAR_1, VAR_0->pmu_events.used_mask);
}
