
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; int config1; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {TYPE_1__ attr; struct hw_perf_event hw; int pmu; } ;
struct ddr_pmu {int active_events; struct perf_event** events; int dev; scalar_t__ base; TYPE_2__* devtype_data; } ;
struct TYPE_4__ {int quirks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ddr_pmu*,int) ;
 int FUNC_1 (struct perf_event*,int) ;
 int FUNC_2 (struct perf_event*,struct perf_event*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ,char*) ;
 struct ddr_pmu* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_8, int VAR_9)
{
 struct ddr_pmu *VAR_10 = FUNC_5(VAR_8->pmu);
 struct hw_perf_event *VAR_11 = &VAR_8->hw;
 int VAR_12;
 int VAR_13 = VAR_8->attr.config;
 int VAR_14 = VAR_8->attr.config1;

 if (VAR_10->devtype_data->quirks & VAR_2) {
  int VAR_15;

  for (VAR_15 = 1; VAR_15 < VAR_5; VAR_15++) {
   if (VAR_10->events[VAR_15] &&
       !FUNC_2(VAR_8, VAR_10->events[VAR_15]))
    return -VAR_3;
  }

  if (FUNC_3(VAR_8)) {

   VAR_14 ^= VAR_0;
   FUNC_6(VAR_14, VAR_10->base + VAR_1);
  }
 }

 VAR_12 = FUNC_0(VAR_10, VAR_13);
 if (VAR_12 < 0) {
  FUNC_4(VAR_10->dev, "There are not enough counters\n");
  return -VAR_4;
 }

 VAR_10->events[VAR_12] = VAR_8;
 VAR_10->active_events++;
 VAR_11->idx = VAR_12;

 VAR_11->state |= VAR_7;

 if (VAR_9 & VAR_6)
  FUNC_1(VAR_8, VAR_9);

 return 0;
}
