
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_vdev_start_ev_arg {int status; } ;
struct sk_buff {int dummy; } ;
struct ath10k {int last_wmi_vdev_start_status; int vdev_setup_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,char*,int,...) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*,struct wmi_vdev_start_ev_arg*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ath10k *VAR_3, struct sk_buff *VAR_4)
{
 struct wmi_vdev_start_ev_arg VAR_5 = {};
 int VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_3, VAR_0, "WMI_VDEV_START_RESP_EVENTID\n");

 VAR_3->last_wmi_vdev_start_status = 0;

 VAR_6 = FUNC_4(VAR_3, VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3, "failed to parse vdev start event: %d\n", VAR_6);
  VAR_3->last_wmi_vdev_start_status = VAR_6;
  goto out;
 }

 VAR_7 = FUNC_1(VAR_5.status);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_3, "vdev-start-response reports status error: %d (%s)\n",
       VAR_7, (VAR_7 == VAR_2) ?
       "chan-invalid" : "unknown");



  VAR_3->last_wmi_vdev_start_status = -VAR_1;
 }

out:
 FUNC_5(&VAR_3->vdev_setup_done);
}
