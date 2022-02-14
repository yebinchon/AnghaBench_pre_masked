
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int max_sched_scan_reqs; int max_sched_scan_plan_interval; int max_sched_scan_ie_len; void* max_match_sets; void* max_sched_scan_ssids; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct wiphy *VAR_4, bool VAR_5)
{

 VAR_4->max_sched_scan_reqs = VAR_5 ? VAR_0 : 1;
 VAR_4->max_sched_scan_ssids = VAR_1;
 VAR_4->max_match_sets = VAR_1;
 VAR_4->max_sched_scan_ie_len = VAR_3;
 VAR_4->max_sched_scan_plan_interval = VAR_2;
}
