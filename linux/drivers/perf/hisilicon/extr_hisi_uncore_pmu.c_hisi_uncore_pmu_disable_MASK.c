
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct hisi_pmu {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* stop_counters ) (struct hisi_pmu*) ;} ;


 int FUNC_0 (struct hisi_pmu*) ;
 struct hisi_pmu* FUNC_1 (struct pmu*) ;

void FUNC_2(struct pmu *VAR_0)
{
 struct hisi_pmu *VAR_1 = FUNC_1(VAR_0);

 VAR_1->ops->stop_counters(VAR_1);
}
