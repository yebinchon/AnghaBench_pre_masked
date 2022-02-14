
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_send_probe_resp_req_msg {TYPE_1__ header; int * bssid; int probe_resp_template_len; int probe_resp_template; } ;
struct wcn36xx {int hal_mutex; int hal_rsp_len; int hal_buf; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wcn36xx_hal_send_probe_resp_req_msg,int ) ;
 int FUNC_1 (int ,struct wcn36xx_hal_send_probe_resp_req_msg) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int *) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wcn36xx*,int ) ;
 int FUNC_9 (char*,int ) ;

int FUNC_10(struct wcn36xx *VAR_5,
          struct ieee80211_vif *VAR_6,
          struct sk_buff *VAR_7)
{
 struct wcn36xx_hal_send_probe_resp_req_msg VAR_8;
 int VAR_9;

 FUNC_3(&VAR_5->hal_mutex);
 FUNC_0(VAR_8, VAR_4);

 if (VAR_7->len > VAR_0) {
  FUNC_9("probe response template is too big: %d\n",
        VAR_7->len);
  VAR_9 = -VAR_1;
  goto out;
 }

 VAR_8.probe_resp_template_len = VAR_7->len;
 FUNC_2(&VAR_8.probe_resp_template, VAR_7->data, VAR_7->len);

 FUNC_2(VAR_8.bssid, VAR_6->addr, VAR_2);

 FUNC_1(VAR_5->hal_buf, VAR_8);

 FUNC_5(VAR_3,
      "hal update probe rsp len %d bssid %pM\n",
      VAR_8.probe_resp_template_len, VAR_8.bssid);

 VAR_9 = FUNC_8(VAR_5, VAR_8.header.len);
 if (VAR_9) {
  FUNC_6("Sending hal_update_proberesp_tmpl failed\n");
  goto out;
 }
 VAR_9 = FUNC_7(VAR_5->hal_buf, VAR_5->hal_rsp_len);
 if (VAR_9) {
  FUNC_6("hal_update_proberesp_tmpl response failed err=%d\n",
       VAR_9);
  goto out;
 }
out:
 FUNC_4(&VAR_5->hal_mutex);
 return VAR_9;
}
