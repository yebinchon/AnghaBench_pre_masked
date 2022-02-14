
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_start_scan_arg {int scan_req_id; int dwell_time_active; int dwell_time_passive; int min_rest_time; int max_rest_time; int max_scan_time; int probe_delay; int notify_scan_events; int n_bssids; TYPE_1__* bssids; int scan_ctrl_flags; scalar_t__ idle_time; scalar_t__ probe_spacing_time; scalar_t__ repeat_probe_time; int scan_priority; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {char* bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(struct ath10k *VAR_8,
    struct wmi_start_scan_arg *VAR_9)
{

 VAR_9->scan_req_id = 1;
 VAR_9->scan_priority = VAR_7;
 VAR_9->dwell_time_active = 50;
 VAR_9->dwell_time_passive = 150;
 VAR_9->min_rest_time = 50;
 VAR_9->max_rest_time = 500;
 VAR_9->repeat_probe_time = 0;
 VAR_9->probe_spacing_time = 0;
 VAR_9->idle_time = 0;
 VAR_9->max_scan_time = 20000;
 VAR_9->probe_delay = 5;
 VAR_9->notify_scan_events = VAR_6
  | VAR_2
  | VAR_1
  | VAR_4
  | VAR_5
  | VAR_3;
 VAR_9->scan_ctrl_flags |= VAR_0;
 VAR_9->n_bssids = 1;
 VAR_9->bssids[0].bssid = "\xFF\xFF\xFF\xFF\xFF\xFF";
}
