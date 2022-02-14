
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_start_sched_scan_cmd {TYPE_1__* scan_plans; } ;
struct wil6210_priv {int dummy; } ;
struct cfg80211_sched_scan_plan {int iterations; int interval; } ;
struct TYPE_2__ {void* num_of_iterations; void* interval_sec; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wil6210_priv*,char*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct wil6210_priv *VAR_1,
    struct wmi_start_sched_scan_cmd *VAR_2,
    struct cfg80211_sched_scan_plan *VAR_3,
    int VAR_4)
{
 int VAR_5;

 if (VAR_4 > VAR_0) {
  FUNC_1(VAR_1, "too many plans (%d), use first %d\n",
       VAR_4, VAR_0);
  VAR_4 = VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct cfg80211_sched_scan_plan *VAR_6 = &VAR_3[VAR_5];

  VAR_2->scan_plans[VAR_5].interval_sec =
   FUNC_0(VAR_6->interval);
  VAR_2->scan_plans[VAR_5].num_of_iterations =
   FUNC_0(VAR_6->iterations);
 }
}
