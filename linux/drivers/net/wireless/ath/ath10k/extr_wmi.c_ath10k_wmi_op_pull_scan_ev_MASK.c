
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_scan_event {int vdev_id; int scan_id; int scan_req_id; int channel_freq; int reason; int event_type; } ;
struct wmi_scan_ev_arg {int vdev_id; int scan_id; int scan_req_id; int channel_freq; int reason; int event_type; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
          struct wmi_scan_ev_arg *VAR_3)
{
 struct wmi_scan_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->event_type = VAR_4->event_type;
 VAR_3->reason = VAR_4->reason;
 VAR_3->channel_freq = VAR_4->channel_freq;
 VAR_3->scan_req_id = VAR_4->scan_req_id;
 VAR_3->scan_id = VAR_4->scan_id;
 VAR_3->vdev_id = VAR_4->vdev_id;

 return 0;
}
