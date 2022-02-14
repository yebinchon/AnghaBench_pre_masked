
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_start_scan_common {void* scan_ctrl_flags; void* probe_delay; void* max_scan_time; void* idle_time; void* probe_spacing_time; void* repeat_probe_time; void* max_rest_time; void* min_rest_time; void* dwell_time_passive; void* dwell_time_active; void* notify_scan_events; void* scan_priority; void* vdev_id; void* scan_req_id; void* scan_id; } ;
struct wmi_start_scan_arg {int scan_ctrl_flags; int probe_delay; int max_scan_time; int idle_time; int probe_spacing_time; int repeat_probe_time; int max_rest_time; int min_rest_time; int dwell_time_passive; int dwell_time_active; int notify_scan_events; int scan_priority; int vdev_id; int scan_req_id; int scan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

void FUNC_1(struct wmi_start_scan_common *VAR_2,
          const struct wmi_start_scan_arg *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_1;
 VAR_4 |= VAR_3->scan_id;

 VAR_5 = VAR_0;
 VAR_5 |= VAR_3->scan_req_id;

 VAR_2->scan_id = FUNC_0(VAR_4);
 VAR_2->scan_req_id = FUNC_0(VAR_5);
 VAR_2->vdev_id = FUNC_0(VAR_3->vdev_id);
 VAR_2->scan_priority = FUNC_0(VAR_3->scan_priority);
 VAR_2->notify_scan_events = FUNC_0(VAR_3->notify_scan_events);
 VAR_2->dwell_time_active = FUNC_0(VAR_3->dwell_time_active);
 VAR_2->dwell_time_passive = FUNC_0(VAR_3->dwell_time_passive);
 VAR_2->min_rest_time = FUNC_0(VAR_3->min_rest_time);
 VAR_2->max_rest_time = FUNC_0(VAR_3->max_rest_time);
 VAR_2->repeat_probe_time = FUNC_0(VAR_3->repeat_probe_time);
 VAR_2->probe_spacing_time = FUNC_0(VAR_3->probe_spacing_time);
 VAR_2->idle_time = FUNC_0(VAR_3->idle_time);
 VAR_2->max_scan_time = FUNC_0(VAR_3->max_scan_time);
 VAR_2->probe_delay = FUNC_0(VAR_3->probe_delay);
 VAR_2->scan_ctrl_flags = FUNC_0(VAR_3->scan_ctrl_flags);
}
