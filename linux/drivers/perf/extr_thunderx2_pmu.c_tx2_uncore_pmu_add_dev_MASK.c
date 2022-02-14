
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct TYPE_4__ {int function; } ;
struct tx2_uncore_pmu {int cpu; int name; TYPE_1__ pmu; int dev; int entry; int hpnode; TYPE_2__ hrtimer; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct tx2_uncore_pmu*) ;

__attribute__((used)) static int FUNC_8(struct tx2_uncore_pmu *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(FUNC_2(VAR_7->node),
   VAR_4);

 VAR_7->cpu = VAR_9;
 FUNC_5(&VAR_7->hrtimer, VAR_0, VAR_3);
 VAR_7->hrtimer.function = VAR_5;

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_4(VAR_7->dev, "%s PMU: Failed to init driver\n",
    VAR_7->name);
  return -VAR_2;
 }


 VAR_8 = FUNC_0(
   VAR_1,
   &VAR_7->hpnode);
 if (VAR_8) {
  FUNC_4(VAR_7->dev, "Error %d registering hotplug", VAR_8);
  return VAR_8;
 }


 FUNC_6(&VAR_7->entry, &VAR_6);

 FUNC_3(VAR_7->dev, "%s PMU UNCORE registered\n",
   VAR_7->pmu.name);
 return VAR_8;
}
