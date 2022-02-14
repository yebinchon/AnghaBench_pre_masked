
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct wmi_scan_ev_arg {int vdev_id; int scan_id; int scan_req_id; int channel_freq; int reason; int event_type; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct ath10k {int data_lock; TYPE_1__ scan; } ;
typedef enum wmi_scan_event_type { ____Placeholder_wmi_scan_event_type } wmi_scan_event_type ;
typedef enum wmi_scan_completion_reason { ____Placeholder_wmi_scan_completion_reason } wmi_scan_completion_reason ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int,int,void*,void*,void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,char*,...) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*,void*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct ath10k*,struct sk_buff*,struct wmi_scan_ev_arg*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct wmi_scan_ev_arg VAR_3 = {};
 enum wmi_scan_event_type VAR_4;
 enum wmi_scan_completion_reason VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_10(VAR_1, VAR_2, &VAR_3);
 if (VAR_10) {
  FUNC_3(VAR_1, "failed to parse scan event: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_4 = FUNC_0(VAR_3.event_type);
 VAR_5 = FUNC_0(VAR_3.reason);
 VAR_6 = FUNC_0(VAR_3.channel_freq);
 VAR_7 = FUNC_0(VAR_3.scan_req_id);
 VAR_8 = FUNC_0(VAR_3.scan_id);
 VAR_9 = FUNC_0(VAR_3.vdev_id);

 FUNC_11(&VAR_1->data_lock);

 FUNC_1(VAR_1, VAR_0,
     "scan event %s type %d reason %d freq %d req_id %d scan_id %d vdev_id %d state %s (%d)\n",
     FUNC_9(VAR_4, VAR_5),
     VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
     FUNC_2(VAR_1->scan.state), VAR_1->scan.state);

 switch (VAR_4) {
 case 129:
  FUNC_8(VAR_1);
  break;
 case 135:
  FUNC_5(VAR_1);
  break;
 case 136:
  FUNC_4(VAR_1);
  break;
 case 133:
  FUNC_6(VAR_1, VAR_6);
  break;
 case 128:
  FUNC_3(VAR_1, "received scan start failure event\n");
  FUNC_7(VAR_1);
  break;
 case 134:
 case 131:
 case 130:
 case 132:
 default:
  break;
 }

 FUNC_12(&VAR_1->data_lock);
 return 0;
}
