
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {scalar_t__ type; scalar_t__ freq; scalar_t__ exclude_idle; } ;
struct perf_event {scalar_t__ cpu; TYPE_1__* pmu; struct perf_event_attr attr; } ;
struct arm_spe_pmu {int features; int supported_cpus; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 struct arm_spe_pmu* FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_15)
{
 u64 VAR_16;
 struct perf_event_attr *VAR_17 = &VAR_15->attr;
 struct arm_spe_pmu *VAR_18 = FUNC_6(VAR_15->pmu);


 if (VAR_17->type != VAR_15->pmu->type)
  return -VAR_3;

 if (VAR_15->cpu >= 0 &&
     !FUNC_5(VAR_15->cpu, &VAR_18->supported_cpus))
  return -VAR_3;

 if (FUNC_2(VAR_15) & VAR_11)
  return -VAR_4;

 if (VAR_17->exclude_idle)
  return -VAR_4;
 if (VAR_17->freq)
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_15);
 if ((VAR_16 & FUNC_0(VAR_12)) &&
     !(VAR_18->features & VAR_5))
  return -VAR_4;

 if ((VAR_16 & FUNC_0(VAR_14)) &&
     !(VAR_18->features & VAR_7))
  return -VAR_4;

 if ((VAR_16 & FUNC_0(VAR_13)) &&
     !(VAR_18->features & VAR_6))
  return -VAR_4;

 VAR_16 = FUNC_1(VAR_15);
 if (!FUNC_4(VAR_0) &&
     (VAR_16 & (FUNC_0(VAR_9) |
      FUNC_0(VAR_8) |
      FUNC_0(VAR_10))))
  return -VAR_1;

 return 0;
}
