
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_disconnect_event {int proto_reason_status; int assoc_info; int assoc_resp_len; int bssid; int disconn_reason; } ;
struct wmi {int traffic_class; int is_wmm_enabled; } ;
struct ath6kl_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct ath6kl_vif*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct wmi *VAR_2, u8 *VAR_3, int VAR_4,
       struct ath6kl_vif *VAR_5)
{
 struct wmi_disconnect_event *VAR_6;
 VAR_2->traffic_class = 100;

 if (VAR_4 < sizeof(struct wmi_disconnect_event))
  return -VAR_1;

 VAR_6 = (struct wmi_disconnect_event *) VAR_3;

 FUNC_0(VAR_0,
     "wmi event disconnect proto_reason %d bssid %pM wmi_reason %d assoc_resp_len %d\n",
     FUNC_2(VAR_6->proto_reason_status), VAR_6->bssid,
     VAR_6->disconn_reason, VAR_6->assoc_resp_len);

 VAR_2->is_wmm_enabled = 0;

 FUNC_1(VAR_5, VAR_6->disconn_reason,
    VAR_6->bssid, VAR_6->assoc_resp_len, VAR_6->assoc_info,
    FUNC_2(VAR_6->proto_reason_status));

 return 0;
}
